#include "station.h"
#include<qstring.h>
#include<qdebug.h>
#include<QSqlRecord>
#include<QFile>
station::station()
  {
   this->nom="";
   this->numero=0;
   this->ville="";
   this->region="";
   this->identifiant=0;
}
station::station(QString nom,int numero,QString ville,QString region,int identifiant)
{
    this->nom=nom;
    this->numero=numero;
    this->ville=ville;
    this->region=region;
    this->identifiant=identifiant;

}
bool station::ajouter()
 {
    QSqlQuery query;

    QString res = QString::number(numero);

    query.prepare("insert into station(nom,numero,ville,region,id_agent)" "values(:nom,:numero,:ville,:region,:identifiant)");
   //creation des variables liées
     query.bindValue(":nom",nom);
     query.bindValue(":numero",numero);
     query.bindValue(":ville",ville);
     query.bindValue(":region",region);
     query.bindValue(":identifiant",identifiant);
     return query.exec();
 }

void station::setnumero(int numero)
{
    this->numero=numero;
}





bool station::supprimer(int numero)
 {
    QSqlQuery query;

    QString res = QString::number(numero);

    query.prepare("delete from station where numero = :numero");

     query.bindValue(":numero",res);
     return query.exec();



}
QSqlQueryModel * station:: afficher()
{
   QSqlQueryModel * model=new QSqlQueryModel();
   model->setQuery("select * from station");
   model->setHeaderData(0,Qt::Horizontal,QObject::tr("nom"));
   model->setHeaderData(1,Qt::Horizontal,QObject::tr("numero"));
   model->setHeaderData(2,Qt::Horizontal,QObject::tr("ville"));
   model->setHeaderData(3,Qt::Horizontal,QObject::tr("region"));
   model->setHeaderData(4,Qt::Horizontal,QObject::tr("identifiant"));
      return model;
}


bool station::modifier()
{

QSqlQuery query;



    query.prepare("update station set  nom=?,id_agent=?, ville=?, region=?,ticket = ?, camera=? where numero=?");
    //query.prepare("update station set (id_agent, ville, region) where (numero) " "VALUES (?, ?, ?, ?)");
    query.addBindValue(nom);
    query.addBindValue(identifiant);
    query.addBindValue(ville);
    query.addBindValue(region);
    query.addBindValue(0);
    query.addBindValue(0);
    query.addBindValue(0);
    query.addBindValue(numero);


//qDebug() << nom << identifiant << ville << region << numero ;

return    query.exec();
}
QSqlQueryModel * station::triasc()
{
    QSqlQueryModel * model= new QSqlQueryModel();
       model->setQuery("select * from station order by numero ASC");


           return model;
}
QSqlQueryModel* station::trides()
{
    QSqlQueryModel * model= new QSqlQueryModel();
        model->setQuery("select * from station order by numero DESC");




            return model;
}

QSqlQueryModel*  station::tri(QString colone, QString ordre)
{
QSqlQueryModel* model=new QSqlQueryModel();
model->setQuery("select * from station order by "+colone+" "+ordre+"");
return model;
}


bool station::EXCEL()
{
    QSqlQuery q("select * from station");
      QSqlRecord rec = q.record();

      QFile fichier("C:/Users/MHIRI/Desktop/excel/result.csv");

      if(fichier.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
      {
          QTextStream stream(&fichier);

      int nomCol = rec.indexOf("nom");
      int numCol = rec.indexOf("numero");
      int villeCol = rec.indexOf("ville");
      int regionCol = rec.indexOf("region");
      int idagentCol = rec.indexOf("id_agent");



      stream << "nom" << "," << "numero" << "," << "ville" << "," << "region" << "," << "id_agent" <<  "\n";

      while (q.next())
          stream  << q.value(nomCol).toString() << "," << q.value(numCol).toString() << "," << q.value(villeCol).toString() << ","
                  << q.value(regionCol).toString()<< "," <<  q.value(idagentCol).toString()<< "\n";
    fichier.close();
    }
}
