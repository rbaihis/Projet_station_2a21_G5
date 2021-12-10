#include "dialogstation.h"
#include "ui_dialogstation.h"
#include<station.h>
#include<qstring.h>
#include<QMessageBox>
#include <QFileDialog>
#include <QtDebug>
#include <QFile>
#include"dialogstad.h"


DialogStation::DialogStation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogStation)
{
    ui->setupUi(this);

}

DialogStation::~DialogStation()
{
    delete ui;
}


void DialogStation::on_pb_ajouter_clicked()
{

    QString nom=ui->nom_station->text();
    QString ville=ui->le_ville->text();
    QString region=ui->le_region->text();
    int numero=ui->le_numero->text().toInt();
    int identifiant=ui->id_agent->text().toInt();
    station s(nom,numero,ville,region,identifiant);
    bool test=s.ajouter();
    if (test)
    { QMessageBox::information(this ,"ajout","ajout avec succée");}




}

void DialogStation::on_pb_supprimer_clicked()
{ station s;
  int numero=ui->numero_del->text().toInt();
  s.setnumero(numero);
  s.supprimer(numero);
  { QMessageBox::information(this ,"supprimer","suppression avec succée");}
}


void DialogStation::on_pb_afficher_clicked()
{station A;
    ui->tablestation->setModel(A.afficher());
}

void DialogStation::on_pb_modifier_clicked()
{
    QString nom=ui->nom_edit->text();
    QString ville=ui->ville_edit->text();
    QString region=ui->region_edit->text();
    int numero=ui->numstation_edit->text().toInt();
    int identifiant=ui->agent_edit->text().toInt();
    station s(nom,numero,ville,region,identifiant);
     bool test=s.modifier();
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("Modifier une station"),
                     QObject::tr("station modifiée.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

     }
     else
         QMessageBox::critical(nullptr, QObject::tr("Ajouter une station"),
                     QObject::tr("Erreur !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

}



/*
void MainWindow::on_pb_afficher_clicked()
{

}

void MainWindow::on_pb_modifier_clicked()
{

}
*/






void DialogStation::on_pushButton_32_clicked()
{
    QString colone=ui->col->currentText();
        QString ordre=ui->ord->currentText();
        station s;
        ui->tableViewja_3->setModel(s.tri(colone,ordre));
}

void DialogStation::on_pushButton_clicked()
{
    station t;
    t.EXCEL();
}

void DialogStation::on_pushButton_28_clicked()
{  DialogSTAD *dialog;
    dialog=new DialogSTAD(this);
    dialog->show();

}

void DialogStation::on_pb_valider_clicked()
{   if((ui->camera_ck->checkState())
    &&(ui->chaises_ck->checkState())
    &&(ui->tickets_ck->checkState())
    &&(ui->planning_ck->checkState())
    &&(ui->presence_ck->checkState())

    ){ QMessageBox::information(nullptr, QObject::tr("Station validee"),QObject::tr("Station validée.\n"
                                            "Click Cancel to exit."), QMessageBox::Cancel);


    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("Station non validee"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


    }

}
/*
void MainWindow::on_tabWidget_9_currentChanged(int index)
{

}*/

void DialogStation::on_pb_recherche_clicked()
{
        QString rech = ui->lineEdit_recherhche_2->text();
      station a;
        QSqlQueryModel * model=a.recherche(rech);
        ui->tableView_rech->setModel(model);
}

