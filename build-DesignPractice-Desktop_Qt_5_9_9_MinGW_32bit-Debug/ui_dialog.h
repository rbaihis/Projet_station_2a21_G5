/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_Dialog
{
public:
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QLabel *label_6;
    QLineEdit *le_id;
    QLineEdit *le_plaque;
    QLineEdit *le_ligne;
    QLabel *label_10;
    QLineEdit *le_capacite;
    QPushButton *pb_ajouter;
    QLabel *label_11;
    QLabel *label;
    QLabel *label_7;
    QWidget *tab_6;
    QTableView *tab_bus;
    QLabel *label_8;
    QPushButton *pb_afficher;
    QWidget *tab_7;
    QLabel *label_23;
    QLabel *label_26;
    QLabel *label_27;
    QLineEdit *le_IDmodifier;
    QLineEdit *le_plaqueModifier;
    QLineEdit *le_ligneModifier;
    QLineEdit *le_capModifier;
    QPushButton *pb_modifier;
    QLabel *label_22;
    QLabel *label_9;
    QWidget *tab_8;
    QGroupBox *groupBox_3;
    QLabel *label_40;
    QLabel *label_41;
    QLineEdit *le_nBS;
    QLineEdit *le_pbS;
    QPushButton *pb_supprimer;
    QLabel *label_12;
    QWidget *tab_9;
    QGroupBox *groupBox_4;
    QLineEdit *le_nBHoraire;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *le_pBHoraire;
    QPushButton *pb_AccFexel;
    QTableView *fichierEXCEL;
    QLabel *label_16;
    QWidget *tab_10;
    QLabel *label_20;
    QGroupBox *recherche;
    QLabel *label_21;
    QLineEdit *le_ligneR;
    QPushButton *pb_recherche;
    QTableView *tab_recherche;
    QPushButton *pb_trier;
    QLabel *label_13;
    QPushButton *pb_trierP;
    QLabel *label_39;
    QLineEdit *le_idR;
    QPushButton *pb_rechercheID;
    QWidget *tab_11;
    QGroupBox *groupBox_6;
    QLabel *label_29;
    QLabel *label_30;
    QLineEdit *l_ligneA;
    QPushButton *pb_afficherTr;
    QPushButton *pb_imp;
    QLineEdit *le_chemin;
    QLabel *label_3;
    QLabel *label_14;
    QLabel *photoTrajet;
    QWidget *tab_12;
    QLabel *label_31;
    QLineEdit *le_mdp;
    QLineEdit *le_nom_2;
    QLineEdit *le_objet;
    QLineEdit *le_recla;
    QPushButton *sendBtn;
    QLabel *label_15;
    QLineEdit *lineEdit_smtp;
    QLineEdit *lineEdit_465;
    QLineEdit *le_receveur;
    QPushButton *exitBtn;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(973, 500);
        tabWidget_2 = new QTabWidget(Dialog);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 961, 511));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget_3 = new QTabWidget(tab_4);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(10, 0, 941, 471));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_6 = new QLabel(tab_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 120, 161, 41));
        label_6->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        le_id = new QLineEdit(tab_5);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(230, 70, 261, 31));
        le_plaque = new QLineEdit(tab_5);
        le_plaque->setObjectName(QStringLiteral("le_plaque"));
        le_plaque->setGeometry(QRect(230, 130, 261, 31));
        le_ligne = new QLineEdit(tab_5);
        le_ligne->setObjectName(QStringLiteral("le_ligne"));
        le_ligne->setGeometry(QRect(230, 190, 261, 31));
        label_10 = new QLabel(tab_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 70, 121, 21));
        label_10->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));
        le_capacite = new QLineEdit(tab_5);
        le_capacite->setObjectName(QStringLiteral("le_capacite"));
        le_capacite->setGeometry(QRect(230, 250, 261, 31));
        pb_ajouter = new QPushButton(tab_5);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(630, 330, 141, 51));
        label_11 = new QLabel(tab_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 240, 151, 41));
        label_11->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label = new QLabel(tab_5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 180, 101, 31));
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(-30, -20, 1201, 551));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/bac.png")));
        tabWidget_3->addTab(tab_5, QString());
        label_7->raise();
        label_6->raise();
        le_id->raise();
        le_plaque->raise();
        le_ligne->raise();
        label_10->raise();
        le_capacite->raise();
        pb_ajouter->raise();
        label_11->raise();
        label->raise();
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tab_bus = new QTableView(tab_6);
        tab_bus->setObjectName(QStringLiteral("tab_bus"));
        tab_bus->setGeometry(QRect(45, 50, 681, 351));
        label_8 = new QLabel(tab_6);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(-25, -25, 1031, 521));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/bac.png")));
        pb_afficher = new QPushButton(tab_6);
        pb_afficher->setObjectName(QStringLiteral("pb_afficher"));
        pb_afficher->setGeometry(QRect(760, 100, 121, 41));
        pb_afficher->setStyleSheet(QStringLiteral("selection-background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        tabWidget_3->addTab(tab_6, QString());
        label_8->raise();
        tab_bus->raise();
        pb_afficher->raise();
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_23 = new QLabel(tab_7);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(40, 150, 171, 31));
        label_23->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label_26 = new QLabel(tab_7);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(40, 200, 151, 41));
        label_26->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label_27 = new QLabel(tab_7);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(40, 80, 121, 41));
        label_27->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        le_IDmodifier = new QLineEdit(tab_7);
        le_IDmodifier->setObjectName(QStringLiteral("le_IDmodifier"));
        le_IDmodifier->setGeometry(QRect(230, 90, 261, 31));
        le_plaqueModifier = new QLineEdit(tab_7);
        le_plaqueModifier->setObjectName(QStringLiteral("le_plaqueModifier"));
        le_plaqueModifier->setGeometry(QRect(230, 150, 261, 31));
        le_ligneModifier = new QLineEdit(tab_7);
        le_ligneModifier->setObjectName(QStringLiteral("le_ligneModifier"));
        le_ligneModifier->setGeometry(QRect(230, 210, 261, 31));
        le_capModifier = new QLineEdit(tab_7);
        le_capModifier->setObjectName(QStringLiteral("le_capModifier"));
        le_capModifier->setGeometry(QRect(230, 270, 261, 31));
        pb_modifier = new QPushButton(tab_7);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(660, 300, 181, 71));
        label_22 = new QLabel(tab_7);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(40, 240, 191, 91));
        label_22->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label_9 = new QLabel(tab_7);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(-50, -10, 1131, 511));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/bac.png")));
        tabWidget_3->addTab(tab_7, QString());
        label_9->raise();
        label_23->raise();
        label_26->raise();
        label_27->raise();
        le_IDmodifier->raise();
        le_plaqueModifier->raise();
        le_ligneModifier->raise();
        le_capModifier->raise();
        pb_modifier->raise();
        label_22->raise();
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        groupBox_3 = new QGroupBox(tab_8);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 0, 931, 431));
        label_40 = new QLabel(groupBox_3);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(90, 90, 131, 31));
        label_40->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label_41 = new QLabel(groupBox_3);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(90, 130, 161, 51));
        label_41->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        le_nBS = new QLineEdit(groupBox_3);
        le_nBS->setObjectName(QStringLiteral("le_nBS"));
        le_nBS->setGeometry(QRect(280, 90, 271, 31));
        le_pbS = new QLineEdit(groupBox_3);
        le_pbS->setObjectName(QStringLiteral("le_pbS"));
        le_pbS->setGeometry(QRect(280, 140, 271, 31));
        pb_supprimer = new QPushButton(groupBox_3);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(610, 230, 151, 61));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 0, 1131, 441));
        label_12->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/bac.png")));
        label_12->raise();
        label_40->raise();
        label_41->raise();
        le_nBS->raise();
        le_pbS->raise();
        pb_supprimer->raise();
        tabWidget_3->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        groupBox_4 = new QGroupBox(tab_9);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 911, 421));
        le_nBHoraire = new QLineEdit(groupBox_4);
        le_nBHoraire->setObjectName(QStringLiteral("le_nBHoraire"));
        le_nBHoraire->setGeometry(QRect(170, 30, 151, 31));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(50, 30, 141, 41));
        label_18->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(360, 20, 181, 41));
        label_19->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
