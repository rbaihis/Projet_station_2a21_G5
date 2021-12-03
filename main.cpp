#include "mainwindow.h"
#include "maquette_yesmin.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include <QTranslator>
#include <QInputDialog>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
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
            a.installTranslator(&t);
            a.installTranslator(&guiTranslator);
        }


    MainWindow w;
    maquette_yesmin y;
    Connection c;
    bool test=c.createconnect();
    if(test)
    {y.show();
        QMessageBox::critical(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}
