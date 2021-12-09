#include <iostream>
#include "MainWindowseif.h"
#include "ui_MainWindowseif.h"
#include "employee.h"
#include <QMessageBox>
#include <QtDebug>
#include <QStandardItemModel>
#include <QPrinter>
#include<QPrintDialog>

//stats
#include<QtCharts>
#include<QChartView>
#include<QPieSeries>
#include<QPieSlice>





MainWindowseif::MainWindowseif(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowseif)
{




    currentuser="";
    ui->setupUi(this);
    // ladel status show only not important at all

    c.createconnect();




    // first time application
    firsttimeRowcount0=0;
    firstimeNoAdminShouldExist="";
    AdminExistance=false;
    QSqlQuery checkdatabaseemployee;

    //delete this part
    //////////////////////
    //////////////////////
    // /////////////////
    checkdatabaseemployee.exec(" drop table EMPLOYEE  ");
    checkdatabaseemployee.exec ("CREATE TABLE EMPLOYEE "
                                "(	ID_CIN VARCHAR2(8 BYTE),"
                                 "NOM VARCHAR2(25 BYTE), "
                                 "PRENOM VARCHAR2(25 BYTE), "
                                 "PASSWORD VARCHAR2(25 BYTE), "
                                 "LOGINSTATUS NUMBER(1,0) DEFAULT 0,"
                                 "GENDER NUMBER(1,0), "
                                 "DATENAISSANCE DATE, "
                                 "SCORE NUMBER(2,0) DEFAULT 99, "
                                 "EMAIL VARCHAR2(25 BYTE), "
                                 "PHONE VARCHAR2(15 BYTE), "
                                 "DEBITACCOUNT FLOAT(50), "
                                 "CREDITACCOUNT FLOAT(50),"
                                 "RUE VARCHAR2(25 BYTE), "
                                 "POSTALCODE VARCHAR2(5 BYTE),"
                                 "ROLE VARCHAR2(15 BYTE),"
                                  "PRIMARY KEY (ID_CIN))");


   checkdatabaseemployee.exec(  "INSERT INTO EMPLOYEE (ID_CIN, NOM, PRENOM, PASSWORD, LOGINSTATUS, GENDER, DATENAISSANCE, SCORE, PHONE, DEBITACCOUNT, CREDITACCOUNT, RUE, POSTALCODE, ROLE) VALUES ('12345678', 'seif', 'whocares', 'password', '0', '1', TO_DATE('2000-01-01', 'YYYY-MM-DD'), '99', '2256486', '0', '0', 'ave', '2000', 'ADMIN') ");

   checkdatabaseemployee.exec( "INSERT INTO EMPLOYEE (ID_CIN, NOM, PRENOM, PASSWORD, LOGINSTATUS, GENDER, DATENAISSANCE, SCORE, PHONE, DEBITACCOUNT, CREDITACCOUNT, RUE, POSTALCODE, ROLE) VALUES ('11111111', 'salima', 'whocares', 'password', '0', '0', TO_DATE('2000-01-01', 'YYYY-MM-DD'), '60', '2256486', '0', '0', 'ave', '2000', 'BUS_AGENT') ");

   checkdatabaseemployee.exec( "INSERT INTO EMPLOYEE (ID_CIN, NOM, PRENOM, PASSWORD, LOGINSTATUS, GENDER, DATENAISSANCE, SCORE, PHONE, DEBITACCOUNT, CREDITACCOUNT, RUE, POSTALCODE, ROLE) VALUES ('22222222', 'mohtadi', 'whocares', 'password', '0', '1', TO_DATE('2000-01-01', 'YYYY-MM-DD'), '45', '2256486', '0', '0', 'ave', '2000', 'ABONN_AGENT') ");

   checkdatabaseemployee.exec( "INSERT INTO EMPLOYEE (ID_CIN, NOM, PRENOM, PASSWORD, LOGINSTATUS, GENDER, DATENAISSANCE, SCORE, PHONE, DEBITACCOUNT, CREDITACCOUNT, RUE, POSTALCODE, ROLE) VALUES ('33333333', 'yessmin,', 'whocares', 'password', '0', '0', TO_DATE('2000-01-01', 'YYYY-MM-DD'), '15', '2256486', '0', '0', 'ave', '2000', 'RECLAM_AGENT') ");

   checkdatabaseemployee.exec( "INSERT INTO EMPLOYEE (ID_CIN, NOM, PRENOM, PASSWORD, LOGINSTATUS, GENDER, DATENAISSANCE, SCORE, PHONE, DEBITACCOUNT, CREDITACCOUNT, RUE, POSTALCODE, ROLE) VALUES ('44444444', 'ismail', 'whocares', 'password', '0', '1', TO_DATE('2000-01-01', 'YYYY-MM-DD'), '90', '2256486', '0', '0', 'ave', '2000', 'STATION_AGENT') ");

   checkdatabaseemployee.exec( "INSERT INTO EMPLOYEE (ID_CIN, NOM, PRENOM, PASSWORD, LOGINSTATUS, GENDER, DATENAISSANCE, SCORE, PHONE, DEBITACCOUNT, CREDITACCOUNT, RUE, POSTALCODE, ROLE) VALUES ('55555555', 'WhoCares', 'whocares', 'password', '0', '1', TO_DATE('2000-01-01', 'YYYY-MM-DD'), '55', '2256486', '0', '0', 'ave', '2000', 'OTHER') ");

    checkdatabaseemployee.exec(" select count(role) from employee where role='ADMIN' ");
    // ////////////////////////////
    // //////// delete what is in between ////////
    // ////////////////////////////
    // ////////////////////////////

    checkdatabaseemployee.first();
    firsttimeRowcount0 = checkdatabaseemployee.value(0).toInt();
    checkdatabaseemployee.exec(" select role from employee where role='ADMIN' ");
    checkdatabaseemployee.first();
    firstimeNoAdminShouldExist= checkdatabaseemployee.value(0).toString();
     qDebug() << "first time row count = "<<firsttimeRowcount0 << "existence of admin ="<<firstimeNoAdminShouldExist <<endl;
     if( firsttimeRowcount0 > 0 && firstimeNoAdminShouldExist=="ADMIN" )
         AdminExistance=true;

     if (AdminExistance==false)
     {

        ui->stackedWidget_main->setCurrentIndex(1);
        ui->tabWidget_basicRH_and_advRH->setCurrentIndex(0);
        ui->label->setText("FIRST time APP used PLEASE add your STAFF : ADMIN ,BUS_AGENT,ABONN_AGENT,RECLAM_AGENT and STATION_AGENT to access ALL FUNCTIONALITY");

     }

    //

    database_employee_connection_status_label();
    custom_by_me_Update_tableView_and_Row_Count_label();



    controlsaisir();
   // empty_all_line_edit();

    ui->stackedWidget_main->setCurrentIndex(0);

    reset_chercher_view();

    qDebug()<<"\n"<<"model is address "<<employ.get_my_model_of_tableView_pointer()<<"\n";
    ui->pushButton_logout->hide();
    ui->pushButton_FullAccess->hide();

    qDebug()<<"date is" + ui->dateEdit_age_chercher->text()+"\n";

    employ.statistics_employee();
    statistics_play();


    idmail="2a21group5@gmail.com";
    ui->lineEdit_company_email->setText("2a21group5@gmail.com");
    ui->lineEdit_company_password_email->setText("123azerty*");
    ui->lineEdit_settingemail->setText("2a21group5@gmail.com");
    ui->lineEdit_settingpassword->setText("123azerty*");

    passwordmail="123azerty*";
    cc="";
    mail="";
    bodymail="";

//

}

