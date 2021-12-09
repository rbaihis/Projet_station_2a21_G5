#include "employee.h"
#include <QDebug>
#include "dbconnexion.h"

// constructor employee defult setup
Employee::Employee()
{
    // important  create this object with default only inside MainWindowseif class as an attribute.
    model=NULL;

    id_cin=""; nom=""; prenom=""; password=""; loginstattus=0;
    gender=0; datenaissance.setDate(2000,01,01); score=99; email=""; phone="";
    debitaccount=0; creditaccount=0; rue=""; postalcode="";
    role="";

    s.column1=s.column2=s.column3=s.column4=s.column5=s.value1=s.value2=s.value3=s.value4=s.value5="";
    s.columnwhere1=s.columnwhere2=s.columnwhere3=s.columnwhere4=s.columnwhere5="";
    s.verguleselect1=s.verguleselect2=s.verguleselect3;
    s.verguleorderby1="";
    s.desc1=s.desc2="";
    s.allstar=s.where=s.orderby=s.comparisonsymbol1=s.comparisonsymbol2=s.and1=s.and2="";

    empstat.counttotalemployee=empstat.countfemale=empstat.countmale=0;
    empstat.countscoreover70=empstat.countscoreunder40=empstat.averagescore=0;

}

// constructor employee model 2/ not all fields
Employee::Employee(QString idcin,QString noM,QString prenoM,QString passworD,
                   int gend,QDate datenaiss,int scor,QString emaiL,QString phon,float debit,float credit,QString ruE,QString postcodE,QString rolE )
{

    id_cin=idcin; nom=noM; prenom=prenoM; password=passworD; loginstattus=0;
    gender=gend; datenaissance=datenaiss; score=scor; email=emaiL; phone=phon;
    debitaccount=debit; creditaccount=credit; rue=ruE; postalcode=postcodE;
    role=rolE;

    s.column1=s.column2=s.column3=s.column4=s.column5=s.value1=s.value2=s.value3=s.value4=s.value5="";
    s.columnwhere1=s.columnwhere2=s.columnwhere3=s.columnwhere4=s.columnwhere5="";
    s.verguleselect1=s.verguleselect2=s.verguleselect3;
    s.verguleorderby1="";
    s.desc1=s.desc2="";
    s.allstar=s.where=s.orderby=s.comparisonsymbol1=s.comparisonsymbol2=s.and1=s.and2="";

    empstat.counttotalemployee=empstat.countfemale=empstat.countmale=0;
    empstat.countscoreover70=empstat.countscoreunder40=empstat.averagescore=0;

}

// constructor employees all fields
Employee::Employee(QString idcin,QString noM,QString prenoM,QString passworD,
                   int gend,QString emaiL,QString ruE,QString postcodE,QString rolE )
{
    id_cin=idcin; nom=noM; prenom=prenoM; password=passworD; loginstattus=0;
    gender=gend; datenaissance.setDate(2000,01,01); score=5; email=emaiL; phone="";
    debitaccount=0; creditaccount=0; rue=ruE; postalcode=postcodE;
    role=rolE;

    s.column1=s.column2=s.column3=s.column4=s.column5=s.value1=s.value2=s.value3=s.value4=s.value5="";
    s.columnwhere1=s.columnwhere2=s.columnwhere3=s.columnwhere4=s.columnwhere5="";
    s.verguleselect1=s.verguleselect2=s.verguleselect3;
    s.verguleorderby1="";
    s.desc1=s.desc2="";
    s.allstar=s.where=s.orderby=s.comparisonsymbol1=s.comparisonsymbol2=s.and1=s.and2="";

    empstat.counttotalemployee=empstat.countfemale=empstat.countmale=0;
    empstat.countscoreover70=empstat.countscoreunder40=empstat.averagescore=0;
}

