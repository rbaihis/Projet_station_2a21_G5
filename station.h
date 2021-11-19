#ifndef STATION_H
#define STATION_H
#include<QSqlQuery>
#include<QSqlQueryModel>

class station
{
    QString nom , ville , region;
    int numero,identifiant;


public:
    station();
    station(QString,int,QString,QString,int);


//getters
QString getNom() ;
int getnumero();
QString getville();
QString getregion();
int getID();
bool modifier();
QSqlQueryModel * afficher();

//setters
void setNom(QString nom) ;
void setnumero(int numero);
void setville(QString ville);
void setregion(QString region);
void setID(int identifiant);






//fonctionnalités de bases relatives à l'entité
bool ajouter();
bool EXCEL();
bool supprimer(int);
QSqlQueryModel * trides();
   QSqlQueryModel * triasc();
 QSqlQueryModel* tri(QString,QString);
};
#endif // STATION_H
