#include "dialogabonne.h"
#include "ui_dialogabonne.h"

#include <QtDebug>
#include <QString>
#include <QDate>
#include <QSystemTrayIcon>
#include <QtPrintSupport/QPrinter>
#include <QFileDialog>
#include <qsqlquery.h>
#include "client.h"
using namespace std;
#include <QPieSlice>
#include <QPieSeries>
#include <QtCharts/QChartView>
#include "exporttoexcel.h"
#include <iostream>
#include <fstream>
#include <QMessageBox>
#include <QIntValidator>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QFile>
#include <QSortFilterProxyModel>
#include <QPdfWriter>
#include <QPainter>
#include <QTextDocument>
#include <QTextEdit>
#include <QTextStream>
#include <QWidget>
#include <QtSvg/QSvgRenderer>
#include <QDirModel>
#include "qrcode.h"
#include "qrwidget.h"
QT_CHARTS_USE_NAMESPACE
using qrcodegen::QrCode;
using qrcodegen::QrSegment;

Dialogabonne::Dialogabonne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogabonne)
{
    ui->setupUi(this);
    ui->le_id->setValidator(new QIntValidator (10000,99999,this));
    ui->tab_client->setModel(C.afficher());
    C.write(C.time(),"App started",File);
    ui->textBrowser->setText(C.read(File));
}

Dialogabonne::~Dialogabonne()
{
    delete ui;
}




