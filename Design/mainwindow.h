#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "employee.h"
#include "dbconnexion.h"


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
private slots:





    //crud
    void on_pushButton_add_employee_clicked();
    void on_pushButton_supprimer_choix_clicked();
    void on_pushButton_update_employee_clicked();
    //afficher update
    void custom_by_me_Update_tableView_and_Row_Count_label();


    // clear lineEdit_written_space
    void on_pushButton_clear_cases_ajouter_clicked();




    void on_pushButton_clear_cases_ajouter_2_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
