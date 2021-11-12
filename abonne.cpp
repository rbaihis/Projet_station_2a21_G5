#include "abonne.h"
#include<QSqlQuery>
#include<QtDebug>
#include <QObject>
Abonne::Abonne()
{
id_ab=0; nom=""; prenom="";age=0 ;sexe="";
}
Abonne::Abonne(int id_ab,QString nom,QString prenom,int age,QString sexe)
{
    this->id_ab=id_ab; this->nom=nom; this->prenom=prenom; this->age=age;this->sexe=sexe;

}
int Abonne::getid_ab() {return id_ab;}
QString Abonne::getnom(){return nom;}
QString Abonne::getprenom(){return prenom;}
int Abonne::getage() {return age;}
QString Abonne::getsexe() {return sexe;}
void Abonne::setid_ab(int id_ab){this->id_ab=id_ab;}
void Abonne::setnom(QString nom){this->nom=nom;}
void Abonne::setprenom(QString prenom){this->prenom=prenom;}
void Abonne::setage(int age){this->age=age;}
void Abonne::setsexe(QString sexe){this->sexe=sexe;}
bool Abonne::ajouter()
{ bool test=false;
    QSqlQuery query;
    QString id_ab_string= QString::number(id_ab);
          query.prepare("INSERT INTO etudiant (id_ab, nom, prenom,payement,nbr_chats,sexe) "
                        "VALUES (:id_ab, :nom, :prenom, :payement, :nbr_chats, :sexe)");
          query.bindValue(0, id_ab_string);
          query.bindValue(1, nom);
          query.bindValue(2, prenom);
          query.bindValue(3, age);
          query.bindValue(5, sexe);
        return query.exec();



    return test;

}
bool  Abonne::supprimer(int id_ab)
{  QSqlQuery query;
    query.prepare("delete from etudiant where id_ab=:id_ab");
  query.bindValue(0, id_ab);
return query.exec();


}
QSqlQueryModel* Abonne::afficher()
{
   QSqlQueryModel* model=new QSqlQueryModel();
         model->setQuery("SELECT* FROM etudiant");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("Payement"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbr_chats"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));
  return model;
}




QSqlQueryModel* Abonne::rechercher (const QString &aux)

{
    QSqlQueryModel* model = new QSqlQueryModel();

    model->setQuery("select * from etudiant where ((id_ab || nom || prenom || payement || nbr_chats || sexe) LIKE '%"+aux+"%')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_ab"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("payement"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbr_chats"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));

    return model;

}