MainWindowseif::~MainWindowseif()
{


    logging_out_updating_login_status_to_0();

    // deleting the model we created for tableview in Employee class here.
    delete employ.get_my_model_of_tableView_pointer();

    // disconnect database employee
    c.desconnection();

    delete ui; 
}

//------------ label_status_function--on top on the right side of window--
void MainWindowseif:: database_employee_connection_status_label( )
{

    if(c.get_testConnection_Stat())
      ui->label_main_databaseb_status->setText("[+ Employee_DB connected...]");
     else
         ui->label_main_databaseb_status->setText("[+ Employee_DB disconnected.]");
}
//------------------------------------------------------------------------------

//-------------custom-consulter_employee_tabview_______________
void MainWindowseif::custom_by_me_Update_tableView_and_Row_Count_label()
{
    qDebug()<<"\n"<<"model is address in update table view before afficher_method  call "<<employ.get_my_model_of_tableView_pointer()<<"\n";


    if( c.get_testConnection_Stat() )
    {
         ui->tableView_afficher_ts->setModel( employ.afficher() );
         //showing numbers of rows of employees stored in table
         QString res = QString ::number( employ.afficher()->rowCount() );
         ui->label_existing_status_to_delete->setText( "[+employees stored count =  "+res+"  ]" );

         qDebug()<<"\n"<<"model is address after affficher_method  "<<employ.get_my_model_of_tableView_pointer()<<"\n";

     }
}
//----------------------------------------------------------------------


