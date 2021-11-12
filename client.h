#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
class Client
{

public:
    Client();
    Client(int,QString,QString,QString,int,QString);
        int getid_ab();
        QString getnom();
        QString getprenom();
        QString getregion();
        int getage();
        QString getsexe();

        void setid_ab(int);
        void setnom(QString);
        void setprenom(QString);
        void setregion(QString);
        void setage(int);
        void setsexe(QString);
        bool ajouter();
        QSqlQueryModel* afficher();
        bool update(int , QString ,QString ,QString ,int, QString );
              bool supprimer(int);
private:
  int id_ab,age;
  QString nom,prenom,region,sexe;
};

#endif // CLIENT_H