""));
        le_pBHoraire = new QLineEdit(groupBox_4);
        le_pBHoraire->setObjectName(QStringLiteral("le_pBHoraire"));
        le_pBHoraire->setGeometry(QRect(540, 30, 151, 31));
        pb_AccFexel = new QPushButton(groupBox_4);
        pb_AccFexel->setObjectName(QStringLiteral("pb_AccFexel"));
        pb_AccFexel->setGeometry(QRect(770, 20, 121, 51));
        fichierEXCEL = new QTableView(groupBox_4);
        fichierEXCEL->setObjectName(QStringLiteral("fichierEXCEL"));
        fichierEXCEL->setGeometry(QRect(10, 80, 881, 321));
        label_16 = new QLabel(tab_9);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(-10, -60, 1091, 551));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/bac.png")));
        tabWidget_3->addTab(tab_9, QString());
        label_16->raise();
        groupBox_4->raise();
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        label_20 = new QLabel(tab_10);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(110, 200, 111, 41));
        recherche = new QGroupBox(tab_10);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(20, 10, 931, 451));
        label_21 = new QLabel(recherche);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 10, 111, 41));
        label_21->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        le_ligneR = new QLineEdit(recherche);
        le_ligneR->setObjectName(QStringLiteral("le_ligneR"));
        le_ligneR->setGeometry(QRect(130, 20, 181, 31));
        pb_recherche = new QPushButton(recherche);
        pb_recherche->setObjectName(QStringLiteral("pb_recherche"));
        pb_recherche->setGeometry(QRect(340, 10, 111, 41));
        tab_recherche = new QTableView(recherche);
        tab_recherche->setObjectName(QStringLiteral("tab_recherche"));
        tab_recherche->setGeometry(QRect(20, 110, 871, 301));
        pb_trier = new QPushButton(recherche);
        pb_trier->setObjectName(QStringLiteral("pb_trier"));
        pb_trier->setGeometry(QRect(530, 40, 121, 41));
        label_13 = new QLabel(recherche);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(-60, -90, 1201, 541));
        label_13->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/bac.png")));
        pb_trierP = new QPushButton(recherche);
        pb_trierP->setObjectName(QStringLiteral("pb_trierP"));
        pb_trierP->setGeometry(QRect(710, 40, 111, 41));
        label_39 = new QLabel(recherche);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(20, 70, 56, 16));
        label_39->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        le_idR = new QLineEdit(recherche);
        le_idR->setObjectName(QStringLiteral("le_idR"));
        le_idR->setGeometry(QRect(130, 70, 181, 31));
        pb_rechercheID = new QPushButton(recherche);
        pb_rechercheID->setObjectName(QStringLiteral("pb_rechercheID"));
        pb_rechercheID->setGeometry(QRect(340, 57, 111, 41));
        label_13->raise();
        label_21->raise();
        le_ligneR->raise();
        pb_recherche->raise();
        tab_recherche->raise();
        pb_trier->raise();
        pb_trierP->raise();
        label_39->raise();
        le_idR->raise();
        pb_rechercheID->raise();
        tabWidget_3->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        groupBox_6 = new QGroupBox(tab_11);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 10, 911, 421));
        label_29 = new QLabel(groupBox_6);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(10, 20, 131, 41));
        label_29->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        label_30 = new QLabel(groupBox_6);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(10, 80, 121, 21));
        label_30->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
