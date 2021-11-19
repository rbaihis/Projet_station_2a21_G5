#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "station.h"
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
    void on_pushButton_3_clicked();

    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_afficher_clicked();

    void on_pb_modifier_clicked();

    void on_lineEdit_recherhche_2_textChanged(const QString &arg1);

    void on_pushButton_32_clicked();

    void on_pushButton_clicked();

    void on_pushButton_28_clicked();

    void on_pb_valider_clicked();

    void on_tabWidget_9_currentChanged(int index);

private:
    Ui::MainWindow *ui;
    station ss;
};

#endif // MAINWINDOW_H
