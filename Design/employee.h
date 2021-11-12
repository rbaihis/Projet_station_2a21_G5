#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDateEdit>


class Employee
{
  private://attributes
    QString id_cin;
    int loginstattus,gender,score;
    QString nom,prenom,password,datenaissance,email,phone,rue,postalcode,role;
    float debitaccount,creditaccount;

  //public://attributes
    QSqlQueryModel * model;

public: // getter for model
    QSqlQueryModel * get_my_model_of_tableView_pointer(){return model;}


public:
    //---------------------------------------------------
    Employee(); // all value 0 and empty string
    //not null table fields
    Employee(QString idcin,QString noM,QString prenoM,QString passworD,int gend,QString emaiL,QString ruE,QString postcodE,QString rolE );
    //all table fields
    Employee(QString idcin,QString noM,QString prenoM,QString passworD,int gend,QString datenaiss,int scor,QString emaiL,QString phon,float debit,float credit,QString ruE,QString postcodE,QString rolE );
    ~Employee();
    //------------------------------------------------------
    void  setidcin(QString idcin){this->id_cin=idcin; }
    void  setnom(QString nom){this->nom=nom;  }
    void  setprenom(QString prenom){this->prenom=prenom;}
    void  setpassw(QString passw){password=passw;}
    void  setloginst(int logst){loginstattus=logst;}
    void  setgender(int gender){this->gender=gender;}
    void  setdatenaissance(QString daten){datenaissance=daten;}
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
    QString getdatenaissance(){return datenaissance;}
    int getscore(){return score;}
    QString getemail(){return email;}
    QString getphone(){return phone;}
    float getdebitacc(){return debitaccount;}
    float getcreditacc(){return creditaccount;}
    QString getaddress(){return rue;}
    QString getpostalcode(){return postalcode;}
    QString getrole(){return role;}
    //-----------------------------------------------------------


    bool ajouter_employee();
    QSqlQueryModel * afficher();
    void afficher_employees();
    int modifier_employee();

    bool supprimer_employee(QString id);

};

#endif // EMPLOYEE_H
