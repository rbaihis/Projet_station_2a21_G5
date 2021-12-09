#ifndef RECLAMATION_H
#define RECLAMATION_H
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QString>
#include <QDialog>



class Reclamation
{
    QString Nom , Prenom , Type_reclamation ;
    int Cin , Num_telephone , numBus , numStation ;
public:
    // constructeurs
    Reclamation(){}
    Reclamation ( int Cin ,QString Nom ,  QString prenom ,  int Num_telephone , QString Type_reclamation ,int numBus ,  int numStation );
 //Getters
     int getCin(){return Cin;}
    QString getNom(){return Nom;}
    QString getPrenom(){return  Prenom;}
    int getNum_telephone(){return Num_telephone;}
    QString getType_reclamation(){return Type_reclamation;}
    int getnumBus(){return numBus;}
    int getnumStation(){return numStation;}
    //Setters
     void setCin(int Cin){this->Cin=Cin;}
    void setNom(QString n){Nom=n;}
    void setPrenom(QString p){Prenom=p;}
    void setNum_telephone(int Num_telephone){this->Num_telephone=Num_telephone;}
    void setType_reclamation(QString tr){Type_reclamation=tr;}
    QSqlQueryModel * afficher_station();
    QSqlQueryModel * afficher_rh();
    QSqlQueryModel * afficher_bus();
    QSqlQueryModel * afficher_ticket();




    //fonctionnalité de base relative a l'entité reclamations
    bool ajouter();
    QSqlQueryModel * afficher();

    bool supprimer (int);

bool modifier(int Cin,QString Nom,QString Prenom ,int Num_Telephone , QString Type_reclamation ,int numBus , int numStation);
void genererPDFact();

QSqlQueryModel  * recherche(QString recherche);
QSqlQueryModel *afficher_trier( QString type,QString facon);
};

#endif // RECLAMATION_H
