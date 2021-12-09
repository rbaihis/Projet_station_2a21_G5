#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDateEdit>

struct sortsearch{
    QString column1,column2,column3,column4,column5;
    QString value1,value2,value3,value4,value5;
    QString columnwhere1,columnwhere2,columnwhere3,columnwhere4,columnwhere5;
    QString verguleselect1,verguleselect2,verguleselect3;
    QString verguleorderby1;
    QString desc1,desc2;
    QString allstar;
    QString where;
    QString orderby;
    QString comparisonsymbol1,comparisonsymbol2;
    QString and1,and2;
};

struct stats{
    int counttotalemployee;
    int countfemale,countmale;
    int countscoreover70,countscoreunder40,averagescore;
};

class Employee
{
  private://attributes
    QString id_cin;
    int loginstattus,gender,score;
    QString nom,prenom,password/*,datenaissance*/,email,phone,rue,postalcode,role;
    float debitaccount,creditaccount;
    QDate datenaissance;

public:
    //struct for sorting is public
    sortsearch s;
    stats empstat;
private:
  //public://attributes
    QSqlQueryModel * model;
   // QSqlQuery myquery;


public: // getter for model
    QSqlQueryModel * get_my_model_of_tableView_pointer(){return model;}


public:
    //---------------------------------------------------
    Employee(); // all value 0 and empty string
    //not null table fields
    Employee(QString idcin,QString noM,QString prenoM,QString passworD,int gend,QString emaiL,QString ruE,QString postcodE,QString rolE );
    //all table fields
    Employee(QString idcin,QString noM,QString prenoM,QString passworD,int gend,QDate datenaiss,int scor,QString emaiL,QString phon,float debit,float credit,QString ruE,QString postcodE,QString rolE );
    ~Employee();
    //------------------------------------------------------
    void  setidcin(QString idcin){this->id_cin=idcin; }
    void  setnom(QString nom){this->nom=nom;  }
    void  setprenom(QString prenom){this->prenom=prenom;}
    void  setpassw(QString passw){password=passw;}
    void  setloginst(int logst){loginstattus=logst;}
    void  setgender(int gender){this->gender=gender;}
    void  setdatenaissance(QDate daten){datenaissance=daten;}
    void  setscore(int scor){score=scor;}
    void  setemail(QString Email){email=Email;}
    void  setphone(QString phon){phone=phon;}
    void  setdebitacc(float debacc){debitaccount=debacc;}
    void  setcreditacc(float credacc){creditaccount=credacc;}
    void  setaddress(QString addr){rue=addr;}
    void  setpostalcode(QString postc){postalcode=postc;}
    void  setrole(QString rol){role=rol;}

    //--------------------------------------------------------
    //--------------------------------------------------------
    QString getidcin(){return id_cin; }
    QString getnom(){return nom;  }
    QString getprenom(){return prenom;}
    QString getpassw(){return password;}
    int getloginst(){return this->loginstattus;}
    int getgender(){return gender;}
    QDate getdatenaissance(){return datenaissance;}
    int getscore(){return score;}
    QString getemail(){return email;}
    QString getphone(){return phone;}
    float getdebitacc(){return debitaccount;}
    float getcreditacc(){return creditaccount;}
    QString getaddress(){return rue;}
    QString getpostalcode(){return postalcode;}
    QString getrole(){return role;}
    //-----------------------------------------------------------

    QSqlQuery readmail(QString info);
    //------------------------------------------------------

    bool ajouter_employee();
    QSqlQueryModel * afficher();
    void afficher_employees();
    int modifier_employee();

    bool supprimer_employee(QString id);

    //------------------------------------------------------
    QSqlQueryModel * chercherSORT_employee();
    void statistics_employee();

    //reset attribute of all employee attributes except SQLQUERYMODEL
    void reset_employee_attributes();

};

#endif // EMPLOYEE_H
