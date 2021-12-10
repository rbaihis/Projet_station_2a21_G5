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

//yessmin
#include <QApplication>
#include "maquette_yesmin.h"
#include <QTranslator>
#include <QInputDialog>

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
    this->close();

}

void  MainWindow::on_pb_gestionabonne_clicked()
{
    this->hide();
     Dialogabonne A;
     A.setModal(true);
     A.exec();
    this->close();
}


void MainWindow::on_pb_gestionStation_clicked()
{
    this->hide();
     DialogStation S;
     S.setModal(true);
     S.exec();
     this->close();
}

void MainWindow::on_pb_gestionReclamation_clicked()
{
    this->hide();

    //yessmin

    QTranslator t;
    QTranslator guiTranslator;
    QStringList languages;
    languages << "English"<<"Frensh";
    QString lang=QInputDialog::getItem(NULL,"Select Language","Language" , languages);
    if (lang == "English" )
    {
        t.load(":/english2.qm");

       guiTranslator.load("C:/Qt/Qt5.9.9/5.9.9/mingw53_32/translations/qtbase_en.qm");
    } else if (lang == "Frensh")
        t.load(":/arabic2.qm");
    guiTranslator.load("C:/Qt/Qt5.9.9/5.9.9/mingw53_32/translations/qtbase_ar.qm");

    if(lang!="francais")
           {
               QApplication::installTranslator(&t);
               QApplication::installTranslator(&guiTranslator);
           }

    maquette_yesmin reclam;
   reclam.setModal(true);
    reclam.exec();
}



void MainWindow::on_pb_gestion_employee_clicked()
{
    this->close();
    BacktoLobbyLOGIN->show();


}

