/********************************************************************************
** Form generated from reading UI file 'dialogreclamation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRECLAMATION_H
#define UI_DIALOGRECLAMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogReclamation
{
public:
    QTabWidget *Trier;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *le_nom;
    QLineEdit *le_prenom;
    QLineEdit *le_cin;
    QLineEdit *le_num_telephone;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QLabel *label_6;
    QLineEdit *le_numstation;
    QLabel *label_7;
    QLabel *label_11;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *le_numbus;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *le_type_reclamation;
    QLabel *label_16;
    QPushButton *pb_ajouter;
    QWidget *tab2;
    QGroupBox *groupBox_2;
    QTableView *tab_reclamation;
    QPushButton *pb_arduino;
    QWidget *tab_2;
    QLabel *label_17;
    QLineEdit *le_Cin;
    QPushButton *pb_supprimer;
    QLabel *label_31;
    QWidget *tab3;
    QGroupBox *pushButton_modifier_2;
    QLabel *label_18;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLineEdit *modifier_Nom;
    QLineEdit *modifier_Cin;
    QLineEdit *modifier_numBus;
    QLineEdit *modifier_Type_reclamation;
    QLineEdit *modifier_Prenom;
    QLineEdit *modifier_Num_Telephone;
    QLineEdit *modifier_numStation;
    QLabel *label_19;
    QPushButton *pushButton_modifier;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QWidget *tab_3;
    QPushButton *Generer_PDF;
    QLineEdit *id_pdf;
    QLabel *label_32;
    QWidget *tab_4;
    QPushButton *pb_recherche;
    QLineEdit *id_search;
    QLabel *label_33;
    QTableView *tab_search;
    QLabel *label_34;
    QRadioButton *radioButton_trier_reclamation_AZ;
    QRadioButton *radioButton_trier_reclamation_ZA;
    QPushButton *pb_tri;
    QComboBox *comboBox_tri_reclamation;
    QPushButton *pb_stat;
    QWidget *tab_5;
    QTableView *rh_table;
    QTableView *ticket_table;
    QTableView *bus_table;
    QTableView *station_table;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;

    void setupUi(QDialog *DialogReclamation)
    {
        if (DialogReclamation->objectName().isEmpty())
            DialogReclamation->setObjectName(QStringLiteral("DialogReclamation"));
        DialogReclamation->resize(838, 542);
        Trier = new QTabWidget(DialogReclamation);
        Trier->setObjectName(QStringLiteral("Trier"));
        Trier->setGeometry(QRect(40, 20, 711, 471));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 10, 661, 421));
        groupBox->setStyleSheet(QStringLiteral(""));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 70, 61, 41));
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 90, 71, 16));
        label_2->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 130, 51, 16));
        label_3->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(340, 130, 141, 21));
        label_4->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 190, 111, 20));
        le_nom = new QLineEdit(groupBox);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(120, 80, 113, 31));
        le_prenom = new QLineEdit(groupBox);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(470, 80, 113, 31));
        le_cin = new QLineEdit(groupBox);
        le_cin->setObjectName(QStringLiteral("le_cin"));
        le_cin->setGeometry(QRect(120, 120, 113, 31));
        le_num_telephone = new QLineEdit(groupBox);
        le_num_telephone->setObjectName(QStringLiteral("le_num_telephone"));
        le_num_telephone->setGeometry(QRect(470, 120, 113, 31));
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 30, 181, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(430, 30, 211, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(groupBox);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(630, 40, 20, 371));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(groupBox);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(17, 400, 621, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(groupBox);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(10, 40, 20, 371));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(230, 30, 181, 20));
        label_6->setStyleSheet(QLatin1String("font: 12pt \"Old Antic Outline\";\n"
"color: rgb(84, 105, 127);"));
        le_numstation = new QLineEdit(groupBox);
        le_numstation->setObjectName(QStringLiteral("le_numstation"));
        le_numstation->setGeometry(QRect(470, 170, 111, 31));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 290, 81, 16));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(130, 280, 47, 14));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 170, 81, 21));
        label_8->setStyleSheet(QStringLiteral(""));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(340, 180, 101, 21));
        label_9->setStyleSheet(QStringLiteral(""));
        le_numbus = new QLineEdit(groupBox);
        le_numbus->setObjectName(QStringLiteral("le_numbus"));
        le_numbus->setGeometry(QRect(120, 170, 113, 31));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(240, 215, 161, 21));
        label_10->setStyleSheet(QLatin1String("font: 12pt \"Old Antic Outline\";\n"
"color: rgb(84, 105, 127);"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(50, 250, 181, 20));
        label_12->setStyleSheet(QStringLiteral(""));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(230, 250, 81, 21));
        label_13->setStyleSheet(QStringLiteral(""));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(310, 250, 61, 21));
        label_14->setStyleSheet(QStringLiteral(""));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(380, 250, 71, 21));
        label_15->setStyleSheet(QStringLiteral(""));
        le_type_reclamation = new QLineEdit(groupBox);
        le_type_reclamation->setObjectName(QStringLiteral("le_type_reclamation"));
        le_type_reclamation->setGeometry(QRect(50, 280, 541, 71));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(470, 250, 71, 21));
        label_16->setStyleSheet(QStringLiteral(""));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(520, 370, 75, 23));
        Trier->addTab(tab, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QStringLiteral("tab2"));
        groupBox_2 = new QGroupBox(tab2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 10, 671, 421));
        tab_reclamation = new QTableView(groupBox_2);
        tab_reclamation->setObjectName(QStringLiteral("tab_reclamation"));
        tab_reclamation->setGeometry(QRect(40, 80, 591, 321));
        pb_arduino = new QPushButton(groupBox_2);
        pb_arduino->setObjectName(QStringLiteral("pb_arduino"));
        pb_arduino->setGeometry(QRect(270, 30, 91, 31));
        Trier->addTab(tab2, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(300, 90, 47, 14));
        le_Cin = new QLineEdit(tab_2);
        le_Cin->setObjectName(QStringLiteral("le_Cin"));
        le_Cin->setGeometry(QRect(30, 130, 631, 31));
        pb_supprimer = new QPushButton(tab_2);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(590, 190, 75, 23));
        label_31 = new QLabel(tab_2);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(10, -150, 47, 14));
        Trier->addTab(tab_2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QStringLiteral("tab3"));
        pushButton_modifier_2 = new QGroupBox(tab3);
        pushButton_modifier_2->setObjectName(QStringLiteral("pushButton_modifier_2"));
        pushButton_modifier_2->setGeometry(QRect(20, 10, 691, 431));
        label_18 = new QLabel(pushButton_modifier_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(50, 60, 51, 16));
        label_18->setStyleSheet(QStringLiteral(""));
        label_20 = new QLabel(pushButton_modifier_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(46, 173, 71, 21));
        label_20->setStyleSheet(QStringLiteral(""));
        label_21 = new QLabel(pushButton_modifier_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(340, 60, 71, 20));
        label_21->setStyleSheet(QStringLiteral(""));
        label_22 = new QLabel(pushButton_modifier_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(340, 109, 131, 31));
        label_22->setStyleSheet(QStringLiteral(""));
        label_23 = new QLabel(pushButton_modifier_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(340, 180, 91, 20));
        label_23->setStyleSheet(QStringLiteral(""));
        label_24 = new QLabel(pushButton_modifier_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(250, 230, 201, 20));
        label_24->setStyleSheet(QLatin1String("font: 12pt \"Old Antic Outline\";\n"
"color: rgb(84, 105, 127);"));
        modifier_Nom = new QLineEdit(pushButton_modifier_2);
        modifier_Nom->setObjectName(QStringLiteral("modifier_Nom"));
        modifier_Nom->setGeometry(QRect(130, 50, 113, 31));
        modifier_Cin = new QLineEdit(pushButton_modifier_2);
        modifier_Cin->setObjectName(QStringLiteral("modifier_Cin"));
        modifier_Cin->setGeometry(QRect(130, 110, 113, 31));
        modifier_numBus = new QLineEdit(pushButton_modifier_2);
        modifier_numBus->setObjectName(QStringLiteral("modifier_numBus"));
        modifier_numBus->setGeometry(QRect(130, 170, 113, 31));
        modifier_Type_reclamation = new QLineEdit(pushButton_modifier_2);
        modifier_Type_reclamation->setObjectName(QStringLiteral("modifier_Type_reclamation"));
        modifier_Type_reclamation->setGeometry(QRect(60, 300, 561, 81));
        modifier_Prenom = new QLineEdit(pushButton_modifier_2);
        modifier_Prenom->setObjectName(QStringLiteral("modifier_Prenom"));
        modifier_Prenom->setGeometry(QRect(480, 50, 113, 31));
        modifier_Num_Telephone = new QLineEdit(pushButton_modifier_2);
        modifier_Num_Telephone->setObjectName(QStringLiteral("modifier_Num_Telephone"));
        modifier_Num_Telephone->setGeometry(QRect(480, 110, 113, 31));
        modifier_numStation = new QLineEdit(pushButton_modifier_2);
        modifier_numStation->setObjectName(QStringLiteral("modifier_numStation"));
        modifier_numStation->setGeometry(QRect(480, 170, 113, 31));
        label_19 = new QLabel(pushButton_modifier_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(50, 120, 51, 21));
        label_19->setStyleSheet(QStringLiteral(""));
        pushButton_modifier = new QPushButton(pushButton_modifier_2);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(570, 390, 75, 23));
        line_6 = new QFrame(pushButton_modifier_2);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(20, 9, 201, 41));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(pushButton_modifier_2);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(13, 30, 20, 381));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(pushButton_modifier_2);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(20, 410, 651, 16));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(pushButton_modifier_2);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(660, 30, 20, 391));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(pushButton_modifier_2);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(470, 15, 201, 31));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        label_25 = new QLabel(pushButton_modifier_2);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(260, 20, 191, 16));
        label_25->setStyleSheet(QLatin1String("font: 12pt \"Old Antic Outline\";\n"
"color: rgb(84, 105, 127);"));
        label_26 = new QLabel(pushButton_modifier_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(70, 270, 161, 16));
        label_26->setStyleSheet(QStringLiteral(""));
        label_27 = new QLabel(pushButton_modifier_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(250, 270, 71, 16));
        label_27->setStyleSheet(QStringLiteral(""));
        label_28 = new QLabel(pushButton_modifier_2);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(340, 270, 51, 20));
        label_28->setStyleSheet(QStringLiteral(""));
        label_29 = new QLabel(pushButton_modifier_2);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(430, 270, 71, 16));
        label_29->setStyleSheet(QStringLiteral(""));
        label_30 = new QLabel(pushButton_modifier_2);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(530, 270, 61, 20));
        label_30->setStyleSheet(QStringLiteral(""));
        Trier->addTab(tab3, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        Generer_PDF = new QPushButton(tab_3);
        Generer_PDF->setObjectName(QStringLiteral("Generer_PDF"));
        Generer_PDF->setGeometry(QRect(560, 170, 75, 23));
        id_pdf = new QLineEdit(tab_3);
        id_pdf->setObjectName(QStringLiteral("id_pdf"));
        id_pdf->setGeometry(QRect(50, 100, 591, 31));
        label_32 = new QLabel(tab_3);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(50, 30, 47, 14));
        Trier->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pb_recherche = new QPushButton(tab_4);
        pb_recherche->setObjectName(QStringLiteral("pb_recherche"));
        pb_recherche->setGeometry(QRect(180, 80, 75, 23));
        id_search = new QLineEdit(tab_4);
        id_search->setObjectName(QStringLiteral("id_search"));
        id_search->setGeometry(QRect(40, 50, 211, 21));
        label_33 = new QLabel(tab_4);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(40, 20, 151, 16));
        tab_search = new QTableView(tab_4);
        tab_search->setObjectName(QStringLiteral("tab_search"));
        tab_search->setGeometry(QRect(320, 30, 351, 192));
        label_34 = new QLabel(tab_4);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(50, 170, 47, 14));
        radioButton_trier_reclamation_AZ = new QRadioButton(tab_4);
        radioButton_trier_reclamation_AZ->setObjectName(QStringLiteral("radioButton_trier_reclamation_AZ"));
        radioButton_trier_reclamation_AZ->setGeometry(QRect(40, 190, 83, 18));
        radioButton_trier_reclamation_ZA = new QRadioButton(tab_4);
        radioButton_trier_reclamation_ZA->setObjectName(QStringLiteral("radioButton_trier_reclamation_ZA"));
        radioButton_trier_reclamation_ZA->setGeometry(QRect(40, 220, 83, 18));
        pb_tri = new QPushButton(tab_4);
        pb_tri->setObjectName(QStringLiteral("pb_tri"));
        pb_tri->setGeometry(QRect(180, 250, 75, 23));
        comboBox_tri_reclamation = new QComboBox(tab_4);
        comboBox_tri_reclamation->setObjectName(QStringLiteral("comboBox_tri_reclamation"));
        comboBox_tri_reclamation->setGeometry(QRect(351, 250, 301, 22));
        pb_stat = new QPushButton(tab_4);
        pb_stat->setObjectName(QStringLiteral("pb_stat"));
        pb_stat->setGeometry(QRect(580, 280, 75, 23));
        Trier->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        rh_table = new QTableView(tab_5);
        rh_table->setObjectName(QStringLiteral("rh_table"));
        rh_table->setGeometry(QRect(40, 20, 301, 192));
        ticket_table = new QTableView(tab_5);
        ticket_table->setObjectName(QStringLiteral("ticket_table"));
        ticket_table->setGeometry(QRect(360, 20, 331, 192));
        bus_table = new QTableView(tab_5);
        bus_table->setObjectName(QStringLiteral("bus_table"));
        bus_table->setGeometry(QRect(360, 240, 331, 192));
        station_table = new QTableView(tab_5);
        station_table->setObjectName(QStringLiteral("station_table"));
        station_table->setGeometry(QRect(40, 240, 301, 192));
        label_35 = new QLabel(tab_5);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(130, 0, 141, 16));
        label_36 = new QLabel(tab_5);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(510, 0, 47, 14));
        label_37 = new QLabel(tab_5);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(160, 220, 47, 14));
        label_38 = new QLabel(tab_5);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(510, 220, 47, 14));
        Trier->addTab(tab_5, QString());

        retranslateUi(DialogReclamation);

        Trier->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(DialogReclamation);
    } // setupUi

    void retranslateUi(QDialog *DialogReclamation)
    {
        DialogReclamation->setWindowTitle(QApplication::translate("DialogReclamation", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DialogReclamation", "Ajouter", Q_NULLPTR));
        label->setText(QApplication::translate("DialogReclamation", "Nom ", Q_NULLPTR));
        label_2->setText(QApplication::translate("DialogReclamation", "Pr\303\251nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("DialogReclamation", "Cin", Q_NULLPTR));
        label_4->setText(QApplication::translate("DialogReclamation", "Num T\303\251l\303\250phone", Q_NULLPTR));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("DialogReclamation", "Gestion Des Reclamations", Q_NULLPTR));
        label_7->setText(QString());
        label_11->setText(QString());
        label_8->setText(QApplication::translate("DialogReclamation", "Num Bus ", Q_NULLPTR));
        label_9->setText(QApplication::translate("DialogReclamation", "Num Station", Q_NULLPTR));
        label_10->setText(QApplication::translate("DialogReclamation", "Type de Reclamation :", Q_NULLPTR));
        label_12->setText(QApplication::translate("DialogReclamation", "1) Resources Humaine", Q_NULLPTR));
        label_13->setText(QApplication::translate("DialogReclamation", "2) Ticket", Q_NULLPTR));
        label_14->setText(QApplication::translate("DialogReclamation", "3) Bus", Q_NULLPTR));
        label_15->setText(QApplication::translate("DialogReclamation", "4) Station", Q_NULLPTR));
        label_16->setText(QApplication::translate("DialogReclamation", "5) Autres", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("DialogReclamation", "Ajouter", Q_NULLPTR));
        Trier->setTabText(Trier->indexOf(tab), QApplication::translate("DialogReclamation", "Ajouter Recalamation", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("DialogReclamation", "Afficher", Q_NULLPTR));
        pb_arduino->setText(QApplication::translate("DialogReclamation", "Arduino", Q_NULLPTR));
        Trier->setTabText(Trier->indexOf(tab2), QApplication::translate("DialogReclamation", "Afficher Reclamation", Q_NULLPTR));
        label_17->setText(QApplication::translate("DialogReclamation", "Cin", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("DialogReclamation", "Supprimer", Q_NULLPTR));
        label_31->setText(QApplication::translate("DialogReclamation", "Cin", Q_NULLPTR));
        Trier->setTabText(Trier->indexOf(tab_2), QApplication::translate("DialogReclamation", "Supprimer Reclamation", Q_NULLPTR));
        pushButton_modifier_2->setTitle(QApplication::translate("DialogReclamation", "Modifier", Q_NULLPTR));
        label_18->setText(QApplication::translate("DialogReclamation", "Nom", Q_NULLPTR));
        label_20->setText(QApplication::translate("DialogReclamation", "Num Bus", Q_NULLPTR));
        label_21->setText(QApplication::translate("DialogReclamation", "Pr\303\251nom", Q_NULLPTR));
        label_22->setText(QApplication::translate("DialogReclamation", "Num Telephone", Q_NULLPTR));
        label_23->setText(QApplication::translate("DialogReclamation", "Num Station", Q_NULLPTR));
        label_24->setText(QApplication::translate("DialogReclamation", "Type De  Reclamation : ", Q_NULLPTR));
        label_19->setText(QApplication::translate("DialogReclamation", "Cin", Q_NULLPTR));
        pushButton_modifier->setText(QApplication::translate("DialogReclamation", "Modifier", Q_NULLPTR));
        label_25->setText(QApplication::translate("DialogReclamation", "Gestion Des Reclamations", Q_NULLPTR));
        label_26->setText(QApplication::translate("DialogReclamation", "1) Resources Humaines", Q_NULLPTR));
        label_27->setText(QApplication::translate("DialogReclamation", "2)Ticket", Q_NULLPTR));
        label_28->setText(QApplication::translate("DialogReclamation", "3)Bus", Q_NULLPTR));
        label_29->setText(QApplication::translate("DialogReclamation", "4)Station", Q_NULLPTR));
        label_30->setText(QApplication::translate("DialogReclamation", "5)Autres", Q_NULLPTR));
        Trier->setTabText(Trier->indexOf(tab3), QApplication::translate("DialogReclamation", "Modifier Reclamation", Q_NULLPTR));
        Generer_PDF->setText(QApplication::translate("DialogReclamation", "Generer", Q_NULLPTR));
        label_32->setText(QApplication::translate("DialogReclamation", "Cin", Q_NULLPTR));
        Trier->setTabText(Trier->indexOf(tab_3), QApplication::translate("DialogReclamation", "Generer PDF Reclamation", Q_NULLPTR));
        pb_recherche->setText(QApplication::translate("DialogReclamation", "Chercher", Q_NULLPTR));
        label_33->setText(QApplication::translate("DialogReclamation", "Rechercher :", Q_NULLPTR));
        label_34->setText(QApplication::translate("DialogReclamation", "Trier :", Q_NULLPTR));
        radioButton_trier_reclamation_AZ->setText(QApplication::translate("DialogReclamation", "Ascendant", Q_NULLPTR));
        radioButton_trier_reclamation_ZA->setText(QApplication::translate("DialogReclamation", "Desendant", Q_NULLPTR));
        pb_tri->setText(QApplication::translate("DialogReclamation", "Trier", Q_NULLPTR));
        comboBox_tri_reclamation->clear();
        comboBox_tri_reclamation->insertItems(0, QStringList()
         << QApplication::translate("DialogReclamation", "Cin", Q_NULLPTR)
         << QApplication::translate("DialogReclamation", "Type_Reclamation ", Q_NULLPTR)
         << QApplication::translate("DialogReclamation", "Num_Telephone", Q_NULLPTR)
        );
        pb_stat->setText(QApplication::translate("DialogReclamation", "Statistique", Q_NULLPTR));
        Trier->setTabText(Trier->indexOf(tab_4), QApplication::translate("DialogReclamation", "Recherche et Tri", Q_NULLPTR));
        label_35->setText(QApplication::translate("DialogReclamation", "Resources Humaines", Q_NULLPTR));
        label_36->setText(QApplication::translate("DialogReclamation", "ticket", Q_NULLPTR));
        label_37->setText(QApplication::translate("DialogReclamation", "Station", Q_NULLPTR));
        label_38->setText(QApplication::translate("DialogReclamation", "Bus", Q_NULLPTR));
        Trier->setTabText(Trier->indexOf(tab_5), QApplication::translate("DialogReclamation", "Affecter Reclamation", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogReclamation: public Ui_DialogReclamation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRECLAMATION_H
