#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "employee.h"
#include "dbconnexion.h"
#include "smtp.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    Connection c;
    Employee employ;



public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //----------------------------------
    void database_employee_connection_status_label( );

    void controlsaisir();
    void empty_all_line_edit();
    bool checkEmailInput(QString checkIfEmail);
    bool digitonlyinput(QString chekmeIFdigit);
    bool characteronlyinput(QString checkmeILettersOnly);



    //----**********Email******************************************
    //email



    //email
private slots:
    void emailemploye();
     void on_send_clicked();
     void mailSent(QString){}
    //---*********Email************************************************


    //crud
    void on_pushButton_add_employee_clicked();
    void on_pushButton_supprimer_choix_clicked();
    void on_pushButton_update_employee_clicked();
    //afficher update
    void custom_by_me_Update_tableView_and_Row_Count_label();


    // clear lineEdit_written_space
    void on_pushButton_clear_cases_ajouter_clicked();

    void on_pushButton_clear_cases_ajouter_2_clicked();

    void on_lineEdit_id_search_modifier_field_textEdited();

    void on_pushButton_login_clicked();

    void logging_out_updating_login_status_to_0( );
    bool checking_user_log_in_and_updating_login_status(QString id,QString pass, QString  &role );


    void on_pushButton_logout_clicked();



   // void on_groupBox_chercher_clicked();

    void on_radioButton_age_chercher_clicked();

    void on_radioButton_score_chercher_clicked();

    void on_radioButton_role_chercher_clicked();


    void on_pushButton_go_chercher_clicked();

    void on_pushButton_clear_chercher_clicked();
    void reset_chercher_view();

    void on_radioButton_age_orderby_clicked();

    void on_radioButton_score_orderby_clicked();

    void on_radioButton_credit_orderby_clicked();



    void on_pushButton_sortONLY_clicked();

    void on_pushButton_searchANDsort_clicked();

    void statistics_play();

    void on_lineEdit_settingemail_textChanged(const QString &arg1);

    void on_lineEdit_settingpassword_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    //login
    QString currentuser;
    //
    //email
       QString ID;
       QString idmail;
       QString mail;
       QString msg;
       QString password;
       QString passwordmail;
       QString cc;
       QString bodymail;

       Smtp *smtp;
      // maybe:
       int aud;
    //


};

#endif // MAINWINDOW_H





