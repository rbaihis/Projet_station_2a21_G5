#include "client.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
#include <QDateTime>
Client::Client()
{
    id_ab=0; nom=""; prenom="";region="";age=0;sexe="";
    }
Client::Client(int id_ab,QString nom,QString prenom ,QString region,int age,QString sexe)
{
    this->id_ab=id_ab; this->nom=nom; this->prenom=prenom;this->region=region; this->age=age;this->sexe=sexe;
}
int Client::getid_ab() {return id_ab;}
QString Client::getnom(){return nom;}
QString Client::getprenom(){return prenom;}
QString Client::getregion(){return region;}
int Client::getage() {return age;}
QString Client::getsexe() {return sexe;}
void Client::setid_ab(int id_ab){this->id_ab=id_ab;}
void Client::setnom(QString nom){this->nom=nom;}
void Client::setprenom(QString prenom){this->prenom=prenom;}
void Client::setregion(QString region){this->region=region;}
void Client::setage(int age){this->age=age;}
void Client::setsexe(QString sexe){this->sexe=sexe;}


bool Client::ajouter()
{
bool test=false;
QSqlQuery query;
    QString id_ab_string= QString::number(id_ab);
    QString age_string= QString::number(age);
          query.prepare("INSERT INTO CLIENT (id_ab, nom, prenom,region,age,sexe) "
                        "VALUES (:id_ab, :nom, :prenom, :region,:age, :sexe)");
          query.bindValue(0, id_ab_string);
          query.bindValue(1, nom);
          query.bindValue(2, prenom);
          query.bindValue(3, region);
          query.bindValue(4, age_string);
          query.bindValue(5, sexe);
        return query.exec();


    return test;

}
bool Client::update(int id_ab, QString nom,QString prenom,QString region,int age,QString sexe)
{
QString id_ab_string=QString::number(id_ab);
QString age_string=QString::number(age);
    QSqlQuery query;
    query.prepare("UPDATE client SET nom=:nom,prenom=:prenom,region=:region,age=:age,sexe=:sexe WHERE id_ab =:id_ab");
    query.bindValue(":id_ab", id_ab_string);
    query.bindValue(":nom",nom );
    query.bindValue(":prenom", prenom);
    query.bindValue(":ragion", region);
    query.bindValue(":age", age_string);
    query.bindValue(":sexe",sexe );
    return    query.exec();
}
QSqlQueryModel* Client::afficher()
{
   QSqlQueryModel* model=new QSqlQueryModel();
         model->setQuery("SELECT* FROM client");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("region"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));
  return model;
}

bool  Client::supprimer(int id_ab)
{  QSqlQuery query;
    query.prepare("delete from client where id_ab=:id_ab");
  query.bindValue(0, id_ab);
return query.exec();


}

QSqlQueryModel * Client::rechercher(QString id_ab)
 {
 QSqlQueryModel * model= new QSqlQueryModel();

 model->setQuery("SELECT * FROM CLIENT WHERE  id_ab LIKE '%"+id_ab+"%'" );
 model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
 model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
 model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
 model->setHeaderData(3, Qt::Horizontal, QObject::tr("region"));
 model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));
 model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));

 return model ;
 }
QSqlQueryModel *Client::tri_id_ab()
 {
     QSqlQueryModel * model=new QSqlQueryModel();

     model->setQuery("select * from  client ORDER BY id_ab");

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("region"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));
return model;
 }

 QSqlQueryModel *Client::tri_age()
 {
     QSqlQueryModel * model=new QSqlQueryModel();

     model->setQuery("select * from  client ORDER BY age");

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("region"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));
return model;
 }

 QSqlQueryModel *Client::tri_sexe()
 {
     QSqlQueryModel * model=new QSqlQueryModel();

     model->setQuery("select * from  client ORDER BY sexe");

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("region"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));
return model;
 }

 QString Client::read(QString File)
 {
     QFile file(File);
     if(!file.open(QIODevice::ReadOnly))
         QMessageBox::information(0,"info",file.errorString());

     QTextStream in(&file);

     return  in.readAll();

 }

 void Client::write(QString time, QString txt,QString File)
 {
     QFile file(File);
     if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
     {
         QTextStream stream(&file);
         stream<<time<<" "<<txt<<endl;
         file.close();
     }
 }

 QString Client::time()
 {
     QDateTime time=time.currentDateTime();
     return  time.toString();

 }

 void Client::clearh(QString File)
 {
     QFile file(File);
     file.open(QFile::WriteOnly|QFile::Truncate);
 }
 void Client::stats1(QString table,QString critere,int valeur1,int valeur2,QString unite)
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
                 if(critere=="date")
                     critere="date";
                 chart->setTitle("Pourcentage Par " +critere+":Nombre Des " +table+" :" +QString::number(total));
                 chart->legend()->hide();
                 QChartView *chartView = new QChartView(chart);
                 chartView->setRenderHint(QPainter::Antialiasing);
                 chartView->resize(1000,500);
                 chartView->show();

 }
