#include "dbconnexion.h"




bool Connection::createconnect()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("test-bd");
    db.setUserName("seif");//inserer nom de l'utilisateur
    db.setPassword("seif");//inserer mot de passe de cet utilisateur

    if (db.open())
    testconnection=true;
    else
        testconnection=false;


    return testconnection ;
}

void Connection::desconnection()
{

    db.close();
    db.removeDatabase(QSqlDatabase::defaultConnection);
    testconnection=false;


}
