/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *pb_gestionBus;
    QPushButton *pb_gestionabonne;
    QPushButton *pb_gestionReclamation;
    QPushButton *pb_gestion_employee;
    QPushButton *pb_gestionStation;
    QLabel *label_2;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1004, 650);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 961, 461));
        pb_gestionBus = new QPushButton(groupBox);
        pb_gestionBus->setObjectName(QStringLiteral("pb_gestionBus"));
        pb_gestionBus->setGeometry(QRect(90, 140, 171, 41));
        pb_gestionBus->setStyleSheet(QLatin1String("font: 87 8pt \"Segoe UI Black\";\n"
"border-color: rgb(197, 39, 68);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(225, 45, 78, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(217, 29, 81, 255));\n"
"selection-color: rgb(225, 22, 69);\n"
"selection-background-color: rgb(225, 6, 57);"));
        pb_gestionabonne = new QPushButton(groupBox);
        pb_gestionabonne->setObjectName(QStringLiteral("pb_gestionabonne"));
        pb_gestionabonne->setGeometry(QRect(90, 200, 171, 41));
        pb_gestionabonne->setStyleSheet(QLatin1String("font: 87 8pt \"Segoe UI Black\";\n"
"border-color: rgb(197, 39, 68);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(225, 45, 78, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(217, 29, 81, 255));\n"
"selection-color: rgb(225, 22, 69);\n"
"selection-background-color: rgb(225, 6, 57);"));
        pb_gestionReclamation = new QPushButton(groupBox);
        pb_gestionReclamation->setObjectName(QStringLiteral("pb_gestionReclamation"));
        pb_gestionReclamation->setGeometry(QRect(90, 260, 171, 41));
        pb_gestionReclamation->setStyleSheet(QLatin1String("font: 87 8pt \"Segoe UI Black\";\n"
"border-color: rgb(197, 39, 68);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(225, 45, 78, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(217, 29, 81, 255));\n"
"selection-color: rgb(225, 22, 69);\n"
"selection-background-color: rgb(225, 6, 57);"));
        pb_gestion_employee = new QPushButton(groupBox);
        pb_gestion_employee->setObjectName(QStringLiteral("pb_gestion_employee"));
        pb_gestion_employee->setGeometry(QRect(90, 320, 171, 41));
        pb_gestion_employee->setStyleSheet(QLatin1String("font: 87 8pt \"Segoe UI Black\";\n"
"border-color: rgb(197, 39, 68);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(225, 45, 78, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(217, 29, 81, 255));\n"
"selection-color: rgb(225, 22, 69);\n"
"selection-background-color: rgb(225, 6, 57);"));
        pb_gestionStation = new QPushButton(groupBox);
        pb_gestionStation->setObjectName(QStringLiteral("pb_gestionStation"));
        pb_gestionStation->setGeometry(QRect(90, 390, 171, 41));
        pb_gestionStation->setStyleSheet(QLatin1String("font: 87 8pt \"Segoe UI Black\";\n"
"border-color: rgb(197, 39, 68);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(225, 45, 78, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(217, 29, 81, 255));\n"
"selection-color: rgb(225, 22, 69);\n"
"selection-background-color: rgb(225, 6, 57);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 40, 889, 80));
        label_2->setStyleSheet(QLatin1String("\n"
"font: 75 italic 40pt \"Century Schoolbook\";\n"
""));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 0, 701, 471));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/263567977_281119867312827_5399763417507337311_n.jpg")));
        label->raise();
        pb_gestionBus->raise();
        pb_gestionabonne->raise();
        pb_gestionReclamation->raise();
        pb_gestion_employee->raise();
        pb_gestionStation->raise();
        label_2->raise();
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1004, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
        groupBox->setTitle(QString());
        pb_gestionBus->setText(QApplication::translate("MainWindow", "gestion des Bus", Q_NULLPTR));
        pb_gestionabonne->setText(QApplication::translate("MainWindow", "gestion des  Abonnement", Q_NULLPTR));
        pb_gestionReclamation->setText(QApplication::translate("MainWindow", "gestion des reclamation", Q_NULLPTR));
        pb_gestion_employee->setText(QApplication::translate("MainWindow", "gestion des employer", Q_NULLPTR));
        pb_gestionStation->setText(QApplication::translate("MainWindow", "gestion des station", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "PRESSBUS FULL ACCESS", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
