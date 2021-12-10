#include "MainWindowseif.h"
#include <QApplication>
#include <QMessageBox>
#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "dbconnexion.h"
#include"dialogrec.h"
#include "dialogreclamation.h"
#include <QTranslator>
#include <QInputDialog>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



    MainWindowseif w;

    w.show();




    return a.exec();
}
