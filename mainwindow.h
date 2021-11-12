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




private:
    Abonnement b;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H