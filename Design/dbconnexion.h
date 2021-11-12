#ifndef DBCONNEXION_H
#define DBCONNEXION_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class Connection
{

    bool testconnection=false;
public:

    Connection(){}

    QSqlDatabase db;

    bool createconnect();
    void desconnection();
    bool get_testConnection_Stat(){return  testconnection;}
};


#endif // DBCONNEXION_H