//----------end_constructors--------------------
Employee::~Employee()
{
    // program crush because model is destroyed before the connection end in MainWindowseif i guess
    ///delete model;
    ///  this was deleted in MainWindowseif destroctor to avoid crushing program when closing.
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
    //the MainWindowseif constructor when program ends.
    // the question is i think i am violating the object oriented 'pillars;'s encapsultion.
    if(model==NULL)
         model=new QSqlQueryModel();
    //-**********************************

    model->setQuery("select * from employee");

     //row by row filling up the model
    /* //useless
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_cin"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("gender"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("score"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("email"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("phone"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("debitaccount"));
    model->setHeaderData(8,Qt::Horizontal,QObject::tr("creditaccount"));
    */

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

//--------*********************************************************************
//---------********************************************************************

QSqlQuery Employee::readmail(QString info)
{
    QSqlQuery query;

    query.prepare("select * from Employee where nom='"+info+"'");
    query.exec();
    query.next();

    return query;
}

QSqlQueryModel* Employee:: chercherSORT_employee()
{
    // model is already not null its called on constructor
     if(model==NULL)
        model= new QSqlQueryModel();

     //select
     if(s.allstar!="")
         s.verguleselect1= s.column2= s.verguleselect2=s.column3="";
     if(s.column1!=""&&s.column2!=""&&s.column3!="")
         s.verguleselect1=s.verguleselect2=",";
     if(s.column1!=""&&s.column2!=""&&s.column3=="")
         s.verguleselect1=","; s.verguleselect2="";
     if(s.column1!=""&&s.column2==""&&s.column3=="")
         s.verguleselect1=s.verguleselect2="";

     //where
       if(s.where==""&&s.orderby=="")
       {
          reset_employee_attributes();
       }
       else if( s.allstar=="where" )
       {
           model->setQuery("SELECT *  FROM employee " + s.where +" " + s.columnwhere1+" " + s.comparisonsymbol1 +s.value1 +" " );

           qDebug()<<  "first if requette where its me executed now => " "SELECT *  FROM employee " + s.where +" " + s.columnwhere1+" " + s.comparisonsymbol1 +s.value1 +" "  ;

       }
       else if( s.allstar=="orderby" )
       {
           model->setQuery("SELECT id_cin,nom,prenom,score,role,datenaissance,creditaccount,debitaccount  FROM employee  order by "+ s.columnwhere2 +"  "+ s.desc1+" " );

           qDebug()<<  "me second if executed order by its me executed now => "  "SELECT id_cin,nom,prenom,score,role,datenaissance,creditaccount,debitaccount  FROM employee  order by "+ s.columnwhere2 +"  "+ s.desc1+" " ;

       }
        else if( s.allstar=="both")
       {
         model->setQuery( " SELECT * FROM employee where " + s.columnwhere1+" " + s.comparisonsymbol1 + " " +s.value1 + " order by "+  " " + s.columnwhere2 +" " + s.desc1+" " );

         qDebug()<<  "me third if executed  where and order by together its me executed now =>  " " SELECT * FROM employee where " + s.columnwhere1+" " + s.comparisonsymbol1 + " " +s.value1 + " order by "+  " " + s.columnwhere2 +" " + s.desc1+" ";

       }

       else
           qDebug()<<"do nothing no sorting no searching\n";

       while(model->query().next());


       return get_my_model_of_tableView_pointer();
}


void Employee::reset_employee_attributes()
{
    /*
    id_cin=""; nom=""; prenom=""; password=""; loginstattus=0;
    gender=0; datenaissance.setDate(2000,01,01); score=99; email=""; phone="";
    debitaccount=0; creditaccount=0; rue=""; postalcode="";
    role="";
    */


    s.column1=s.column2=s.column3=s.column4=s.column5=s.value1=s.value2=s.value3=s.value4=s.value5="";
    s.columnwhere1=s.columnwhere2=s.columnwhere3=s.columnwhere4=s.columnwhere5="";
    s.verguleselect1=s.verguleselect2=s.verguleselect3;
    s.verguleorderby1="";
    s.desc1=s.desc2="";
    s.allstar=s.where=s.orderby=s.comparisonsymbol1=s.comparisonsymbol2=s.and1=s.and2="";
    s.allstar="*";
}




void Employee::statistics_employee()
{
    //employee count
    QSqlQuery myquery;

    myquery.prepare(" select count(id_cin) from employee  ");
    myquery.exec();
    myquery.first();
    empstat.counttotalemployee=(myquery.value(0).toInt());

    //by sex count
    myquery.prepare(" select count(gender) from employee where gender = 0  ");
    myquery.exec();
    myquery.first();
    empstat.countfemale=(myquery.value(0).toInt());

    myquery.prepare(" select count(gender) from employee where gender = 1  ");
    myquery.exec();
    myquery.first();
    empstat.countmale=(myquery.value(0).toInt());

    //by score count   1st average score
    myquery.prepare(" select round(avg(score),0) from employee  ");
    myquery.exec();
    myquery.first();
    empstat.averagescore=(myquery.value(0).toInt());

    myquery.prepare(" select count(score) from employee where score >= 70 ");
    myquery.exec();
    myquery.first();
    empstat.countscoreover70=(myquery.value(0).toInt());

    myquery.prepare(" select count(score) from employee where score <= 40 ");
    myquery.exec();
    myquery.first();
    empstat.countscoreunder40=(myquery.value(0).toInt());


    qDebug()<< " employee total number = "<<empstat.counttotalemployee<<" \n employee female = "
            <<empstat.countfemale<<" , employee male = "<<empstat.countmale<<" \n avg score = "
           <<empstat.averagescore<<" , scre over 70 = "<<empstat.countscoreover70<<" , score under 40 = "
          <<empstat.countscoreunder40;


}


