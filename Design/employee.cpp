#include "employee.h"
#include <QDebug>
#include "dbconnexion.h"

// constructor employee defult setup
Employee::Employee()
{
    // important  create this object with default only inside mainwindow class as an attribute.
    model=NULL;

    id_cin=""; nom=""; prenom=""; password=""; loginstattus=0;
    gender=0; datenaissance=""; score=5; email=""; phone="";
    debitaccount=0; creditaccount=0; rue=""; postalcode="";
    role="";


}

// constructor employee model 2/ not all fields
Employee::Employee(QString idcin,QString noM,QString prenoM,QString passworD,
                   int gend,QString datenaiss,int scor,QString emaiL,QString phon,float debit,float credit,QString ruE,QString postcodE,QString rolE )
{

    id_cin=idcin; nom=noM; prenom=prenoM; password=passworD; loginstattus=0;
    gender=gend; datenaissance=datenaiss; score=scor; email=emaiL; phone=phon;
    debitaccount=debit; creditaccount=credit; rue=ruE; postalcode=postcodE;
    role=rolE;

}

// constructor employees all fields
Employee::Employee(QString idcin,QString noM,QString prenoM,QString passworD,
                   int gend,QString emaiL,QString ruE,QString postcodE,QString rolE )
{
    id_cin=idcin; nom=noM; prenom=prenoM; password=passworD; loginstattus=0;
    gender=gend; datenaissance=""; score=5; email=emaiL; phone="";
    debitaccount=0; creditaccount=0; rue=ruE; postalcode=postcodE;
    role=rolE;

}
//----------end_constructors--------------------
Employee::~Employee()
{
    // program crush because model is destroyed before the connection end in mainwindow i guess
    ///delete model;
    ///  this was deleted in mainwindow destroctor to avoid crushing program when closing.
}


//---crud--------------------------------------------
//---------------------------------------------------
bool Employee:: ajouter_employee()
{
    QSqlQuery query;


    QString res1 = QString::number(loginstattus);
    QString res2 = QString::number(gender);

    QString res3 = QString::number(score);
    QString res4 = QString::number(debitaccount);
    QString res5 = QString::number(creditaccount);

    // prepare() its for putting the values entred from user
    /*
    query.prepare("insert into employee( ID_CIN, NOM, PRENOM, PASSWORD, LOGINSTATUS, GENDER, EMAIL, RUE, POSTALCODE, ROLE)"
                  "values ( :ID_CIN, :NOM, :PRENOM, :PASSWORD, :LOGINSTATUS, :GENDER, :EMAIL, :RUE, :POSTALCODE, :ROLE )");
    */

    query.prepare("insert into employee( ID_CIN, NOM, PRENOM, PASSWORD, LOGINSTATUS, GENDER, DATENAISSANCE, SCORE, EMAIL, PHONE, DEBITACCOUNT, CREDITACCOUNT, RUE, POSTALCODE, ROLE)"
    "values ( :ID_CIN, :NOM, :PRENOM, :PASSWORD, :LOGINSTATUS, :GENDER, :DATENAISSANCE, :SCORE, :EMAIL, :PHONE, :DEBITACCOUNT, :CREDITACCOUNT, :RUE, :POSTALCODE, :ROLE )" );

    // affecting values inside the query variables

    query.bindValue(":ID_CIN",id_cin);
    query.bindValue(":NOM",nom);
    query.bindValue(":PRENOM",prenom);
    query.bindValue(":PASSWORD",password);
    query.bindValue(":LOGINSTATUS",res1);
    query.bindValue(":GENDER",res2);
    query.bindValue(":DATENAISSANCE",datenaissance);
    query.bindValue(":SCORE",res3);
    query.bindValue(":EMAIL",email);
    query.bindValue(":PHONE",phone);
    query.bindValue(":DEBITACCOUNT",res4);
    query.bindValue(":CREDITACCOUNT",res5);
    query.bindValue(":RUE",rue);
    query.bindValue(":POSTALCODE",postalcode);
    query.bindValue(":ROLE",role);


        return query.exec();
}
//----------------------------------------------------


//---- afficher_ts_dans_table_view---------------
QSqlQueryModel * Employee::afficher()
{
    qDebug()<<"model is address "<<model<<"\n";


    //-*********************************
    ///fixing my teacher is bag in his exemple problem is i am deleting this inside
    //the mainwindow constructor when program ends.
    // the question is i think i am violating the object oriented pillars;
    if(model==NULL)
         model=new QSqlQueryModel();
    //-**********************************

    model->setQuery("select * from employee");

     //row by row filling up the model
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_cin"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("gender"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("score"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("email"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("phone"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("debitaccount"));
    model->setHeaderData(8,Qt::Horizontal,QObject::tr("creditaccount"));


    //fill up all the table at once

    qDebug()<<"\n"<<"model is address inside_afficher_empl "<<model<<"\n";

            // equivalent to return model , because i set *model to private
    return get_my_model_of_tableView_pointer();

}
//------------------------------------------------------




//------------delete_employee------------------------
bool Employee:: supprimer_employee( QString id )
{
    QSqlQuery query;

    /* /// not needed we get a string from the editline widget anyway
    //QString res = QString::number(id);
    // qDebug()<<"id to delete = "<<res<<"\n";
    */
    /*
    // affecting values inside the query sql variables
    //query.bindValue(":ID_CIN",res);
    */

    // prepare() its for deleting the value
    query.prepare("delete from Employee where ID_CIN=:ID_CIN");
    query.bindValue(":ID_CIN",id);

     return query.exec();
}

//----------------------------------------------------
//----------------------------------------------------


//--------update_employee-------------------------------
int Employee:: modifier_employee()
{

    QSqlQuery query;

    QString res3 = QString::number(score);
    QString res4 = QString::number(debitaccount);
    QString res5 = QString::number(creditaccount);

    qDebug()<< email<<"\n";

    query.prepare("update employee set  PASSWORD=:PASSWORD, SCORE=:SCORE, EMAIL=:EMAIL, PHONE=:PHONE, DEBITACCOUNT=:DEBITACCOUNT, CREDITACCOUNT=:CREDITACCOUNT, RUE=:RUE, POSTALCODE=:POSTALCODE , ROLE=:ROLE where id_cin=:ID_CIN " );

    query.bindValue(":ID_CIN",id_cin);

    qDebug()<< password<<"\n";

    qDebug()<< phone<<"\n";


    query.bindValue(":PASSWORD",password);

    query.bindValue(":SCORE",res3);
    query.bindValue(":EMAIL",email);
    query.bindValue(":PHONE",phone);
    query.bindValue(":DEBITACCOUNT",res4);
    query.bindValue(":CREDITACCOUNT",res5);
    query.bindValue(":RUE",rue);
    query.bindValue(":POSTALCODE",postalcode);
    query.bindValue(":ROLE",role);


        return query.exec();

}

