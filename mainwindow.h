#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "client.h"
#include "abonnement.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pb_ajouter_clicked();
    void on_le_Modifier_clicked();
    void on_pb_supprimer_clicked();
    void on_pb_ajouter_2_clicked();
    void on_pb_supprimer_2_clicked();
    void on_le_modifier_2_clicked();
    void stats(QString,QString,int,int,QString);




    void on_pb_stat_age_clicked();

    void on_le_recherche_client_textChanged(const QString &arg1);

    void on_cb_tri_client_currentIndexChanged(int index);


    void on_pb_excel_clicked();
    void on_CLEAR_clicked();

    void on_pushButton_clicked();

    void on_tab_client_activated(const QModelIndex &index);

private:
    Abonnement b;
    Ui::MainWindow *ui;
    Client C;
    QString File = "‪H.txt";
};

#endif // MAINWINDOW_H
