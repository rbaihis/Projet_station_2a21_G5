#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employee.h"
#include <QMessageBox>
#include <QtDebug>
#include <QStandardItemModel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    // ladel status show only not important at all

    c.createconnect();
    database_employee_connection_status_label();
    custom_by_me_Update_tableView_and_Row_Count_label();

    controlsaisir();
   // empty_all_line_edit();

    qDebug()<<"\n"<<"model is address "<<employ.get_my_model_of_tableView_pointer()<<"\n";

}

MainWindow::~MainWindow()
{
    qDebug()<<"\n"<<"model is address before deleted "<<employ.get_my_model_of_tableView_pointer()<<"\n";

    // deleting the model we created for tableview in Employee class here.
    delete employ.get_my_model_of_tableView_pointer();

    // disconnect database employee
    c.desconnection();

    delete ui; 
}

//------------ label_status_function--on top on the right side of window--
void MainWindow:: database_employee_connection_status_label( )
{

    if(c.get_testConnection_Stat())
      ui->label_main_databaseb_status->setText("[+ Employee_DB connected...]");
     else
         ui->label_main_databaseb_status->setText("[+ Employee_DB disconnected.]");
}
//------------------------------------------------------------------------------

//-------------custom-consulter_employee_tabview_______________
void MainWindow::custom_by_me_Update_tableView_and_Row_Count_label()
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
void MainWindow::on_pushButton_add_employee_clicked()
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
                QString mydateString=mydate.toString();//

                // getting more of string data stored in line_edit :
                int scor=ui->lineEdit_scor->text().toInt();//

                float debitacc=ui->lineEdit_debitaccount->text().toFloat();//
                float creditacc=ui->lineEdit_creditaccount->text().toFloat();//
                QString rue=ui->lineEdit_address->text();
                QString postcode=ui->lineEdit_postalcode->text();
                QString role= ui->lineEdit_role->text();


               // storing all extracted data in its corresponding field in our employee object
               Employee e(id,nom,prenom,passw,gender,mydateString,scor,email,phon,debitacc,creditacc,rue,postcode, role );


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
void MainWindow::on_pushButton_supprimer_choix_clicked()
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
void MainWindow::on_pushButton_update_employee_clicked()
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
      employ.setrole(ui->lineEdit_role_2->text());

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



}
//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------



void MainWindow:: controlsaisir()
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
    ui->lineEdit_role->setMaxLength(25);

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

void MainWindow:: empty_all_line_edit()
{

    // ajouter line edit interface
    ui->lineEdit_cin->setText("");
    ui->lineEdit_nom->setText("");
    ui->lineEdit_prenom->setText("");
    ui->lineEdit_password->setText("");
    ui->lineEdit_gender->setText("");
    QDate a(2000,1,1);
    ui->dateEdit_datenaissance->setDate( a);//
    ui->lineEdit_scor->setText("");//
    ui->lineEdit_email->setText("");
    ui->lineEdit_phone->setText(""); //
    ui->lineEdit_debitaccount->setText("");//
    ui->lineEdit_creditaccount->setText("");//
    ui->lineEdit_address->setText("");
    ui->lineEdit_postalcode->setText("");
    ui->lineEdit_role->setText("");

    //modifier line edit interface
    ui->lineEdit_id_search_modifier_field->setText(""); //
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

void MainWindow::on_pushButton_clear_cases_ajouter_clicked()
{
   empty_all_line_edit();

}

void MainWindow::on_pushButton_clear_cases_ajouter_2_clicked()
{
    empty_all_line_edit();
}


//-------check_input_type-----------------
//----------------------------------------

bool MainWindow::characteronlyinput(QString checkmeILettersOnly )
{

        bool testing=true;

        for(int i=0;i<checkmeILettersOnly.length()&&testing==true;i++)
            if( ( checkmeILettersOnly[i]<65 || checkmeILettersOnly[i] > 122 ) || ( checkmeILettersOnly[i]<=96 && checkmeILettersOnly[i] >= 91)  )
                testing=false;

        return testing;
}



bool MainWindow::digitonlyinput(QString checkmeIFdigit)
{
    bool testing=true;

    for(int i=0;i<checkmeIFdigit.length()&&testing==true;i++)
        if( checkmeIFdigit[i]>57 || checkmeIFdigit[i] < 48)
            testing=false;

    return testing;
}



bool MainWindow::checkEmailInput(QString checkIfEmail)
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
