#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<bus.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void getmylobbyAddress(QMainWindow  *add){ BacktoLobbyLOGIN = add; };

private slots:


    void on_pb_gestionBus_clicked();
    void on_pb_gestionabonne_clicked();
    void on_pb_gestionStation_clicked();

    void on_pb_gestionReclamation_clicked();

   // void on_pb_gestion_employee_clicked();

    void on_pb_gestion_employee_clicked();



private:
    Ui::MainWindow *ui;

    QMainWindow * BacktoLobbyLOGIN;
};

#endif // MAINWINDOW_H
