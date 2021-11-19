#include "Reclamation.h"
#include <QDebug>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QObject>
#include <QApplication>
#include <QtCore>
#include <QtPrintSupport/QPrinter>
#include <QPdfWriter>
#include <QPainter>
#include<QPaintEngineState>
#include <QFileDialog>
#include <QtDebug>
#include <QFile>
#include <QComboBox>
#include<QPainter>
#include<QPdfWriter>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QPrintDialog>
#include<QPrinter>


Reclamation::Reclamation( int Cin ,QString Nom , QString Prenom , int Num_telephone , QString Type_reclamation  , int numBus ,  int numStation )
{this->Cin=Cin;
    this->Nom = Nom;
    this->Prenom=Prenom;
     this->Num_telephone=Num_telephone;
    this->Type_reclamation=Type_reclamation;
    this->numBus=numBus;
    this->numStation=numStation;
}
bool Reclamation :: ajouter()
{
    QSqlQuery query;

    QString res = QString :: number ( Cin);

    QString res1 = QString :: number ( Num_telephone);
    QString res2=QString:: number(numBus);
    QString res3=QString :: number(numStation);
    query.prepare("insert into reclamation ( Cin , Nom , Prenom , Num_Telephone , Type_reclamation , numBus , numStation )"
                  "values (? , ?, ? , ? ,?, ?, ?)");
    //creation des variables liées
    query.addBindValue( res);
    query.addBindValue( Nom);
    query.addBindValue(Prenom);
    query.addBindValue(res1);
    query.addBindValue(Type_reclamation);
    query.addBindValue( res2);
    query.addBindValue( res3);
    return query.exec(); //exec() envoie la requete pour l'executer

}
QSqlQueryModel * Reclamation :: afficher()
{

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT* FROM reclamation");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Cin"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Num_Telephone"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type_reclamation"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("numBus"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("numStation"));


return model;
}
QSqlQueryModel * Reclamation :: afficher_station()
{

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT* FROM reclamation where type_reclamation='station' ");

return model;
}
QSqlQueryModel * Reclamation :: afficher_ticket()
{

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT* FROM reclamation where type_reclamation='ticket' ");

return model;
}
QSqlQueryModel * Reclamation :: afficher_bus()
{

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT* FROM reclamation where type_reclamation='bus' ");

return model;
}
QSqlQueryModel * Reclamation :: afficher_rh()
{

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT* FROM reclamation where type_reclamation='rh' ");

return model;
}
bool  Reclamation :: supprimer(int Cin)
{
QSqlQuery query;
QString res=QString::number(Cin);
query.prepare("Delete from Reclamation where Cin =?");
query.addBindValue(res);
return query.exec();
}
bool Reclamation::modifier(int Cin, QString Nom,QString Prenom,int Num_telephone , QString Type_reclamation , int numBus , int numStation)
{

    QSqlQuery query;

    QString res=QString::number(Cin);
    QString res1=QString::number(Num_telephone);

    QString res2=QString::number(numBus);

    QString res3=QString::number(numStation);
    query.prepare("UPDATE reclamation SET Nom= ?, prenom= ?, Num_Telephone= ?,Type_reclamation= ?, numbus= ?, numstation=? where cin= ? ");
    query.addBindValue( Nom);
    query.addBindValue(Prenom);
    query.addBindValue(res1);
    query.addBindValue(Type_reclamation);
    query.addBindValue( res2);
    query.addBindValue( res3);
    query.addBindValue( res);

            return    query.exec();

}
void Reclamation::genererPDFact()
{
    QPrinter printer;
       printer.setOutputFormat(QPrinter::PdfFormat);
       printer.setOutputFileName("C:/Users/ASUS/OneDrive/Images/pdf/nonwritable.pdf");
       QPainter painter;
       if (! painter.begin(&printer)) {  qWarning("failed to open file, is it writable?"); return;}
       //printer.setPageMargins(QMargins(100, 50, 30, 30));
       painter.setPen(Qt::blue);
          painter.setFont(QFont("Arial", 50));
        painter.drawText(60,180, "Reclamation");
        painter.setPen(Qt::black);
         painter.setFont(QFont("Arial", 12));
         painter.drawText(20,300, "Madame, Monieur\n");
          painter.drawText(20,330,"Smart Station Vous Offre Cette Reclamation Pour Resoudre Tout Vos Problemes");
          painter.setPen(Qt::red);
             painter.setFont(QFont("Arial", 30));
           painter.drawText(20,430, "Information Reclamation ");
painter.setPen(Qt::black);
          painter.drawRect(10,30,940,1300);

                                  painter.setFont(QFont("Arial", 13));
                                  painter.drawText(50,600,"CIN");
                                  painter.drawText(200,600,"NOM");
                                  painter.drawText(350,600,"PRENOM");
                                  painter.drawText(520,600,"Type Reclamation");
                                  painter.drawText(650,600,"Num Telephone");
                                  painter.drawText(800,600,"Num Bus");
                                  painter.drawText(950,600,"Num Station");

                                  QSqlQuery query;
                                  query.prepare("Select * from reclamation where CIN=:CIN ");
                                  query.bindValue(":Cin", Cin);
                                  query.exec();

                                  while (query.next())
                                  {
                                      painter.drawText(50,700,query.value(0).toString());
                                      painter.drawText(200,700,query.value(1).toString());
                                      painter.drawText(350,700,query.value(2).toString());
                                      painter.drawText(520,700,query.value(5).toString());
                                      painter.drawText(650,700,query.value(3).toString());
                                      painter.drawText(800,700,query.value(4).toString());

                                  }

       painter.end();
}
       QSqlQueryModel  * Reclamation::recherche(QString recherche)
       {
           QSqlQueryModel* model = new QSqlQueryModel();

           model->setQuery("SELECT * FROM reclamation WHERE Cin LIKE '"+recherche+"%' OR Num_Telephone LIKE '"+recherche+"%' OR Type_reclamation LIKE '"+recherche+"%'");
         /*  model->setHeaderData(0, Qt::Horizontal, QObject::tr("Cin"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
           model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type reclamation"));
           model->setHeaderData(4, Qt::Horizontal, QObject::tr("Num Telephone"));
           model->setHeaderData(5, Qt::Horizontal, QObject::tr("numBus"));
            model->setHeaderData(5, Qt::Horizontal, QObject::tr("numStation"));
*/
           return model;
       }
       QSqlQueryModel *Reclamation::afficher_trier( QString type,QString facon)
       {    QSqlQueryModel *model =new QSqlQueryModel();
            QSqlQuery query ;

             model->setQuery("SELECT * FROM reclamation ORDER BY "+type+" "+facon+"");


              return model ;

       }






