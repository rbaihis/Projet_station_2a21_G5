
#include "Reclamation.h"
#include "maquette_yesmin.h"
#include "ui_maquette_yesmin.h"
#include <QMessageBox>
#include <QIntValidator>
#include"dialog.h"
//#include<arduinomaq.h>
maquette_yesmin::maquette_yesmin(QWidget *parent) : QDialog(parent),

    ui(new Ui::maquette_yesmin)
{
    ui->setupUi(this);
    ui->le_cin->setValidator(new QIntValidator(0,9999999,this));
 ui->tab_reclamation->setModel(R.afficher());
}

maquette_yesmin::~maquette_yesmin()
{
    delete ui;
}
void maquette_yesmin::on_pb_ajouter_clicked()
{

    int Cin=ui->le_cin->text().toInt();
   QString Nom=ui->le_nom->text();
           QString Prenom=ui->le_prenom->text();
           int Num_Telephone=ui->le_num_telephone->text().toInt();
           QString Type_reclamation=ui->le_type_reclamation->text();
           int numBus=ui->le_numbus->text().toInt();
           int numStation=ui->le_numstation->text().toInt();

           Reclamation R (Cin , Nom ,  Prenom , Num_Telephone , Type_reclamation , numBus , numStation );
           bool test=R.ajouter();
           if(test)
{
               ui->tab_reclamation->setModel(R.afficher());

           QMessageBox::information(nullptr, QObject::tr(" ok"),QObject::tr("Ajout effectué" " click cancel ro exit"), QMessageBox::Cancel);
           }
           else
           {
QMessageBox::critical(nullptr, QObject::tr("not ok"),QObject::tr("ajout non effectué \n" "click Cancel to exit"), QMessageBox::Cancel);
}
}


void maquette_yesmin::on_pb_supprimer_clicked()
{
    int Cin=ui->le_Cin->text().toInt();
bool test=R.supprimer(Cin);
if(test)
{
    ui->tab_reclamation->setModel(R.afficher());

    QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Suppression effectuée \n""click cancel to exit"),QMessageBox::Cancel);
}
else
    QMessageBox::critical(nullptr,QObject::tr("not ok"),QObject::tr("supression non effectuée \n ""click cancel to exit"),QMessageBox::Cancel);
}

void maquette_yesmin::on_pushButton_modifier_clicked()
{
       int Cin = ui->modifier_Cin ->text().toInt();
       QString Nom=ui->modifier_Nom->text();
       QString Prenom=ui->modifier_Prenom->text();
       int Num_Telephone = ui->modifier_Num_Telephone ->text().toInt();
       QString Type_reclamation=ui->modifier_Type_reclamation->text();
       int numBus= ui->modifier_numBus ->text().toInt();
       int numStation= ui->modifier_numStation ->text().toInt();



         bool test=R.modifier(Cin,Nom,Prenom,Num_Telephone,Type_reclamation,numBus,numStation);
             if (test)
             {
                     ui->tab_reclamation->setModel(R.afficher());
                 QMessageBox::information(nullptr,QObject::tr("OK"),
                                      QObject::tr("modification établie"),
                                      QMessageBox::Ok);}
             else{
             QMessageBox::critical(nullptr,QObject::tr("ERROR404"),
                                     QObject::tr("modification non établie"),
                                     QMessageBox::Cancel);}
}

void maquette_yesmin::on_Generer_PDF_clicked()
{
        Reclamation R;
         R.setCin(ui->id_pdf->text().toInt());
        R.genererPDFact();


}

void maquette_yesmin::on_pb_recherche_clicked()
{
    QString rech = ui->id_search->text();

   Reclamation R;
    QSqlQueryModel * model=R.recherche(rech);
    ui->tab_search->setModel(model);
}

void maquette_yesmin::on_pb_tri_clicked()
{
    int Cin=ui->le_cin->text().toInt();
   QString Nom=ui->le_nom->text();
           QString Prenom=ui->le_prenom->text();
           int Num_Telephone=ui->le_num_telephone->text().toInt();
           QString Type_reclamation=ui->le_type_reclamation->text();
           int numBus=ui->le_numbus->text().toInt();
           int numStation=ui->le_numstation->text().toInt();

           Reclamation R (Cin , Nom ,  Prenom , Num_Telephone , Type_reclamation , numBus , numStation );

      if(ui->radioButton_trier_reclamation_AZ->isChecked()){
      QString type=ui->comboBox_tri_reclamation->currentText();
          ui->tab_search->setModel(R.afficher_trier(type,"ASC"));}

      if(ui->radioButton_trier_reclamation_ZA->isChecked()){
          QString type=ui->comboBox_tri_reclamation->currentText();
              ui->tab_search->setModel(R.afficher_trier(type,"DESC"));}
}

void maquette_yesmin::on_pb_stat_clicked()
{
    Dialog *dialog;
dialog=new Dialog(this);
dialog->show();
}

void maquette_yesmin::on_Trier_currentChanged(int index)
{
    ui->tab_reclamation->setModel(R.afficher());
    ui->rh_table->setModel(R.afficher_rh());
    ui->bus_table->setModel(R.afficher_bus());
    ui->ticket_table->setModel(R.afficher_ticket());
    ui->station_table->setModel(R.afficher_station());




}

//void maquette_yesmin::on_pb_arduino_clicked()
//{
//    arduinomaq *arduino;
//        arduino=new arduinomaq(this);
//        arduino->show();
//}
