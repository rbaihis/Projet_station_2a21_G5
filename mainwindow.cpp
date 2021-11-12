#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include <QString>
#include <QDate>
#include <QMessageBox>
#include <QIntValidator>
#include <QSystemTrayIcon>
#include <QtPrintSupport/QPrinter>
#include <QPdfWriter>
#include <QPainter>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextEdit>
#include <qsqlquery.h>
#include "client.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pb_ajouter_clicked()
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
void MainWindow::on_le_Modifier_clicked()
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
void MainWindow::on_pb_ajouter_2_clicked()
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
void MainWindow::on_pb_supprimer_2_clicked()
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

void MainWindow::on_le_modifier_2_clicked()
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
void MainWindow::on_pb_supprimer_clicked()

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