void Dialogabonne::on_pb_ajouter_clicked()
{
    int id_ab=ui->le_id->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
    QString region=ui->les_region->currentText();
    int age=ui->le_age->text().toInt();
    QString sexe=ui->le_sexe->currentText();


    Client c(id_ab,nom,prenom,region,age,sexe);




bool test=c.ajouter();
if(test){
    QMessageBox::information(nullptr,QObject::tr("Client"),QObject::tr("abonne ajouté\n" "click ok to exit"),QMessageBox::Ok);
    ui->le_id->setText("");
    ui->le_nom->setText("");
    ui->le_prenom->setText("");
    ui->les_region->setCurrentText("");
    ui->le_age->setText("");
     ui->le_sexe->setCurrentText("");
     C.write(C.time(),"Client Ajouté",File);
     ui->textBrowser->setText(C.read(File));

    ui->tab_client->setModel(c.afficher());//actualisation
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
                             notifyIcon->show();
                             notifyIcon->setIcon(QIcon("icone.png"));

                             notifyIcon->showMessage("GESTION Abonnement   ","Abonne Ajouté",QSystemTrayIcon::Information,15000);
             QMessageBox::information(nullptr, QObject::tr("OK"),
                         QObject::tr("Ajout effectué.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);


}
else{
    QMessageBox::critical(nullptr,QObject::tr("Client"),QObject::tr("Erreur!\n" "click ok to exit"),QMessageBox::Ok);
}



}
void Dialogabonne::on_le_Modifier_clicked()
{
            int id_ab= ui->le_id->text().toInt();
            QString nom=ui->le_nom->text();
            QString prenom=ui->le_prenom->text();
            QString region=ui->les_region->currentText();
            int age= ui->le_age->text().toInt();
            QString sexe=ui->le_sexe->currentText();

                           Client c;
                bool test = c.update(id_ab,nom,prenom,region,age,sexe);
                if(test)
                {
                     ui->tab_client->setModel(c.afficher());
                     QMessageBox::information(nullptr,QObject::tr("OK"),
                       QObject::tr(" Client modifé") ,QMessageBox::Ok);
                    }else
                        QMessageBox::critical(nullptr,QObject::tr("Not ok"),
                          QObject::tr("Erreur !.\n""Click Ok to exit."), QMessageBox::Ok);
}
void Dialogabonne::on_pb_ajouter_2_clicked()
{
    int id=ui->le_id_2->text().toInt();
    QDate date_deb=ui->le_date_deb->date();
   QDate date_fin=ui->le_date_fin->date();

    Abonnement b(id,date_deb,date_fin);

bool test=b.ajouter();
if(test){
    QMessageBox::information(nullptr,QObject::tr("Abonnement"),QObject::tr("abonnement ajouté\n" "click ok to exit"),QMessageBox::Ok);
    ui->le_id_2->setText("");//bech ba3ed mankamel l ajout yarja3 a 0

    ui->tab_etudiant_2->setModel(b.afficher());//actualisation
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
                             notifyIcon->show();
                             notifyIcon->setIcon(QIcon("icone.png"));

                             notifyIcon->showMessage("GESTION ABONNEMENT   ","Abonnement Ajouté",QSystemTrayIcon::Information,15000);
             QMessageBox::information(nullptr, QObject::tr("OK"),
                         QObject::tr("Ajout effectué.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);


}
else{
    QMessageBox::critical(nullptr,QObject::tr("Abonnement"),QObject::tr("Erreur!\n" "click ok to exit"),QMessageBox::Ok);
}




}
void Dialogabonne::on_pb_supprimer_2_clicked()
{
    Abonnement b1;
    b1.setid(ui->le_id_sup_2->text().toInt());
        bool test=b1.supprimer(b1.getid());
        QMessageBox msgBox;
        if(test)
           { msgBox.setText("Suppression avec succes.");
            ui->tab_etudiant_2->setModel(b.afficher());
            QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
                                     notifyIcon->show();
                                     notifyIcon->setIcon(QIcon("icone.png"));

                                     notifyIcon->showMessage("GESTION ABONNEMENT   ","Abonnement supprimer",QSystemTrayIcon::Information,15000);
                     QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("suppression effectué.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);

    }
        else
            msgBox.setText("Echec de suppression");
        msgBox.exec();
}

void Dialogabonne::on_le_modifier_2_clicked()
{
    int id= ui->le_id_2->text().toInt();

            QDate date_deb=ui->le_date_deb->date();
            QDate date_fin=ui->le_date_fin->date();
                           Abonnement b(id,date_deb,date_fin);
                           ui->le_id_2->setText("");


                bool test = b.update(id,date_deb,date_fin);


                if(test)

                {
                     ui->tab_etudiant_2->setModel(b.afficher());
                     QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
                                              notifyIcon->show();
                                              notifyIcon->setIcon(QIcon("icone.png"));

                                              notifyIcon->showMessage("GESTION ABONNEMENT  ","Abonnement Modifier",QSystemTrayIcon::Information,15000);
                              QMessageBox::information(nullptr, QObject::tr("OK"),
                                          QObject::tr("Modification effectué.\n"
                                                      "Click Cancel to exit."), QMessageBox::Cancel);
                    QMessageBox::information(nullptr, QObject::tr("update "),
                                QObject::tr("Participant modifie\n"
                "Click Cancel to exit."), QMessageBox::Cancel);}
}
void Dialogabonne::on_pb_supprimer_clicked()

{Client a1;a1.setid_ab(ui->le_id_sup->text().toInt());

    bool test=a1.supprimer(a1.getid_ab());
   QMessageBox msgBox;
    if(test)
    {

          QMessageBox::information(nullptr,QObject::tr("OK"),
          QObject::tr("Suppression avec succes.\n"
          "click Cancel to exit"),QMessageBox::Cancel);
          ui->tab_client->setModel(a1.afficher());
      }
      else
          QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
          QObject::tr("Echec de suppression.\n"
          "Click Cancel to exit"), QMessageBox::Cancel);




}
void Dialogabonne::stats(QString table,QString critere,int valeur1,int valeur2,QString unite)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QString valeur1QString=QString::number(valeur1);
    QString valeur2QString=QString::number(valeur2);
                model->setQuery("select * from "+table+" where "+critere+"<"+valeur1QString);
                float countFirst=model->rowCount();
                model->setQuery("select * from "+table+" where " +critere+" between " +valeur1QString+ " and "+valeur2QString);
                float countSecond=model->rowCount();
                model->setQuery("select * from "+table+" where " +critere+">"+valeur2QString);
                float countThird=model->rowCount();
                float total=countFirst+countSecond+countThird;
                QString a=QString("moins de "+valeur1QString+" "+unite+" "+QString::number((countFirst*100)/total,'f',2)+"%" );
                QString b=QString("entre "+valeur1QString+ " et " +valeur2QString+" "+unite+" "+QString::number((countSecond*100)/total,'f',2)+"%" );
                QString c=QString("Plus que "+valeur2QString +" "+unite+" "+QString::number((countThird*100)/total,'f',2)+"%" );
                QPieSeries *series = new QPieSeries();
                series->append(a,countFirst);
                series->append(b,countSecond);
                series->append(c,countThird);
        if (countFirst!=0)
        {QPieSlice *slice = series->slices().at(0);
         slice->setLabelVisible();
         slice->setPen(QPen());}
        if ( countSecond!=0)
        {
                 QPieSlice *slice1 = series->slices().at(1);
                 slice1->setLabelVisible();
        }
       if(countThird!=0)
        {
                 QPieSlice *slice2 = series->slices().at(2);
                 slice2->setLabelVisible();
        }
                QChart *chart = new QChart();
                chart->addSeries(series);
                if(critere=="AGE")
                    critere="age";
                chart->setTitle("Pourcentage Par " +critere+":Nombre Des " +table+" :" +QString::number(total));
                chart->legend()->hide();
                QChartView *chartView = new QChartView(chart);
                chartView->setRenderHint(QPainter::Antialiasing);
                chartView->resize(1000,500);
                chartView->show();

}





void Dialogabonne::on_pb_stat_age_clicked()
{
    stats("CLIENT","AGE",18,55,"ANS");

}

void Dialogabonne::on_le_recherche_client_textChanged(const QString &arg1)
{
    if(ui->le_recherche_client->text()!="")
                    {
                        QString id_ab=ui->le_recherche_client->text();
                        ui->tab_client->setModel(C.rechercher(id_ab));
                    }
                     else
                        ui->tab_client->setModel(C.afficher());
}

void Dialogabonne::on_cb_tri_client_currentIndexChanged(int index)
{
    if(index==1)
                  ui->tab_client->setModel(C.tri_id_ab());
        else if(index==2)
                  ui->tab_client->setModel(C.tri_age());
        else if(index==3)
                  ui->tab_client->setModel(C.tri_sexe());
}

void Dialogabonne::on_pb_excel_clicked()
{
QString fileName = QFileDialog::getSaveFileName(this, tr("Exportation en fichier Excel"), qApp->applicationDirPath (),
                                                            tr("Fichiers d'extension Excel (*.xls)"));
            if (fileName.isEmpty())
                return;

            ExportExcelObject obj(fileName, "test-bd", ui->tab_client);


            obj.addField(0, "id_ab", "char(20)");
            obj.addField(1, "nom", "char(20)");
            obj.addField(2, "prenom", "char(20)");
            obj.addField(3, "ragion", "char(20)");
            obj.addField(4, "age", "char(20)");
            obj.addField(5, "sexe", "char(20)");




            int retVal = obj.export2Excel();

            if( retVal > 0)
            {
                QMessageBox::information(this, tr("FAIS!"),
                                         QString(tr("%1 enregistrements exportés!")).arg(retVal)
                                         );
 }           }





void Dialogabonne::on_CLEAR_clicked()
{
    C.clearh(File);
    ui->textBrowser->setText(C.read(File));
}


void Dialogabonne::on_pushButton_clicked()
{
    if(ui->tab_client->currentIndex().row()==-1)
                   QMessageBox::information(nullptr, QObject::tr("Suppression"),
                                            QObject::tr("Veuillez Choisir un animal du Tableau.\n"
                                                        "Click Ok to exit."), QMessageBox::Ok);
               else
               {

                    int le_id=ui->tab_client->model()->data(ui->tab_client->model()->index(ui->tab_client->currentIndex().row(),0)).toInt();
                    const QrCode qr = QrCode::encodeText(std::to_string(le_id).c_str(), QrCode::Ecc::LOW);
                    std::ofstream myfile;
                    myfile.open ("qrcode.svg") ;
                    myfile << qr.toSvgString(1);
                    myfile.close();
                    QSvgRenderer svgRenderer(QString("qrcode.svg"));
                    QPixmap pix( QSize(90, 90) );
                    QPainter pixPainter( &pix );
                    svgRenderer.render( &pixPainter );
                    ui->QRCODE_3->setPixmap(pix);
               }
    }



void Dialogabonne::on_tab_client_activated(const QModelIndex &index)
{
     ui->le_id->setText(ui->tab_client->model()->data(ui->tab_client->model()->index(index.row(),0)).toString());
     ui->le_nom->setText(ui->tab_client->model()->data(ui->tab_client->model()->index(index.row(),1)).toString());
     ui->le_prenom->setText(ui->tab_client->model()->data(ui->tab_client->model()->index(index.row(),2)).toString());



}

