#include "client.h"
#include <QSqlQuery>
#include <QtDebug>
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

