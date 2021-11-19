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