""));
        l_ligneA = new QLineEdit(groupBox_6);
        l_ligneA->setObjectName(QStringLiteral("l_ligneA"));
        l_ligneA->setGeometry(QRect(150, 30, 201, 31));
        pb_afficherTr = new QPushButton(groupBox_6);
        pb_afficherTr->setObjectName(QStringLiteral("pb_afficherTr"));
        pb_afficherTr->setGeometry(QRect(230, 160, 121, 41));
        pb_imp = new QPushButton(groupBox_6);
        pb_imp->setObjectName(QStringLiteral("pb_imp"));
        pb_imp->setGeometry(QRect(780, 370, 121, 41));
        le_chemin = new QLineEdit(groupBox_6);
        le_chemin->setObjectName(QStringLiteral("le_chemin"));
        le_chemin->setGeometry(QRect(150, 80, 201, 31));
        label_3 = new QLabel(tab_11);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(400, 60, 421, 271));
        label_14 = new QLabel(tab_11);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(-20, -20, 991, 511));
        label_14->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/bac.png")));
        photoTrajet = new QLabel(tab_11);
        photoTrajet->setObjectName(QStringLiteral("photoTrajet"));
        photoTrajet->setGeometry(QRect(360, 30, 551, 311));
        tabWidget_3->addTab(tab_11, QString());
        label_14->raise();
        groupBox_6->raise();
        label_3->raise();
        photoTrajet->raise();
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        label_31 = new QLabel(tab_12);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(60, 60, 121, 31));
        le_mdp = new QLineEdit(tab_12);
        le_mdp->setObjectName(QStringLiteral("le_mdp"));
        le_mdp->setGeometry(QRect(210, 140, 191, 31));
        le_mdp->setStyleSheet(QLatin1String("border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgb(65, 66, 71);"));
        le_nom_2 = new QLineEdit(tab_12);
        le_nom_2->setObjectName(QStringLiteral("le_nom_2"));
        le_nom_2->setGeometry(QRect(150, 100, 191, 31));
        le_nom_2->setStyleSheet(QLatin1String("border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgb(65, 66, 71);"));
        le_objet = new QLineEdit(tab_12);
        le_objet->setObjectName(QStringLiteral("le_objet"));
        le_objet->setGeometry(QRect(330, 220, 191, 31));
        le_objet->setStyleSheet(QLatin1String("border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgb(65, 66, 71);"));
        le_recla = new QLineEdit(tab_12);
        le_recla->setObjectName(QStringLiteral("le_recla"));
        le_recla->setGeometry(QRect(360, 260, 471, 121));
        le_recla->setStyleSheet(QLatin1String("border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgb(65, 66, 71);"));
        sendBtn = new QPushButton(tab_12);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(190, 370, 131, 51));
        label_15 = new QLabel(tab_12);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(-10, -30, 1181, 501));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/bac.png")));
        lineEdit_smtp = new QLineEdit(tab_12);
        lineEdit_smtp->setObjectName(QStringLiteral("lineEdit_smtp"));
        lineEdit_smtp->setGeometry(QRect(20, 20, 181, 31));
        lineEdit_smtp->setStyleSheet(QLatin1String("border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgb(65, 66, 71);"));
        lineEdit_465 = new QLineEdit(tab_12);
        lineEdit_465->setObjectName(QStringLiteral("lineEdit_465"));
        lineEdit_465->setGeometry(QRect(90, 60, 181, 31));
        lineEdit_465->setStyleSheet(QLatin1String("border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgb(65, 66, 71);"));
        le_receveur = new QLineEdit(tab_12);
        le_receveur->setObjectName(QStringLiteral("le_receveur"));
        le_receveur->setGeometry(QRect(260, 180, 191, 31));
        le_receveur->setStyleSheet(QLatin1String("border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgb(65, 66, 71);"));
        exitBtn = new QPushButton(tab_12);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(20, 370, 131, 51));
        tabWidget_3->addTab(tab_12, QString());
        label_15->raise();
        label_31->raise();
        le_mdp->raise();
        le_nom_2->raise();
        le_objet->raise();
        le_recla->raise();
        sendBtn->raise();
        lineEdit_smtp->raise();
        lineEdit_465->raise();
        le_receveur->raise();
        exitBtn->raise();
        tabWidget_2->addTab(tab_4, QString());

        retranslateUi(Dialog);

        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "plaque du Bus ", Q_NULLPTR));
        label_10->setText(QApplication::translate("Dialog", "ID bus", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("Dialog", "Ajouter", Q_NULLPTR));
        label_11->setText(QApplication::translate("Dialog", "capacit\303\251", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "ligne", Q_NULLPTR));
        label_7->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("Dialog", "ajouter Bus ", Q_NULLPTR));
        label_8->setText(QString());
        pb_afficher->setText(QApplication::translate("Dialog", "afficher", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("Dialog", "afficher Bus", Q_NULLPTR));
        label_23->setText(QApplication::translate("Dialog", "plaque du Bus ", Q_NULLPTR));
        label_26->setText(QApplication::translate("Dialog", "ligne", Q_NULLPTR));
        label_27->setText(QApplication::translate("Dialog", "ID bus ", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("Dialog", "Modifier ", Q_NULLPTR));
        label_22->setText(QApplication::translate("Dialog", "capacit\303\251", Q_NULLPTR));
        label_9->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("Dialog", "modifier Bus", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Dialog", "saisir Bus ", Q_NULLPTR));
        label_40->setText(QApplication::translate("Dialog", "N\302\260 du Bus", Q_NULLPTR));
        label_41->setText(QApplication::translate("Dialog", "plaque du Bus ", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("Dialog", "supprimer", Q_NULLPTR));
        label_12->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("Dialog", "supprimer Bus ", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Dialog", "saisir Bus", Q_NULLPTR));
        label_18->setText(QApplication::translate("Dialog", "N\302\260 Bus", Q_NULLPTR));
        label_19->setText(QApplication::translate("Dialog", "plaque du Bus ", Q_NULLPTR));
        pb_AccFexel->setText(QApplication::translate("Dialog", "acceder", Q_NULLPTR));
        label_16->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_9), QApplication::translate("Dialog", "horaire Bus", Q_NULLPTR));
        label_20->setText(QString());
        recherche->setTitle(QApplication::translate("Dialog", "saisir Bus ", Q_NULLPTR));
        label_21->setText(QApplication::translate("Dialog", "ligne ", Q_NULLPTR));
        pb_recherche->setText(QApplication::translate("Dialog", "rechercher", Q_NULLPTR));
        pb_trier->setText(QApplication::translate("Dialog", "N\302\260 Bus  ", Q_NULLPTR));
        label_13->setText(QString());
        pb_trierP->setText(QApplication::translate("Dialog", "PlaqueB", Q_NULLPTR));
        label_39->setText(QApplication::translate("Dialog", "ID", Q_NULLPTR));
        pb_rechercheID->setText(QApplication::translate("Dialog", "recherche", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QApplication::translate("Dialog", "rechercher Bus ", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("Dialog", "saisir Bus ", Q_NULLPTR));
        label_29->setText(QApplication::translate("Dialog", "ligne de Bus", Q_NULLPTR));
        label_30->setText(QApplication::translate("Dialog", "chemin", Q_NULLPTR));
        pb_afficherTr->setText(QApplication::translate("Dialog", "afficher", Q_NULLPTR));
        pb_imp->setText(QApplication::translate("Dialog", "Imprimer", Q_NULLPTR));
        label_3->setText(QString());
        label_14->setText(QString());
        photoTrajet->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QApplication::translate("Dialog", "afficher trajet", Q_NULLPTR));
        label_31->setText(QString());
        le_mdp->setText(QApplication::translate("Dialog", "123esprit*", Q_NULLPTR));
        le_nom_2->setText(QApplication::translate("Dialog", "2a21groupe5@gmail.com", Q_NULLPTR));
        le_objet->setText(QApplication::translate("Dialog", "objet", Q_NULLPTR));
        le_recla->setText(QApplication::translate("Dialog", "reclamation", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("Dialog", "passer", Q_NULLPTR));
        label_15->setText(QString());
        lineEdit_smtp->setText(QApplication::translate("Dialog", "smtp.gmail.com", Q_NULLPTR));
        lineEdit_465->setText(QApplication::translate("Dialog", "465", Q_NULLPTR));
        le_receveur->setText(QApplication::translate("Dialog", "receveur", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("Dialog", "retour", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_12), QApplication::translate("Dialog", "passer reclamation", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("Dialog", "gestion des Bus", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
