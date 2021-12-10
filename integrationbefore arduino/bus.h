#ifndef BUS_H
#define BUS_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QDateTimeEdit>
#include <QtNetwork/QSslSocket>

class Bus
{
    int  ID_Bus, num_plaque, capacite;
    QString ligne;




public:
    Bus();
    Bus (int,int,int,QString);
    int getIDBus(){return ID_Bus;}
    int getnumPlaque(){return num_plaque;}
    int getCapcite(){return capacite;}
    QString getligne(){return ligne;}


    void setIDBus(int id){ ID_Bus=id;}
    void setnomPlaque(int np){ num_plaque=np;}
    void setCapcite(int cap){ capacite=cap;}
    void setligne(QString l){ligne=l;}




    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int, int);
    bool modifier();
    void afficherTrajet();
    QSqlQueryModel * rechercher(QString);
    QSqlQueryModel * trier();
    bool passerRecla();
    void writeExel();
      QSqlQueryModel *trierP();






};

#endif // BUS_H
