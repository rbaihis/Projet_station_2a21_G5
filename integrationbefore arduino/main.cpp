#include "MainWindowseif.h"
#include <QApplication>
#include <QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindowseif w;

    w.show();

    return a.exec();
}
