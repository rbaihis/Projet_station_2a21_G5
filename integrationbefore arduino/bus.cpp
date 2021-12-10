#include "bus.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include<QTimeEdit>
#include<QFile>
#include<QImage>
#include<QFileDialog>
#include<QPixmap>
#include<qmessagebox.h>
#include<QSqlRecord>
Bus::Bus()
{
    ID_Bus=0;
    num_plaque=0;
    capacite=0;
    ligne=" ";



}

Bus::Bus(int ID_Bus,int num_plaque, int capacite,QString ligne)
{
  this->ID_Bus=ID_Bus;
    this->num_plaque=num_plaque;
    this->capacite=capacite;
    this->ligne=ligne;

}

bool Bus::ajouter()
{

    QString id_string= QString::number(ID_Bus);
    QString plaque_string= QString::number(num_plaque);
    QString capacite_string= QString::number(capacite);


    QSqlQuery query;
    query.prepare("INSERT INTO BUS ( ID_Bus, num_plaque, capacite, ligne) values (:ID_Bus, :num_plaque, :capacite, :ligne)");
    query.bindValue(":ID_Bus",id_string);
    query.bindValue(":num_plaque",plaque_string);
    query.bindValue(":capacite",capacite_string);
    query.bindValue(":ligne",ligne);




    return query.exec();
}

QSqlQueryModel* Bus::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();


          model->setQuery("SELECT * FROM BUS");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_bus"));
          model->setHeaderData(1, Qt::Horizontal,  QObject::tr("num_plaque"));
          model->setHeaderData(2, Qt::Horizontal,  QObject::tr("capacite"));
          model->setHeaderData(3,Qt::Horizontal,  QObject::tr("ligne"));

    return model;
}

bool Bus::modifier()
{
    QString id_string= QString::number(ID_Bus);
    QString plaque_string= QString::number(num_plaque);
    QString capacite_string= QString::number(capacite);


    QSqlQuery query;
    query.prepare("update BUS set ID_Bus= :ID_Bus, num_plaque= :num_plaque, capacite= :capacite, ligne= :ligne where ID_Bus= :ID_Bus");
    query.bindValue(":ID_Bus",id_string);
    query.bindValue(":num_plaque",plaque_string);
    query.bindValue(":capacite",capacite_string);
    query.bindValue(":ligne",ligne);
    return query.exec();

}



bool Bus::supprimer(int idB, int numpB)
{
    QSqlQuery query;
    QString id=QString::number(idB);
    QString numB=QString::number(numpB);
    query.prepare("Delete from bus where ID_BUS= :idB");
    query.prepare("Delete from bus where  num_plaque= :numpB");
    query.bindValue(":idB",id);

    query.bindValue(":numpB",numB);
    return query.exec();


}

QSqlQueryModel * Bus::rechercher(QString ligne_m)
{

    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM bus  WHERE ligne =  '"+ligne_m+"' ;");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_bus"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("num_plaque"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("capacite"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ligne"));
    return model ;


    return model ;
}

QSqlQueryModel * Bus::trier()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM bus  ORDER BY id_bus ;");


    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_bus"));
    model->setHeaderData(1, Qt::Horizontal,  QObject::tr("num_plaque"));
    model->setHeaderData(2, Qt::Horizontal,  QObject::tr("capacite"));
    model->setHeaderData(3,Qt::Horizontal,  QObject::tr("ligne"));

    return model;


}
QSqlQueryModel * Bus::trierP()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM bus  ORDER BY num_plaque ;");


    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_bus"));
    model->setHeaderData(1, Qt::Horizontal,  QObject::tr("num_plaque"));
    model->setHeaderData(2, Qt::Horizontal,  QObject::tr("capacite"));
    model->setHeaderData(3,Qt::Horizontal,  QObject::tr("ligne"));

    return model;


}



void Bus::writeExel()
{



    QSqlQuery q("select * from BUS");
     QSqlRecord rec= q.record();

     QFile fichier ("C:\\Users\\MSI\\Desktop\\Atelier_Connexion\\bus20.xlsx");
     if (fichier.open (QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
     {
         QTextStream stream(&fichier);

         int nomstation= rec.indexOf("nom_sation");
         int heurearriver= rec.indexOf("heure_arriver");
         int heuredepart= rec.indexOf("heure_depart");
         int retard=rec.indexOf("retart");
         int distance= rec.indexOf("distance");
         int duree= rec.indexOf("duree");


         stream <<"nomstation" << "," <<"heure_arriver" << "," <<"heure_depart"<< "," <<"retart"<< "," <<"distance"<<"," <<"duree";
         while (q.next())
                   stream  << q.value(nomstation).toString() << "," << q.value(heurearriver).toString() << "," << q.value(heuredepart).toString() << ","
                           << q.value(retard).toString()<< "," <<  q.value(distance).toString()<< "\n"<< "," <<q.value(duree).toString();
             fichier.close();
   }
}



