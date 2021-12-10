#include "dbconnexion.h"




bool Connection::createconnect()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("station");
    db.setUserName("ismail");//inserer nom de l'utilisateur
    db.setPassword("201JMT3841");//inserer mot de passe de cet utilisateur

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
