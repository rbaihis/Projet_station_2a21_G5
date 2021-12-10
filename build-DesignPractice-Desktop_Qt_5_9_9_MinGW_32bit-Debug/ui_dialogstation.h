/********************************************************************************
** Form generated from reading UI file 'dialogstation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSTATION_H
#define UI_DIALOGSTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogStation
{
public:
    QTabWidget *tabWidget_3;
    QWidget *tab_12;
    QTabWidget *tabWidget_5;
    QWidget *tab_16;
    QTabWidget *tabWidget_8;
    QWidget *tab_20;
    QGroupBox *groupBox_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *nom_station;
    QLineEdit *le_numero;
    QLineEdit *le_ville;
    QLineEdit *le_region;
    QLineEdit *id_agent;
    QLabel *label_8;
    QPushButton *pb_ajouter;
    QWidget *tab_21;
    QTableView *tablestation;
    QPushButton *pb_afficher;
    QWidget *tab_7;
    QGroupBox *groupBox_7;
    QGroupBox *groupBox_8;
    QLineEdit *numstation_edit;
    QLabel *label_22;
    QLineEdit *region_edit;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *ville_edit;
    QLineEdit *agent_edit;
    QLineEdit *nom_edit;
    QPushButton *pb_modifier;
    QLabel *label_13;
    QWidget *tab_8;
    QGroupBox *groupBox_13;
    QPushButton *pb_supprimer;
    QLabel *label_2;
    QLineEdit *numero_del;
    QWidget *tab_17;
    QTabWidget *tabWidget_9;
    QWidget *tab_23;
    QGroupBox *groupBox_22;
    QTableView *tableView_rech;
    QLineEdit *lineEdit_recherhche_2;
    QPushButton *pb_recherche;
    QWidget *tab_24;
    QGroupBox *groupBox_16;
    QGroupBox *groupBox_17;
    QPushButton *pushButton_32;
    QComboBox *col;
    QComboBox *ord;
    QTableView *tableViewja_3;
    QWidget *tab_27;
    QGroupBox *groupBox_15;
    QPushButton *pushButton_28;
    QWidget *tab_25;
    QGroupBox *groupBox_18;
    QLabel *label_23;
    QCheckBox *camera_ck;
    QCheckBox *chaises_ck;
    QCheckBox *tickets_ck;
    QCheckBox *planning_ck;
    QCheckBox *presence_ck;
    QPushButton *pb_valider;
    QWidget *tab_26;
    QWidget *tab_28;
    QGroupBox *groupBox_19;
    QPushButton *pushButton;

    void setupUi(QDialog *DialogStation)
    {
        if (DialogStation->objectName().isEmpty())
            DialogStation->setObjectName(QStringLiteral("DialogStation"));
        DialogStation->resize(1093, 632);
        tabWidget_3 = new QTabWidget(DialogStation);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 1001, 671));
        tabWidget_3->setStyleSheet(QStringLiteral(""));
        tabWidget_3->setTabBarAutoHide(false);
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        tabWidget_5 = new QTabWidget(tab_12);
        tabWidget_5->setObjectName(QStringLiteral("tabWidget_5"));
        tabWidget_5->setGeometry(QRect(0, 0, 731, 581));
        tabWidget_5->setStyleSheet(QStringLiteral("background-image: url(:/img/pngtree-bus-stop-city-png-image_677426.jpg);"));
        tab_16 = new QWidget();
        tab_16->setObjectName(QStringLiteral("tab_16"));
        tabWidget_8 = new QTabWidget(tab_16);
        tabWidget_8->setObjectName(QStringLiteral("tabWidget_8"));
        tabWidget_8->setGeometry(QRect(0, 0, 691, 561));
        tabWidget_8->setStyleSheet(QStringLiteral(""));
        tab_20 = new QWidget();
        tab_20->setObjectName(QStringLiteral("tab_20"));
        groupBox_6 = new QGroupBox(tab_20);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(40, 10, 531, 331));
        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 90, 56, 16));
        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 140, 56, 16));
        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 180, 56, 16));
        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(40, 230, 71, 16));
        nom_station = new QLineEdit(groupBox_6);
        nom_station->setObjectName(QStringLiteral("nom_station"));
        nom_station->setGeometry(QRect(160, 40, 191, 22));
        nom_station->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        le_numero = new QLineEdit(groupBox_6);
        le_numero->setObjectName(QStringLiteral("le_numero"));
        le_numero->setGeometry(QRect(160, 90, 191, 22));
        le_numero->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        le_ville = new QLineEdit(groupBox_6);
        le_ville->setObjectName(QStringLiteral("le_ville"));
        le_ville->setGeometry(QRect(160, 130, 191, 22));
        le_ville->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        le_region = new QLineEdit(groupBox_6);
        le_region->setObjectName(QStringLiteral("le_region"));
        le_region->setGeometry(QRect(160, 180, 191, 22));
        le_region->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        id_agent = new QLineEdit(groupBox_6);
        id_agent->setObjectName(QStringLiteral("id_agent"));
        id_agent->setGeometry(QRect(160, 230, 191, 22));
        id_agent->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        label_8 = new QLabel(groupBox_6);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 40, 71, 16));
        pb_ajouter = new QPushButton(groupBox_6);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(384, 290, 91, 23));
        pb_ajouter->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"padding: 1px;\n"
"\n"
"border-style: solid;\n"
"\n"
"border: 2px solid gray;\n"
"\n"
"border-radius: 8px;\n"
"\n"
"background-color: rgb(143, 143, 143);\n"
"\n"
"border:2px solid #000;\n"
"\n"
"}\n"
"\n"
"QPushButton {\n"
"\n"
"color: #fff !important;\n"
"\n"
"text-transform: uppercase;\n"
"\n"
"text-decoration: none;\n"
"\n"
"background: #e12d4e;\n"
"\n"
"padding: 20px;\n"
"\n"
"border-radius: 5px;\n"
"\n"
"display: inline-block;\n"
"\n"
"border: none;\n"
"\n"
"transition: all 0.4s ease 0s;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"\n"
"background: #434343;\n"
"\n"
"letter-spacing: 1px;\n"
"\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"transition: all 0.4s ease 0s;\n"
"\n"
"}"));
        tabWidget_8->addTab(tab_20, QString());
        tab_21 = new QWidget();
        tab_21->setObjectName(QStringLiteral("tab_21"));
        tablestation = new QTableView(tab_21);
        tablestation->setObjectName(QStringLiteral("tablestation"));
        tablestation->setGeometry(QRect(20, 10, 441, 151));
        pb_afficher = new QPushButton(tab_21);
        pb_afficher->setObjectName(QStringLiteral("pb_afficher"));
        pb_afficher->setGeometry(QRect(530, 120, 91, 23));
        pb_afficher->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"padding: 1px;\n"
"\n"
"border-style: solid;\n"
"\n"
"border: 2px solid gray;\n"
"\n"
"border-radius: 8px;\n"
"\n"
"background-color: rgb(143, 143, 143);\n"
"\n"
"border:2px solid #000;\n"
"\n"
"}\n"
"\n"
"QPushButton {\n"
"\n"
"color: #fff !important;\n"
"\n"
"text-transform: uppercase;\n"
"\n"
"text-decoration: none;\n"
"\n"
"background: #e12d4e;\n"
"\n"
"padding: 20px;\n"
"\n"
"border-radius: 5px;\n"
"\n"
"display: inline-block;\n"
"\n"
"border: none;\n"
"\n"
"transition: all 0.4s ease 0s;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"\n"
"background: #434343;\n"
"\n"
"letter-spacing: 1px;\n"
"\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"transition: all 0.4s ease 0s;\n"
"\n"
"}"));
        tabWidget_8->addTab(tab_21, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        groupBox_7 = new QGroupBox(tab_7);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(40, 10, 571, 391));
        groupBox_8 = new QGroupBox(groupBox_7);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 30, 141, 101));
        numstation_edit = new QLineEdit(groupBox_8);
        numstation_edit->setObjectName(QStringLiteral("numstation_edit"));
        numstation_edit->setGeometry(QRect(10, 20, 113, 22));
        numstation_edit->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        label_22 = new QLabel(groupBox_7);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(20, 270, 51, 16));
        region_edit = new QLineEdit(groupBox_7);
        region_edit->setObjectName(QStringLiteral("region_edit"));
        region_edit->setGeometry(QRect(110, 270, 191, 22));
        region_edit->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        label_18 = new QLabel(groupBox_7);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(15, 220, 56, 16));
        label_19 = new QLabel(groupBox_7);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(15, 180, 56, 16));
        ville_edit = new QLineEdit(groupBox_7);
        ville_edit->setObjectName(QStringLiteral("ville_edit"));
        ville_edit->setGeometry(QRect(105, 220, 191, 22));
        ville_edit->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        agent_edit = new QLineEdit(groupBox_7);
        agent_edit->setObjectName(QStringLiteral("agent_edit"));
        agent_edit->setGeometry(QRect(105, 180, 191, 22));
        agent_edit->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        nom_edit = new QLineEdit(groupBox_7);
        nom_edit->setObjectName(QStringLiteral("nom_edit"));
        nom_edit->setGeometry(QRect(105, 140, 191, 22));
        nom_edit->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        pb_modifier = new QPushButton(groupBox_7);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(210, 310, 93, 28));
        pb_modifier->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"padding: 1px;\n"
"\n"
"border-style: solid;\n"
"\n"
"border: 2px solid gray;\n"
"\n"
"border-radius: 8px;\n"
"\n"
"background-color: rgb(143, 143, 143);\n"
"\n"
"border:2px solid #000;\n"
"\n"
"}\n"
"\n"
"QPushButton {\n"
"\n"
"color: #fff !important;\n"
"\n"
"text-transform: uppercase;\n"
"\n"
"text-decoration: none;\n"
"\n"
"background: #e12d4e;\n"
"\n"
"padding: 20px;\n"
"\n"
"border-radius: 5px;\n"
"\n"
"display: inline-block;\n"
"\n"
"border: none;\n"
"\n"
"transition: all 0.4s ease 0s;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"\n"
"background: #434343;\n"
"\n"
"letter-spacing: 1px;\n"
"\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"transition: all 0.4s ease 0s;\n"
"\n"
"}"));
        label_13 = new QLabel(groupBox_7);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 140, 47, 14));
        tabWidget_8->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        groupBox_13 = new QGroupBox(tab_8);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(20, 10, 221, 161));
        groupBox_13->setStyleSheet(QStringLiteral(""));
        pb_supprimer = new QPushButton(groupBox_13);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(50, 80, 141, 51));
        pb_supprimer->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"padding: 1px;\n"
"\n"
"border-style: solid;\n"
"\n"
"border: 2px solid gray;\n"
"\n"
"border-radius: 8px;\n"
"\n"
"background-color: rgb(143, 143, 143);\n"
"\n"
"border:2px solid #000;\n"
"\n"
"}\n"
"\n"
"QPushButton {\n"
"\n"
"color: #fff !important;\n"
"\n"
"text-transform: uppercase;\n"
"\n"
"text-decoration: none;\n"
"\n"
"background: #e12d4e;\n"
"\n"
"padding: 20px;\n"
"\n"
"border-radius: 5px;\n"
"\n"
"display: inline-block;\n"
"\n"
"border: none;\n"
"\n"
"transition: all 0.4s ease 0s;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"\n"
"background: #434343;\n"
"\n"
"letter-spacing: 1px;\n"
"\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"transition: all 0.4s ease 0s;\n"
"\n"
"}"));
        label_2 = new QLabel(groupBox_13);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 47, 14));
        numero_del = new QLineEdit(groupBox_13);
        numero_del->setObjectName(QStringLiteral("numero_del"));
        numero_del->setGeometry(QRect(70, 40, 113, 20));
        numero_del->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        tabWidget_8->addTab(tab_8, QString());
        tabWidget_5->addTab(tab_16, QString());
        tab_17 = new QWidget();
        tab_17->setObjectName(QStringLiteral("tab_17"));
        tabWidget_9 = new QTabWidget(tab_17);
        tabWidget_9->setObjectName(QStringLiteral("tabWidget_9"));
        tabWidget_9->setGeometry(QRect(0, 0, 681, 571));
        tabWidget_9->setStyleSheet(QStringLiteral(""));
        tab_23 = new QWidget();
        tab_23->setObjectName(QStringLiteral("tab_23"));
        groupBox_22 = new QGroupBox(tab_23);
        groupBox_22->setObjectName(QStringLiteral("groupBox_22"));
        groupBox_22->setGeometry(QRect(0, 0, 621, 271));
        tableView_rech = new QTableView(groupBox_22);
        tableView_rech->setObjectName(QStringLiteral("tableView_rech"));
        tableView_rech->setGeometry(QRect(40, 30, 561, 241));
        lineEdit_recherhche_2 = new QLineEdit(tab_23);
        lineEdit_recherhche_2->setObjectName(QStringLiteral("lineEdit_recherhche_2"));
        lineEdit_recherhche_2->setGeometry(QRect(220, 320, 113, 20));
        pb_recherche = new QPushButton(tab_23);
        pb_recherche->setObjectName(QStringLiteral("pb_recherche"));
        pb_recherche->setGeometry(QRect(360, 320, 75, 23));
        tabWidget_9->addTab(tab_23, QString());
        tab_24 = new QWidget();
        tab_24->setObjectName(QStringLiteral("tab_24"));
        groupBox_16 = new QGroupBox(tab_24);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        groupBox_16->setGeometry(QRect(30, 40, 251, 311));
        groupBox_17 = new QGroupBox(groupBox_16);
        groupBox_17->setObjectName(QStringLiteral("groupBox_17"));
        groupBox_17->setGeometry(QRect(10, 30, 201, 161));
        pushButton_32 = new QPushButton(groupBox_17);
        pushButton_32->setObjectName(QStringLiteral("pushButton_32"));
        pushButton_32->setGeometry(QRect(70, 120, 93, 28));
        pushButton_32->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"padding: 1px;\n"
"\n"
"border-style: solid;\n"
"\n"
"border: 2px solid gray;\n"
"\n"
"border-radius: 8px;\n"
"\n"
"background-color: rgb(143, 143, 143);\n"
"\n"
"border:2px solid #000;\n"
"\n"
"}\n"
"\n"
"QPushButton {\n"
"\n"
"color: #fff !important;\n"
"\n"
"text-transform: uppercase;\n"
"\n"
"text-decoration: none;\n"
"\n"
"background: #e12d4e;\n"
"\n"
"padding: 20px;\n"
"\n"
"border-radius: 5px;\n"
"\n"
"display: inline-block;\n"
"\n"
"border: none;\n"
"\n"
"transition: all 0.4s ease 0s;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"\n"
"background: #434343;\n"
"\n"
"letter-spacing: 1px;\n"
"\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"transition: all 0.4s ease 0s;\n"
"\n"
"}"));
        col = new QComboBox(groupBox_17);
        col->setObjectName(QStringLiteral("col"));
        col->setGeometry(QRect(10, 50, 62, 22));
        ord = new QComboBox(groupBox_17);
        ord->setObjectName(QStringLiteral("ord"));
        ord->setGeometry(QRect(90, 50, 62, 22));
        tableViewja_3 = new QTableView(tab_24);
        tableViewja_3->setObjectName(QStringLiteral("tableViewja_3"));
        tableViewja_3->setGeometry(QRect(310, 70, 321, 181));
        tabWidget_9->addTab(tab_24, QString());
        tab_27 = new QWidget();
        tab_27->setObjectName(QStringLiteral("tab_27"));
        groupBox_15 = new QGroupBox(tab_27);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        groupBox_15->setGeometry(QRect(20, 10, 831, 341));
        pushButton_28 = new QPushButton(groupBox_15);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        pushButton_28->setGeometry(QRect(230, 160, 141, 71));
        pushButton_28->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"padding: 1px;\n"
"\n"
"border-style: solid;\n"
"\n"
"border: 2px solid gray;\n"
"\n"
"border-radius: 8px;\n"
"\n"
"background-color: rgb(143, 143, 143);\n"
"\n"
"border:2px solid #000;\n"
"\n"
"}\n"
"\n"
"QPushButton {\n"
"\n"
"color: #fff !important;\n"
"\n"
"text-transform: uppercase;\n"
"\n"
"text-decoration: none;\n"
"\n"
"background: #e12d4e;\n"
"\n"
"padding: 20px;\n"
"\n"
"border-radius: 5px;\n"
"\n"
"display: inline-block;\n"
"\n"
"border: none;\n"
"\n"
"transition: all 0.4s ease 0s;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"\n"
"background: #434343;\n"
"\n"
"letter-spacing: 1px;\n"
"\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"transition: all 0.4s ease 0s;\n"
"\n"
"}\n"
""));
        tabWidget_9->addTab(tab_27, QString());
        tab_25 = new QWidget();
        tab_25->setObjectName(QStringLiteral("tab_25"));
        groupBox_18 = new QGroupBox(tab_25);
        groupBox_18->setObjectName(QStringLiteral("groupBox_18"));
        groupBox_18->setGeometry(QRect(20, 0, 541, 401));
        label_23 = new QLabel(groupBox_18);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(20, 20, 191, 16));
        camera_ck = new QCheckBox(groupBox_18);
        camera_ck->setObjectName(QStringLiteral("camera_ck"));
        camera_ck->setGeometry(QRect(140, 70, 70, 18));
        chaises_ck = new QCheckBox(groupBox_18);
        chaises_ck->setObjectName(QStringLiteral("chaises_ck"));
        chaises_ck->setGeometry(QRect(140, 110, 70, 18));
        tickets_ck = new QCheckBox(groupBox_18);
        tickets_ck->setObjectName(QStringLiteral("tickets_ck"));
        tickets_ck->setGeometry(QRect(140, 150, 70, 18));
        planning_ck = new QCheckBox(groupBox_18);
        planning_ck->setObjectName(QStringLiteral("planning_ck"));
        planning_ck->setGeometry(QRect(140, 190, 70, 18));
        presence_ck = new QCheckBox(groupBox_18);
        presence_ck->setObjectName(QStringLiteral("presence_ck"));
        presence_ck->setGeometry(QRect(140, 230, 101, 18));
        pb_valider = new QPushButton(groupBox_18);
        pb_valider->setObjectName(QStringLiteral("pb_valider"));
        pb_valider->setGeometry(QRect(304, 150, 101, 23));
        pb_valider->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"padding: 1px;\n"
"\n"
"border-style: solid;\n"
"\n"
"border: 2px solid gray;\n"
"\n"
"border-radius: 8px;\n"
"\n"
"background-color: rgb(143, 143, 143);\n"
"\n"
"border:2px solid #000;\n"
"\n"
"}\n"
"\n"
"QPushButton {\n"
"\n"
"color: #fff !important;\n"
"\n"
"text-transform: uppercase;\n"
"\n"
"text-decoration: none;\n"
"\n"
"background: #e12d4e;\n"
"\n"
"padding: 20px;\n"
"\n"
"border-radius: 5px;\n"
"\n"
"display: inline-block;\n"
"\n"
"border: none;\n"
"\n"
"transition: all 0.4s ease 0s;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"\n"
"background: #434343;\n"
"\n"
"letter-spacing: 1px;\n"
"\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"transition: all 0.4s ease 0s;\n"
"\n"
"}\n"
""));
        tabWidget_9->addTab(tab_25, QString());
        tab_26 = new QWidget();
        tab_26->setObjectName(QStringLiteral("tab_26"));
        tabWidget_9->addTab(tab_26, QString());
        tab_28 = new QWidget();
        tab_28->setObjectName(QStringLiteral("tab_28"));
        groupBox_19 = new QGroupBox(tab_28);
        groupBox_19->setObjectName(QStringLiteral("groupBox_19"));
        groupBox_19->setGeometry(QRect(10, 0, 631, 401));
        pushButton = new QPushButton(groupBox_19);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 170, 151, 51));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"padding: 1px;\n"
"\n"
"border-style: solid;\n"
"\n"
"border: 2px solid gray;\n"
"\n"
"border-radius: 8px;\n"
"\n"
"background-color: rgb(143, 143, 143);\n"
"\n"
"border:2px solid #000;\n"
"\n"
"}\n"
"\n"
"QPushButton {\n"
"\n"
"color: #fff !important;\n"
"\n"
"text-transform: uppercase;\n"
"\n"
"text-decoration: none;\n"
"\n"
"background: #e12d4e;\n"
"\n"
"padding: 20px;\n"
"\n"
"border-radius: 5px;\n"
"\n"
"display: inline-block;\n"
"\n"
"border: none;\n"
"\n"
"transition: all 0.4s ease 0s;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"\n"
"background: #434343;\n"
"\n"
"letter-spacing: 1px;\n"
"\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"\n"
"transition: all 0.4s ease 0s;\n"
"\n"
"}"));
        tabWidget_9->addTab(tab_28, QString());
        tabWidget_5->addTab(tab_17, QString());
        tabWidget_3->addTab(tab_12, QString());

        retranslateUi(DialogStation);

        tabWidget_3->setCurrentIndex(0);
        tabWidget_5->setCurrentIndex(1);
        tabWidget_8->setCurrentIndex(2);
        tabWidget_9->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(DialogStation);
    } // setupUi

    void retranslateUi(QDialog *DialogStation)
    {
        DialogStation->setWindowTitle(QApplication::translate("DialogStation", "Dialog", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("DialogStation", "ajouter station", Q_NULLPTR));
        label_9->setText(QApplication::translate("DialogStation", "numero", Q_NULLPTR));
        label_10->setText(QApplication::translate("DialogStation", "ville", Q_NULLPTR));
        label_11->setText(QApplication::translate("DialogStation", "region", Q_NULLPTR));
        label_12->setText(QApplication::translate("DialogStation", " ID lagent", Q_NULLPTR));
        le_ville->setText(QString());
        label_8->setText(QApplication::translate("DialogStation", "nom station", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("DialogStation", "ajouter", Q_NULLPTR));
        tabWidget_8->setTabText(tabWidget_8->indexOf(tab_20), QApplication::translate("DialogStation", "ajouter station", Q_NULLPTR));
        pb_afficher->setText(QApplication::translate("DialogStation", "afficher", Q_NULLPTR));
        tabWidget_8->setTabText(tabWidget_8->indexOf(tab_21), QApplication::translate("DialogStation", "afficher station", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("DialogStation", "modifier station", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("DialogStation", "entrer num station", Q_NULLPTR));
        label_22->setText(QApplication::translate("DialogStation", "region", Q_NULLPTR));
        label_18->setText(QApplication::translate("DialogStation", "ville", Q_NULLPTR));
        label_19->setText(QApplication::translate("DialogStation", "Agent", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("DialogStation", "modifier", Q_NULLPTR));
        label_13->setText(QApplication::translate("DialogStation", "nom", Q_NULLPTR));
        tabWidget_8->setTabText(tabWidget_8->indexOf(tab_7), QApplication::translate("DialogStation", "modifier station", Q_NULLPTR));
        groupBox_13->setTitle(QApplication::translate("DialogStation", "supprimer station", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("DialogStation", "supprimer ", Q_NULLPTR));
        label_2->setText(QApplication::translate("DialogStation", "numero", Q_NULLPTR));
        tabWidget_8->setTabText(tabWidget_8->indexOf(tab_8), QApplication::translate("DialogStation", "supprimer station", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_16), QApplication::translate("DialogStation", "basic tasks", Q_NULLPTR));
        groupBox_22->setTitle(QApplication::translate("DialogStation", "entrer num station", Q_NULLPTR));
        pb_recherche->setText(QApplication::translate("DialogStation", "Rechercher", Q_NULLPTR));
        tabWidget_9->setTabText(tabWidget_9->indexOf(tab_23), QApplication::translate("DialogStation", "chercher station", Q_NULLPTR));
        groupBox_16->setTitle(QApplication::translate("DialogStation", "trier stations", Q_NULLPTR));
        groupBox_17->setTitle(QApplication::translate("DialogStation", "par", Q_NULLPTR));
        pushButton_32->setText(QApplication::translate("DialogStation", "trier", Q_NULLPTR));
        col->clear();
        col->insertItems(0, QStringList()
         << QApplication::translate("DialogStation", "numero", Q_NULLPTR)
         << QApplication::translate("DialogStation", "ville", Q_NULLPTR)
         << QApplication::translate("DialogStation", "id_agent", Q_NULLPTR)
        );
        ord->clear();
        ord->insertItems(0, QStringList()
         << QApplication::translate("DialogStation", "asc", Q_NULLPTR)
         << QApplication::translate("DialogStation", "desc", Q_NULLPTR)
        );
        tabWidget_9->setTabText(tabWidget_9->indexOf(tab_24), QApplication::translate("DialogStation", "trier station", Q_NULLPTR));
        groupBox_15->setTitle(QApplication::translate("DialogStation", "calculer profits par station", Q_NULLPTR));
        pushButton_28->setText(QApplication::translate("DialogStation", "statistiques", Q_NULLPTR));
        tabWidget_9->setTabText(tabWidget_9->indexOf(tab_27), QApplication::translate("DialogStation", "statistiques", Q_NULLPTR));
        groupBox_18->setTitle(QApplication::translate("DialogStation", "valider station", Q_NULLPTR));
        label_23->setText(QApplication::translate("DialogStation", "elements presents dans la station:", Q_NULLPTR));
        camera_ck->setText(QApplication::translate("DialogStation", "camera", Q_NULLPTR));
        chaises_ck->setText(QApplication::translate("DialogStation", "chaises", Q_NULLPTR));
        tickets_ck->setText(QApplication::translate("DialogStation", "tickets", Q_NULLPTR));
        planning_ck->setText(QApplication::translate("DialogStation", "planning", Q_NULLPTR));
        presence_ck->setText(QApplication::translate("DialogStation", "presence agent", Q_NULLPTR));
        pb_valider->setText(QApplication::translate("DialogStation", "Valider", Q_NULLPTR));
        tabWidget_9->setTabText(tabWidget_9->indexOf(tab_25), QApplication::translate("DialogStation", "valider station", Q_NULLPTR));
        tabWidget_9->setTabText(tabWidget_9->indexOf(tab_26), QString());
        groupBox_19->setTitle(QApplication::translate("DialogStation", "superviser le planning", Q_NULLPTR));
        pushButton->setText(QApplication::translate("DialogStation", "Excel", Q_NULLPTR));
        tabWidget_9->setTabText(tabWidget_9->indexOf(tab_28), QApplication::translate("DialogStation", "superviser ", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_17), QApplication::translate("DialogStation", "advanced tasks", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_12), QApplication::translate("DialogStation", "Gestion Stations", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogStation: public Ui_DialogStation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSTATION_H
