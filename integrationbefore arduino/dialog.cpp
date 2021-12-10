#include "dialog.h"
#include "ui_dialog.h"
#include<QApplication>
#include<QMessageBox>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QSqlRecord>
#include<QImage>
#include<QFileDialog>
#include "smtp.h"
#include<QSqlDatabase>
#include<QVariant>
#include <QFileDialog>
#include <QDate>
#include <QSqlError>
#include<QtPrintSupport/QPrinter>
#include<QtPrintSupport/QPrintDialog>
#include<QPainter>
#include<QTimer>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->le_id->setValidator( new QIntValidator(0, 999999999, this));
    ui->le_plaque->setValidator( new QIntValidator(0, 999999999, this));
    ui->le_IDmodifier->setValidator( new QIntValidator(0, 999999999, this));
    ui->le_plaqueModifier->setValidator( new QIntValidator(0, 999999999, this));

       connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
       connect(ui->exitBtn, SIGNAL(clicked()),this, SLOT(close()));


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pb_ajouter_clicked()
{
    int ID_Bus=ui->le_id->text().toInt();
    int num_plaque=ui->le_plaque->text().toInt();
    int capacite=ui->le_capacite->text().toInt();
    QString ligne=ui->le_ligne->text();
    Bus b(ID_Bus ,num_plaque ,capacite,ligne);

    bool test=b.ajouter();
    if(test)
    {

        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Ajout effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr(" not ok"),
                    QObject::tr("Ajout non effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}


void Dialog::on_pb_supprimer_clicked()
{
    int ID_Bus=ui->le_nBS->text().toInt();
    int num_plaque=ui->le_pbS->text().toInt();
    bool test=b.supprimer(ID_Bus, num_plaque);
    if(test)
    {

        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Suppression effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr(" not ok"),
                    QObject::tr("Suppression non effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}


void Dialog::on_pb_modifier_clicked()
{
    int ID_Bus=ui->le_IDmodifier->text().toInt();
    int num_plaque=ui->le_plaqueModifier->text().toInt();
    int capacite=ui->le_capModifier->text().toInt();
    QString ligne=ui->le_ligneModifier->text();
    Bus b(ID_Bus ,num_plaque ,capacite,ligne);

    bool test=b.modifier();
    if(test)
    {
        ui->tab_bus->setModel(b.afficher());

        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("update effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr(" not ok"),
                    QObject::tr("update non effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}


void Dialog::on_pb_recherche_clicked()
{
    QString ligne=ui->le_ligneR->text();
     ui->tab_recherche->setModel(b.rechercher(ligne));
}



void Dialog::on_pb_trier_clicked()
{
     ui->tab_recherche->setModel(b.trier());
}


void Dialog::on_pb_afficherTr_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,tr("choose"), " " , tr("image (*.png *.jpg *.jpeg *.bmp *.gif)"));
            if ( QString::compare(filename, QString()) != 0 )
            {
                QImage image;
                bool valid =image.load(filename);
                if (valid)
                {
                    ui->le_chemin->setText(filename);
                    image =image.scaledToWidth(ui->photoTrajet->width(),Qt::SmoothTransformation);
                    ui->photoTrajet->setPixmap(QPixmap::fromImage(image));
}
            }

}



void Dialog::on_pb_afficher_clicked()
{
    ui->tab_bus->setModel(b.afficher());

}



void Dialog::on_pb_AccFexel_clicked()
{



    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"),  qApp->applicationDirPath (),
                                                               tr("Excel Files (*.xls)"));

    QSqlQuery q("select * from BUS");
     QSqlRecord rec= q.record();

     QFile fichier (fileName);
     if (fichier.open (QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
     {
         QTextStream stream(&fichier);

         int nomstation= rec.indexOf("nom_sation");
         int heurearriver= rec.indexOf("heure_arriver");
         int heuredepart= rec.indexOf("heure_depart");
         int retard=rec.indexOf("retart");
         int distance= rec.indexOf("distance");
         int duree= rec.indexOf("duree");


         stream <<"nomstation" << "," <<"heure_arriver" << "," <<"heure_depart"<< "," <<"retart"<< "," <<"distance"<<"," <<"duree"<<"\n";
         while (q.next())
                   stream  << q.value(nomstation).toString() << "," << q.value(heurearriver).toString() << "," << q.value(heuredepart).toString() << ","
                           << q.value(retard).toString()<< "," <<  q.value(distance).toString()<<  "," <<q.value(duree).toString()<<"\n";
   }




 }


void Dialog::sendMail()
{
    Smtp* smtp = new Smtp(ui->le_nom_2->text(), ui->le_mdp->text(), "smtp.gmail.com", 465);

      connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));


    smtp->sendMail(ui->le_nom_2->text(), ui->le_receveur->text() , ui->le_objet->text(),ui->le_recla->text());



}

void Dialog::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}



void Dialog::on_pb_imp_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(0,"Open File",QString(),"PNG File(*.png *.jpg *.jpeg *.bmp *.gif)");

            QPrinter printer;
            QPrintDialog *dlg = new QPrintDialog(&printer,0);
            if(dlg->exec() == QDialog::Accepted) {
                    QImage img(fileName);
                    QPainter painter(&printer);
                    painter.drawImage(QPoint(0,0),img);
                    painter.end();
            }

            delete dlg;

}

void Dialog::on_pb_trierP_clicked()
{
    ui->tab_recherche->setModel(b.trierP());

}
void Dialog::on_pb_rechercheID_clicked()
{
    QString id=ui->le_idR->text();
     ui->tab_recherche->setModel(b.rechercherID(id));
}