//-------------ajouter_employee____________________
void MainWindowseif::on_pushButton_add_employee_clicked()
{
    // ladel status show only not important at all
    database_employee_connection_status_label();


    if(!c.get_testConnection_Stat())
    {
          QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
     else
       {

         // getting string data stored inside line_edit that need cotrol saisir:

          QString id=ui->lineEdit_cin->text();
          QString nom= ui->lineEdit_nom->text();
          QString prenom=ui->lineEdit_prenom->text();
          QString email=ui->lineEdit_email->text();
          QString phon=ui->lineEdit_phone->text(); //

          //testing if characters entered in cin_field  // ill make those private test methods later
          bool testingIDcorrect= digitonlyinput(id) ;
          bool testingNOMcorrect=characteronlyinput(nom);
          bool testingPRENOMcorrect=characteronlyinput(prenom);
          bool testingEmailcorrect=checkEmailInput(email);
          bool testingPhonecorrect=digitonlyinput(phon);

          // modify <4  to ==8 when testing is done
          if(  ui->lineEdit_cin->text().length()<4 || testingIDcorrect ==false || testingNOMcorrect==false
               || testingPRENOMcorrect==false || testingEmailcorrect==false || testingPhonecorrect==false )
          {
              QMessageBox::about(nullptr, QObject::tr("ID_CIN input missing"),
                                                 QObject::tr("to ADD your employee \nFill up ID_cin and all boxes labeled with [*]\nID_CIN can only be 8 numeric values only !! \n"));
          }
           else{



                 QString passw=ui->lineEdit_password->text();

                 int gender=ui->lineEdit_gender->text().toInt();

                 // getting date from the date_widget
                QDate mydate= ui->dateEdit_datenaissance->date();//
                //transforming date to string
                qDebug()<<"\n\n\nQdate show yourself please : "<< mydate <<"\n";
               // QString mydateString=mydate.toString();//

                // getting more of string data stored in line_edit :
                int scor=ui->lineEdit_scor->text().toInt();//

                float debitacc=ui->lineEdit_debitaccount->text().toFloat();//
                float creditacc=ui->lineEdit_creditaccount->text().toFloat();//
                QString rue=ui->lineEdit_address->text();
                QString postcode=ui->lineEdit_postalcode->text();
                QString role= ui->comboBox_role_ajout->currentText();


               // storing all extracted data in its corresponding field in our employee object
               Employee e(id,nom,prenom,passw,gender,mydate,scor,email,phon,debitacc,creditacc,rue,postcode, role );


               // ajout into base 2 donnee succseful test
               bool test1=e.ajouter_employee();

                if(c.get_testConnection_Stat()&&test1)
                    {
                      QMessageBox::information(nullptr, QObject::tr("connecting to data base and adding employee"),
                                                         QObject::tr("connecting to db and adding both successful.\n"));
                     }
                     else
                        {
                            QMessageBox::critical(nullptr, QObject::tr("failed to add employee"),
                                  QObject::tr("failed to add \n") );
                        }
              }

             // updating table_view_and Row_count_label
             custom_by_me_Update_tableView_and_Row_Count_label();
             qDebug()<<"\n"<<"model is address ajout_end  "<<employ.get_my_model_of_tableView_pointer()<<"\n";


          }

}
//-------------------------------------------------------------------


//---------delete_line_of_employee------------------------------
void MainWindowseif::on_pushButton_supprimer_choix_clicked()
{
    // ladel status show only not important at all help for debug too
    database_employee_connection_status_label();


    if( c.get_testConnection_Stat()==false )
    {
          QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
      else{

         QString id = ui->lineEdit_id_supprimer_search->text();

         // this line for testing if the delete is really happened because "delete" in sql  always show true
         int countbeforeDelet =  employ.afficher()->rowCount() ;

         employ.supprimer_employee(id); /// deleting is happening only if data is there

         // gettin row count after delete
         int countafterDelete = employ.afficher()->rowCount() ;


            //checking if delete really happened or not
         if(  countbeforeDelet <= countafterDelete )
            {
             QMessageBox::critical(nullptr, QObject::tr("employee deleted failed"),
                       QObject::tr("id entered does not exist or already deleted.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);
            }
             else
                {
                   QMessageBox::information(nullptr, QObject::tr("employee deleted succesfully"),
                           QObject::tr(" employee succesfully deleted...\n"
                                       "Click Cancel to exit."), QMessageBox::Cancel);
                }


            // updating table_view_and Row_count_label
            custom_by_me_Update_tableView_and_Row_Count_label();
            qDebug()<<"\n"<<"model is address delete_empl_end "<<employ.get_my_model_of_tableView_pointer()<<"\n";

        }


}
//----------------------modifier_eployee--------------------------------------
//-----------------------------------------------------------------------------
void MainWindowseif::on_pushButton_update_employee_clicked()
{
  ///  PASSWORD=:PASSWORD, SCORE=:SCORE, EMAIL=:EMAIL, PHONE=:PHONE, DEBITACCOUNT=:DEBITACCOUNT, CREDITACCOUNT=:CREDITACCOUNT, RUE=:RUE, POSTALCODE=:POSTALCODE , ROLE=:ROLE  where id_cin=:idcin

      employ.setidcin(ui->lineEdit_id_search_modifier_field->text());
      employ.setpassw(ui->lineEdit_password_2->text() );
      employ.setscore(ui->lineEdit_scor_2->text().toInt());
      employ.setemail(ui->lineEdit_email_2->text());
      employ.setphone(ui->lineEdit_phone_2->text());
      employ.setdebitacc(ui->lineEdit_debitaccount_2->text().toFloat());
      employ.setcreditacc(ui->lineEdit_creditaccount_2->text().toFloat());
      employ.setaddress(ui->lineEdit_address_2->text());
      employ.setpostalcode(ui->lineEdit_postalcode_2->text());
      employ.setrole(ui->comboBox_role->currentText());

      bool test=employ.modifier_employee();
      if(test==false)
          QMessageBox::critical(nullptr, QObject::tr("employee update failed"),
                    QObject::tr("failed to update .\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          else {
          QMessageBox::information(nullptr, QObject::tr("employee update succesfully"),
                  QObject::tr(" employee succesfully updated...\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
      }

      custom_by_me_Update_tableView_and_Row_Count_label();
}
//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------



void MainWindowseif:: controlsaisir()
{
   // ui->tab_6->close();

    //ajouter
    ui->lineEdit_cin->setMaxLength(8);
    ui->lineEdit_nom->setMaxLength(25);
    ui->lineEdit_prenom->setMaxLength(25);
    ui->lineEdit_password->setMaxLength(25);
    ui->lineEdit_gender->setMaxLength(1);
    ui->dateEdit_datenaissance->show();//
    ui->lineEdit_scor->setMaxLength(2);//
    ui->lineEdit_email->setText("");
    ui->lineEdit_phone->setMaxLength(15); //
    ui->lineEdit_debitaccount->setMaxLength(20);//
    ui->lineEdit_creditaccount->setMaxLength(20);//
    ui->lineEdit_address->setMaxLength(25);
    ui->lineEdit_postalcode->setMaxLength(5);
    //ui->lineEdit_role->setMaxLength(25);

    // modifier
    ui->lineEdit_id_search_modifier_field->setMaxLength(8);
    ui->lineEdit_password_2->setMaxLength(25);
    ui->lineEdit_loginstatus_2->setMaxLength(1);
    ui->lineEdit_scor_2->setMaxLength(2);//
    ui->lineEdit_email_2->setText("");
    ui->lineEdit_phone_2->setMaxLength(15); //
    ui->lineEdit_debitaccount_2->setMaxLength(20);//
    ui->lineEdit_creditaccount_2->setMaxLength(20);//
    ui->lineEdit_address_2->setMaxLength(25);
    ui->lineEdit_postalcode_2->setMaxLength(5);
    ui->lineEdit_role_2->setMaxLength(25);

    // supprimer
    ui->lineEdit_id_supprimer_search->setMaxLength(8);

}

void MainWindowseif:: empty_all_line_edit()
{

    // ajouter line edit interface
    ui->lineEdit_cin->setText("");
    ui->lineEdit_nom->setText("");
    ui->lineEdit_prenom->setText("");
    ui->lineEdit_password->setText("");
    ui->lineEdit_gender->setText("");
    QDate a(2000,6,15);
    ui->dateEdit_datenaissance->setDate( a);//
    ui->lineEdit_scor->setText("");//
    ui->lineEdit_email->setText("");
    ui->lineEdit_phone->setText(""); //
    ui->lineEdit_debitaccount->setText("");//
    ui->lineEdit_creditaccount->setText("");//
    ui->lineEdit_address->setText("");
    ui->lineEdit_postalcode->setText("");
    //ui->lineEdit_role->setText("");

    //modifier line edit interface
    //ui->lineEdit_id_search_modifier_field->setText(""); //
    ui->lineEdit_password_2->setText("");
    ui->lineEdit_loginstatus_2->setText("");
    ui->lineEdit_scor_2->setText("");//
    ui->lineEdit_email_2->setText("");
    ui->lineEdit_phone_2->setText(""); //
    ui->lineEdit_debitaccount_2->setText("");//
    ui->lineEdit_creditaccount_2->setText("");//
    ui->lineEdit_address_2->setText("");
    ui->lineEdit_postalcode_2->setText("");
    ui->lineEdit_role_2->setText("");

    //supprimer
    ui->lineEdit_id_supprimer_search->setText("");

    //other fields

}

void MainWindowseif::on_pushButton_clear_cases_ajouter_clicked()
{
   empty_all_line_edit();


}

void MainWindowseif::on_pushButton_clear_cases_ajouter_2_clicked()
{
    empty_all_line_edit();

}


//-------check_input_type-----------------
//----------------------------------------

bool MainWindowseif::characteronlyinput(QString checkmeILettersOnly )
{

        bool testing=true;

        for(int i=0;i<checkmeILettersOnly.length()&&testing==true;i++)
            if( ( checkmeILettersOnly[i]<65 || checkmeILettersOnly[i] > 122 ) || ( checkmeILettersOnly[i]<=96 && checkmeILettersOnly[i] >= 91)  )
                testing=false;

        return testing;
}



bool MainWindowseif::digitonlyinput(QString checkmeIFdigit)
{
    bool testing=true;

    for(int i=0;i<checkmeIFdigit.length()&&testing==true;i++)
        if( checkmeIFdigit[i]>57 || checkmeIFdigit[i] < 48)
            testing=false;

    return testing;
}



bool MainWindowseif::checkEmailInput(QString checkIfEmail)
{

    bool testingAT=false;
    bool testingpointexist=false;

    int occurence=0;
    for(int i=0;/*--*/ i<checkIfEmail.length()&&testingAT==false /*--*/;i++)

            if( checkIfEmail[i]== 64   )
              {
                testingAT=true;

                        for(int j=i+1;/*--*/ j<checkIfEmail.length()  /*--*/;j++)
                     {
                           if( checkIfEmail[j]== 46 )
                           {
                              occurence+=1;

                              if( ( occurence<=1 ))
                                 testingpointexist=true;
                                  else
                                   testingpointexist=false;
                           }
                     }

               }

    return (testingAT&&testingpointexist);
}





void MainWindowseif::on_lineEdit_id_search_modifier_field_textEdited()
{
    QSqlQuery myquery;

    myquery.prepare("select * from employee where id_cin=:id_cin ");
    myquery.bindValue(":id_cin",ui->lineEdit_id_search_modifier_field->text());

    myquery.exec();

        if(myquery.value(0).toString()=="")
         empty_all_line_edit();

            while(myquery.next())
            {

             ui->lineEdit_password_2->setText(myquery.value(3).toString());
             ui->lineEdit_loginstatus_2->setText(myquery.value(4).toString());
             ui->lineEdit_scor_2->setText(myquery.value(7).toString());//
             ui->lineEdit_email_2->setText(myquery.value(8).toString());
             ui->lineEdit_phone_2->setText(myquery.value(9).toString()); //
             ui->lineEdit_debitaccount_2->setText(myquery.value(10).toString());//
             ui->lineEdit_creditaccount_2->setText(myquery.value(11).toString());//
             ui->lineEdit_address_2->setText(myquery.value(12).toString());
             ui->lineEdit_postalcode_2->setText(myquery.value(13).toString());
             ui->lineEdit_role_2->setText(myquery.value(14).toString());
            }
}




void MainWindowseif::on_pushButton_logout_clicked()
{
    logging_out_updating_login_status_to_0();
    ui->pushButton_logout->hide();
    ui->pushButton_FullAccess->hide();
}


// -************************************************************************************
//--------pureEmail********************************************************************+
//--------***************************************************************************

void MainWindowseif::emailemploye()
{
    if(aud == 0)
    {
        QModelIndex index ;//= ui->listView_employe->currentIndex();

        QString info = index.data(Qt::DisplayRole).toString();

        QSqlQuery view;

        Employee E;

        view=E.readmail(info);


        mail=view.value(2).toString();



    }
else
    {
        QMessageBox::information(this, tr("accees limité"),tr("tu n'est pas un admin"), QMessageBox::Ok);
    }
}
//---------------------------------------------------------------

//-----------------------------------------------------------------------------------
void MainWindowseif::on_send_clicked()
{
    idmail=ui->lineEdit_company_email->text();
    passwordmail=ui->lineEdit_company_password_email->text();
    mail=ui->lineEdit_emailTRANSFERINGto->text();
    cc=ui->lineEdit_cc_email->text();
    bodymail=ui->lineEdit_email_body->text();

    smtp = new Smtpseif(idmail , passwordmail, "smtp.gmail.com",465);

    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

   // bodymail="this is the message work more hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
   // mail="2a21group5@gmail.com";
    qDebug()<<mail;

    smtp->sendMail(idmail,mail,cc,bodymail);

}

//------------------------------------------------------------------------------------------------------------------------


//-------endPureEmail**************************************


/*
void MainWindowseif::on_groupBox_chercher_clicked()
{
    if(ui->radioButton_age_chercher->isChecked())
    {
        ui->comboBox_comparison->show();
        ui->spinBox_age_or_score_search->show();
        ui->comboBox_role_compar->hide();
    }
     else if(ui->radioButton_score_chercher->isChecked())
        {
         ui->comboBox_comparison->show();
         ui->spinBox_age_or_score_search->show();
         ui->comboBox_role_compar->hide();
        }
        else if(ui->radioButton_role_chercher->isChecked())
                    {
                      ui->comboBox_comparison->show();
                      ui->spinBox_age_or_score_search->hide();
                      ui->comboBox_role_compar->show();
                    }
}
*/

void MainWindowseif::on_radioButton_age_chercher_clicked()
{
    //make sure to clear all
   // employ.reset_employee_attributes();

    //setting * where and caloumn of condition;
    employ.s.allstar="*";
    employ.s.where="where";
    employ.s.columnwhere1="DATENAISSANCE";

    ui->label_dateform_chercher->show();
    ui->dateEdit_age_chercher->show();
    ui->comboBox_comparison->show();
    ui->spinBox_age_or_score_search->hide();
    ui->comboBox_role_compar->hide();
    ui->pushButton_go_chercher->show();
}

void MainWindowseif::on_radioButton_score_chercher_clicked()
{
    //make sure to clear all
   // employ.reset_employee_attributes();


    //setting * where and caloumn of condition;
    employ.s.allstar="*";
    employ.s.where="where";
    employ.s.columnwhere1="score";

    ui->label_dateform_chercher->hide();
    ui->dateEdit_age_chercher->hide();
    ui->comboBox_comparison->show();
    ui->spinBox_age_or_score_search->show();
    ui->comboBox_role_compar->hide();
    ui->pushButton_go_chercher->show();
}

void MainWindowseif::on_radioButton_role_chercher_clicked()
{
    //make sure to clear all
   // employ.reset_employee_attributes();

    //setting * where and caloumn of condition;
    employ.s.allstar="*";
    employ.s.where="where";
    employ.s.columnwhere1="role";

    ui->label_dateform_chercher->hide();
    ui->dateEdit_age_chercher->hide();
    ui->comboBox_comparison->show();
    ui->spinBox_age_or_score_search->hide();
    ui->comboBox_role_compar->show();
    ui->pushButton_go_chercher->show();
}



void MainWindowseif::on_pushButton_clear_chercher_clicked()
{
    ui->dateEdit_age_chercher->hide();
    ui->comboBox_comparison->hide();
    ui->spinBox_age_or_score_search->hide();
    ui->comboBox_role_compar->hide();
    ui->label_to_chercher->hide();
    ui->pushButton_go_chercher->hide();
    ui->label_dateform_chercher->hide();

    employ.get_my_model_of_tableView_pointer()->setQuery("select * from employee ; ");
    employ.get_my_model_of_tableView_pointer()->query().exec();
    while(employ.get_my_model_of_tableView_pointer()->query().next());

    ui->radioButton_age_chercher->setChecked(false);
    ui->radioButton_role_chercher->setChecked(false);
    ui->radioButton_score_chercher->setChecked(false);

    //make sure to clear all
    employ.reset_employee_attributes();

    //reset tablew view to default
    custom_by_me_Update_tableView_and_Row_Count_label();

    ui->comboBox_comparison->currentIndexChanged(0);

}
void MainWindowseif:: reset_chercher_view()
{

    ui->dateEdit_age_chercher->hide();
    ui->comboBox_comparison->hide();
    ui->spinBox_age_or_score_search->hide();
    ui->comboBox_role_compar->hide();
    ui->label_to_chercher->hide();
    ui->pushButton_go_chercher->hide();
    ui->label_dateform_chercher->hide();
}
void MainWindowseif::on_pushButton_go_chercher_clicked()
{
    //key if else
    employ.s.allstar="where";

    employ.s.comparisonsymbol1=ui->comboBox_comparison->currentText();

    if(ui->radioButton_age_chercher->isChecked())
        employ.s.value1= "'"+ui->dateEdit_age_chercher->text()+"'" ;

        if(ui->radioButton_score_chercher->isChecked())
             employ.s.value1=QString::number( ui->spinBox_age_or_score_search->value() );

             if(ui->radioButton_role_chercher->isChecked() )
                 employ.s.value1=ui->comboBox_role_compar->currentText();


    ui->tableView_afficher_ts->setModel( employ.chercherSORT_employee()  );


}

void MainWindowseif::on_radioButton_age_orderby_clicked()
{
    //make sure to update by reset common variable dont clear all


    //setting * where and caloumn of condition;
    employ.s.allstar="*";
    employ.s.orderby="order by";
    employ.s.columnwhere2="datenaissance";

}

void MainWindowseif::on_radioButton_score_orderby_clicked()
{
    //setting * where and caloumn of condition;
    employ.s.allstar="*";
    employ.s.orderby="order by";
    employ.s.columnwhere2="score";

}

void MainWindowseif::on_radioButton_credit_orderby_clicked()
{
    //setting * where and caloumn of condition;
    employ.s.allstar="*";
    employ.s.orderby="order by";
    employ.s.columnwhere2="CREDITACCOUNT";

}



void MainWindowseif::on_pushButton_sortONLY_clicked()
{
    //key if else
    employ.s.allstar="orderby";

    ///instruction
    employ.s.desc1=ui->comboBox_sortDESC->currentText();



    ui->tableView_afficher_ts->setModel( employ.chercherSORT_employee() );


}

void MainWindowseif::on_pushButton_searchANDsort_clicked()
{
    employ.s.allstar="both";
    ///instruction
    employ.s.desc1=ui->comboBox_sortDESC->currentText();
    employ.s.comparisonsymbol1=ui->comboBox_comparison->currentText();
    if(ui->radioButton_age_chercher->isChecked())
        employ.s.value1= "'"+ui->dateEdit_age_chercher->text()+"'" ;

        if(ui->radioButton_score_chercher->isChecked())
             employ.s.value1=QString::number( ui->spinBox_age_or_score_search->value() );

             if(ui->radioButton_role_chercher->isChecked() )
                 employ.s.value1=ui->comboBox_role_compar->currentText();


    ui->tableView_afficher_ts->setModel( employ.chercherSORT_employee() );
}

void MainWindowseif::statistics_play()
{
    /** this code to be used only in constructor of main window else memory leak so better to create instence in main window */

    //calculating percentage pie 1 by sex
    employ.empstat.countfemale= ( (float)employ.empstat.countfemale/(float)employ.empstat.counttotalemployee) *100.0;
    employ.empstat.countmale= ( (float)employ.empstat.countmale/(float)employ.empstat.counttotalemployee ) *100.0;

    QPieSeries *series;
    series= new  QPieSeries();
    series->append("female"+ QString::number(employ.empstat.countfemale) +"%",employ.empstat.countfemale);
    series->append("male"+QString::number(employ.empstat.countmale)+"%",employ.empstat.countmale);

    QPieSlice *slice0 = series->slices().at(0);
    slice0->setLabelVisible();

    QPieSlice *  slice1 = series->slices().at(1);
    slice1->setExploded();
    slice1->setLabelVisible();
    slice1->setPen(QPen(Qt::darkRed, 2));
    slice1->setBrush(Qt::black);

    QChart *chart = new QChart();
     chart->addSeries(series);
     chart->setTitle("Statistiques sur le sex d'employee ");
     chart->legend()->show();
     QChartView *chartView = new QChartView(chart);
     chartView->setRenderHint(QPainter::Antialiasing);
     ui->verticalLayout_stats->addWidget(chartView);
// ----**************************************************************************

     //calculating percentage pie 2
      int a= ( (float)employ.empstat.countscoreover70/(float)employ.empstat.counttotalemployee) *100.0;
      int b= ( (float)employ.empstat.countscoreunder40/(float)employ.empstat.counttotalemployee ) *100.0;
      int average= 100-(a+b);

      qDebug()<<" a ="<<a<<" b ="<<b<<" average = "<<average;

      QPieSeries *series2= new  QPieSeries();
      series2->append("Over 70 ="+ QString::number( a ) +"% ", a );
      series2->append("AVG ="+QString::number(average)+"% ",average);
      series2->append("Under 40 ="+QString::number(b)+"% ",b);



      QPieSlice *slice00 = series2->slices().at(0);
      slice00->setExploded();
      slice00->setPen(QPen(Qt::darkYellow, 1));
      slice00->setBrush(Qt::darkCyan);
      slice00->setLabelVisible();

      QPieSlice *  slice11 = series2->slices().at(1);
       slice11->setExploded();
      slice11->setLabelVisible();
      slice11->setPen(QPen(Qt::darkRed, 1));
      slice11->setBrush(Qt::black);
      slice11->setLabelVisible();

      QPieSlice *  slice22 = series2->slices().at(2);
      slice22->setExploded();
      slice22->setLabelVisible();
      slice22->setPen(QPen(Qt::green, 1));
      slice22->setBrush(Qt::blue);
      slice22->setLabelVisible();

       QChart *chart2 = new QChart();
       chart2->addSeries(series2);
       chart2->setTitle("Statistiques sur les scores d'employee ");
       chart2->legend()->show();
       QChartView *chartView2 = new QChartView(chart2);
       chartView2->setRenderHint(QPainter::Antialiasing);
       ui->verticalLayout_stats2->addWidget(chartView2);

}

void MainWindowseif::on_lineEdit_settingemail_textChanged(const QString &arg1)
{
    ui->lineEdit_company_email->setText(arg1);
    ui->lineEdit_company_email->setText(ui->lineEdit_settingemail->text());
}

void MainWindowseif::on_lineEdit_settingpassword_textChanged(const QString &arg1)
{
    ui->lineEdit_company_password_email->setText(arg1);
    ui->lineEdit_company_password_email->setText(ui->lineEdit_settingpassword->text());
}



bool MainWindowseif::checking_user_log_in_and_updating_login_status( QString idpassed, QString passwordpassed, QString   &role )
{
    bool judgement=false;

    QSqlQuery myquery;
    myquery.prepare("select * from employee where id_cin=:id_cin");
    myquery.bindValue(":id_cin",idpassed);
    qDebug()<<"\nid passed to my quer"<<idpassed;
myquery.exec();


QString id;
QString password;

qDebug()<<"querry select just happened above"<<endl;
    while(myquery.next())
    {
    role=myquery.value(14).toString();
    id=myquery.value(0).toString();
    password=myquery.value(3).toString();

     }
            qDebug()<<"\ni am the cureent user no role *"<<role<<"*"<<endl;

        if ( (idpassed==id) && ( passwordpassed==password ) )
         {
            qDebug()<< "\n next update query \n";

            currentuser=id;
            myquery.clear();
            myquery.prepare("update employee set LOGINSTATUS=1  where id_cin=:ID_CIN " );
            myquery.bindValue(":ID_CIN",id);
            myquery.exec();

            qDebug()<<"\ni am the cureent user*"<<currentuser<<"*\n";
            judgement=true;

        }
         else
             ui->label_wrongLOGINinput->setText("wrong login input !!!!!!!!!!!!!!!!!!!!!!!!");


        return judgement;
}

void MainWindowseif::logging_out_updating_login_status_to_0( )
{
    QSqlQuery myquery;
    myquery.prepare("update employee set LOGINSTATUS=0  where id_cin=:ID_CIN " );
    myquery.bindValue(":ID_CIN",currentuser);
    myquery.exec();
    ui->stackedWidget_main->setCurrentIndex(0);
}

void MainWindowseif::on_pushButton_login_clicked()
{
    QString role_what="";
    QString id =ui->lineEdit_logintosystemID->text();
    QString pass =ui->lineEdit_logintosystemPASSWORD->text();

    bool result=checking_user_log_in_and_updating_login_status(id,pass,role_what);

    role_what = role_what.toLower();

    if(result==true && (role_what=="admin") )
    {

        ui->label_wrongLOGINinput->setText( "Enter LOGIN AND PASSWORD" );

        ui->stackedWidget_main->setCurrentIndex(1);
        ui->pushButton_logout->show();
        ui->pushButton_FullAccess->show();

    }
    else if(result==true && (role_what=="bus_agent") )
    {
//        ui->stackedWidget_main->setCurrentIndex(2);
//        ui->pushButton_logout->show();

         this->hide();
        //salima
         Dialog bus;

             ui->label_wrongLOGINinput->setText( "Enter LOGIN AND PASSWORD" );

         bus.exec();

         this->show();
         ui->stackedWidget_main->setCurrentIndex(0);
         ui->pushButton_logout->hide();




    }
    else if(result==true && (role_what=="abonn_agent") )
    {

         //m.getlobbymainwindow(this);
        this->hide();
        //mohtadi
         Dialogabonne abbonne;

             ui->label_wrongLOGINinput->setText( "Enter LOGIN AND PASSWORD" );

         abbonne.setModal(true);
         abbonne.exec();

         this->show();
         ui->stackedWidget_main->setCurrentIndex(0);
         ui->pushButton_logout->hide();

    }
    else if(result==true && (role_what=="station_agent") )
    {
        this->hide();
        //ismail
        DialogStation station;

        ui->label_wrongLOGINinput->setText( "Enter LOGIN AND PASSWORD" );

        station.setModal(true);
        station.exec();
       this->show();

        ui->stackedWidget_main->setCurrentIndex(0);
        ui->pushButton_logout->hide();
    }
    if(result==true && (role_what=="reclam_agent") )
    {
        this->hide();
        ui->label_wrongLOGINinput->setText( "Enter LOGIN AND PASSWORD" );


        //yessmin
        DialogReclamation reclam;
        reclam.setModal(true);
        reclam.exec();
       this->show();
        ui->stackedWidget_main->setCurrentIndex(0);
        ui->pushButton_logout->hide();

    }
    else if(result==true && ( role_what!="reclam_agent" && role_what!="bus_agent" && role_what!="abonn_agent" && role_what!="station_agent" && role_what!="admin" )   )
        ui->label_wrongLOGINinput->setText("you don't have right to access this app \n !!! contact your admin if this is not the case !!!");

}



void MainWindowseif::on_pushButton_FullAccess_clicked()
{

    fullaccess.getmylobbyAddress(this);
    fullaccess.show();
}




