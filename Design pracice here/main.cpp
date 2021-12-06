#include "mainwindow.h"
#include "dbconnexion.h"
#include "employee.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

        w.show();




    return a.exec();
}
