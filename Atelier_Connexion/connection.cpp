#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{
    db = QSqlDatabase::addDatabase("QODBC");
    bool test=false;
db.setDatabaseName("projet2A");
db.setUserName("salima");//inserer nom de l'utilisateur
db.setPassword("esprit18");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}

void Connection::closeConnection(){db.close();}
