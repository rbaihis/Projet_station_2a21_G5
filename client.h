#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <QChar>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
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
              /*...............Metier...............*/
        QSqlQueryModel *load();
        bool clear();
        int count(int, QString);
        QString size();
        QChartView * piechart();
        QChartView * piechart2();
        QString read(QString);
        void write(QString,QString,QString);
        QString time();
        void clearh(QString);
        QSqlQueryModel * rechercher(QString );
        QSqlQueryModel * tri_id_ab();
        QSqlQueryModel * tri_age();
        QSqlQueryModel * tri_sexe();
        void stats1(QString ,QString ,int,int,QString);

private:
  int id_ab,age;
  QString nom,prenom,region,sexe;
};

#endif // CLIENT_H
