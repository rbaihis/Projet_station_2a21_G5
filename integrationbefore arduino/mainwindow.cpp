#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"bus.h"
#include<QApplication>
#include<QMessageBox>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QFileDialog>
#include <QDebug>
#include <QSqlQueryModel>
#include <QMessageBox>
#include "dialog.h"
#include"dialogabonne.h"
#include"dialogstation.h"
#include"dialogreclamation.h"
//#include"dialogemployee.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pb_gestionBus_clicked()
{
   this->hide();
    Dialog d;
    d.setModal(true);
    d.exec();


}

void  MainWindow::on_pb_gestionabonne_clicked()
{
    this->hide();
     Dialogabonne A;
     A.setModal(true);
     A.exec();

}


void MainWindow::on_pb_gestionStation_clicked()
{
    this->hide();
     DialogStation S;
     S.setModal(true);
     S.exec();
}

void MainWindow::on_pb_gestionReclamation_clicked()
{
    this->hide();
     DialogReclamation R;
   R.setModal(true);
    R.exec();
}



void MainWindow::on_pb_gestion_employee_clicked()
{
    this->close();
    BacktoLobbyLOGIN->show();


}

