/********************************************************************************
** Form generated from reading UI file 'dialogabonne.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGABONNE_H
#define UI_DIALOGABONNE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogabonne
{
public:
    QGroupBox *groupBox;
    QTabWidget *tabWidget_2;
    QWidget *tab_5;
    QTabWidget *tabWidget;
    QWidget *client;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QGroupBox *groupBox_2;
    QLineEdit *le_id;
    QLineEdit *le_nom;
    QLineEdit *le_prenom;
    QPushButton *pb_ajouter;
    QLineEdit *le_age;
    QPushButton *le_Modifier;
    QComboBox *le_sexe;
    QLabel *label_2;
    QLabel *label;
    QComboBox *les_region;
    QWidget *tab_7;
    QTableView *tab_client;
    QLineEdit *le_recherche_client;
    QComboBox *cb_tri_client;
    QPushButton *pushButton;
    QLabel *QRCODE_3;
    QWidget *tab_2;
    QLineEdit *le_id_sup;
    QPushButton *pb_supprimer;
    QWidget *tab_12;
    QTabWidget *tabWidget_4;
    QWidget *tab_13;
    QPushButton *pb_ajouter_2;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *le_modifier_2;
    QLineEdit *le_id_2;
    QDateEdit *le_date_deb;
    QDateEdit *le_date_fin;
    QLabel *label_3;
    QWidget *tab_14;
    QTableView *tab_etudiant_2;
    QWidget *tab_15;
    QLineEdit *le_id_sup_2;
    QPushButton *pb_supprimer_2;
    QWidget *tab_9;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb_stat_age;
    QFrame *horizontalFrame_3;
    QHBoxLayout *horizontalLayout_3;
    QWidget *tab_3;
    QTextBrowser *textBrowser;
    QPushButton *CLEAR;
    QWidget *tab_10;
    QDialogButtonBox *buttonBox;
    QWidget *tab;
    QPushButton *pb_excel;
    QLabel *label_4;

    void setupUi(QDialog *Dialogabonne)
    {
        if (Dialogabonne->objectName().isEmpty())
            Dialogabonne->setObjectName(QStringLiteral("Dialogabonne"));
        Dialogabonne->resize(1000, 637);
        groupBox = new QGroupBox(Dialogabonne);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 981, 601));
        QFont font;
        font.setFamily(QStringLiteral("Georgia"));
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(75);
        groupBox->setFont(font);
        tabWidget_2 = new QTabWidget(groupBox);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 20, 981, 611));
        tabWidget_2->setStyleSheet(QLatin1String("background-color: rgb(0, 186, 186);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 132, 150, 255), stop:1 rgba(255, 255, 255, 255));"));
        tabWidget_2->setElideMode(Qt::ElideMiddle);
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget = new QTabWidget(tab_5);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 1091, 571));
        tabWidget->setTabBarAutoHide(true);
        client = new QWidget();
        client->setObjectName(QStringLiteral("client"));
        tabWidget_3 = new QTabWidget(client);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(-10, 0, 1081, 521));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        groupBox_2 = new QGroupBox(tab_6);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 1081, 581));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        le_id = new QLineEdit(groupBox_2);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(30, 30, 171, 31));
        le_id->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 127);\n"
"background-color: rgb(216, 193, 255);"));
        le_nom = new QLineEdit(groupBox_2);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(30, 80, 171, 31));
        le_nom->setStyleSheet(QStringLiteral("background-color: rgb(216, 193, 255);"));
        le_prenom = new QLineEdit(groupBox_2);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(30, 140, 171, 31));
        le_prenom->setStyleSheet(QLatin1String("background-color: rgb(216, 193, 255);\n"
""));
        pb_ajouter = new QPushButton(groupBox_2);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(360, 70, 131, 31));
        pb_ajouter->setCursor(QCursor(Qt::ArrowCursor));
        pb_ajouter->setTabletTracking(true);
        pb_ajouter->setStyleSheet(QStringLiteral(""));
        le_age = new QLineEdit(groupBox_2);
        le_age->setObjectName(QStringLiteral("le_age"));
        le_age->setGeometry(QRect(30, 190, 171, 31));
        le_age->setStyleSheet(QStringLiteral("background-color: rgb(216, 193, 255);"));
        le_Modifier = new QPushButton(groupBox_2);
        le_Modifier->setObjectName(QStringLiteral("le_Modifier"));
        le_Modifier->setGeometry(QRect(360, 150, 131, 31));
        le_sexe = new QComboBox(groupBox_2);
        le_sexe->setObjectName(QStringLiteral("le_sexe"));
        le_sexe->setGeometry(QRect(110, 320, 121, 22));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 320, 56, 16));
        label_2->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.523091, x2:1, y2:0, stop:0.0882353 rgba(146, 90, 185, 255), stop:1 rgba(255, 255, 255, 255));"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 270, 61, 20));
        label->setContextMenuPolicy(Qt::DefaultContextMenu);
        label->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0.523091, x2:1, y2:0, stop:0.0882353 rgba(146, 90, 185, 255), stop:1 rgba(255, 255, 255, 255));"));
        les_region = new QComboBox(groupBox_2);
        les_region->setObjectName(QStringLiteral("les_region"));
        les_region->setGeometry(QRect(110, 270, 121, 22));
        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tab_client = new QTableView(tab_7);
        tab_client->setObjectName(QStringLiteral("tab_client"));
        tab_client->setGeometry(QRect(20, 40, 651, 371));
        le_recherche_client = new QLineEdit(tab_7);
        le_recherche_client->setObjectName(QStringLiteral("le_recherche_client"));
        le_recherche_client->setGeometry(QRect(220, 10, 113, 20));
        cb_tri_client = new QComboBox(tab_7);
        cb_tri_client->setObjectName(QStringLiteral("cb_tri_client"));
        cb_tri_client->setGeometry(QRect(80, 10, 62, 22));
        pushButton = new QPushButton(tab_7);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(700, 270, 75, 23));
        QRCODE_3 = new QLabel(tab_7);
        QRCODE_3->setObjectName(QStringLiteral("QRCODE_3"));
        QRCODE_3->setGeometry(QRect(680, 110, 101, 131));
        tabWidget_3->addTab(tab_7, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        le_id_sup = new QLineEdit(tab_2);
        le_id_sup->setObjectName(QStringLiteral("le_id_sup"));
        le_id_sup->setGeometry(QRect(100, 69, 191, 31));
        pb_supprimer = new QPushButton(tab_2);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(160, 130, 75, 23));
        tabWidget_3->addTab(tab_2, QString());
        tabWidget->addTab(client, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        tabWidget_4 = new QTabWidget(tab_12);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(0, 0, 1061, 511));
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        pb_ajouter_2 = new QPushButton(tab_13);
        pb_ajouter_2->setObjectName(QStringLiteral("pb_ajouter_2"));
        pb_ajouter_2->setGeometry(QRect(350, 110, 93, 28));
        label_9 = new QLabel(tab_13);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 140, 71, 16));
        label_9->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(49, 149, 149, 255), stop:1 rgba(61, 61, 61, 255));"));
        label_9->setTextFormat(Qt::AutoText);
        label_10 = new QLabel(tab_13);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 210, 56, 16));
        label_10->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(49, 149, 149, 255), stop:1 rgba(61, 61, 61, 255));"));
        le_modifier_2 = new QPushButton(tab_13);
        le_modifier_2->setObjectName(QStringLiteral("le_modifier_2"));
        le_modifier_2->setGeometry(QRect(350, 180, 93, 28));
        le_id_2 = new QLineEdit(tab_13);
        le_id_2->setObjectName(QStringLiteral("le_id_2"));
        le_id_2->setGeometry(QRect(110, 80, 111, 21));
        le_date_deb = new QDateEdit(tab_13);
        le_date_deb->setObjectName(QStringLiteral("le_date_deb"));
        le_date_deb->setGeometry(QRect(110, 140, 110, 22));
        le_date_fin = new QDateEdit(tab_13);
        le_date_fin->setObjectName(QStringLiteral("le_date_fin"));
        le_date_fin->setGeometry(QRect(110, 210, 110, 22));
        label_3 = new QLabel(tab_13);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 80, 56, 16));
        label_3->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(49, 149, 149, 255), stop:1 rgba(61, 61, 61, 255));"));
        tabWidget_4->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        tab_etudiant_2 = new QTableView(tab_14);
        tab_etudiant_2->setObjectName(QStringLiteral("tab_etudiant_2"));
        tab_etudiant_2->setGeometry(QRect(0, 0, 1061, 621));
        tabWidget_4->addTab(tab_14, QString());
        tab_15 = new QWidget();
        tab_15->setObjectName(QStringLiteral("tab_15"));
        le_id_sup_2 = new QLineEdit(tab_15);
        le_id_sup_2->setObjectName(QStringLiteral("le_id_sup_2"));
        le_id_sup_2->setGeometry(QRect(70, 70, 151, 20));
        pb_supprimer_2 = new QPushButton(tab_15);
        pb_supprimer_2->setObjectName(QStringLiteral("pb_supprimer_2"));
        pb_supprimer_2->setGeometry(QRect(70, 100, 75, 23));
        tabWidget_4->addTab(tab_15, QString());
        tabWidget->addTab(tab_12, QString());
        tabWidget_2->addTab(tab_5, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        horizontalFrame = new QFrame(tab_9);
        horizontalFrame->setObjectName(QStringLiteral("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(20, 70, 391, 400));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pb_stat_age = new QPushButton(horizontalFrame);
        pb_stat_age->setObjectName(QStringLiteral("pb_stat_age"));

        horizontalLayout->addWidget(pb_stat_age);

        horizontalFrame_3 = new QFrame(tab_9);
        horizontalFrame_3->setObjectName(QStringLiteral("horizontalFrame_3"));
        horizontalFrame_3->setGeometry(QRect(440, 70, 391, 400));
        horizontalLayout_3 = new QHBoxLayout(horizontalFrame_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tabWidget_2->addTab(tab_9, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        textBrowser = new QTextBrowser(tab_3);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 20, 721, 351));
        CLEAR = new QPushButton(tab_3);
        CLEAR->setObjectName(QStringLiteral("CLEAR"));
        CLEAR->setGeometry(QRect(310, 390, 75, 23));
        tabWidget_2->addTab(tab_3, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        buttonBox = new QDialogButtonBox(tab_10);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(280, 270, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabWidget_2->addTab(tab_10, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pb_excel = new QPushButton(tab);
        pb_excel->setObjectName(QStringLiteral("pb_excel"));
        pb_excel->setGeometry(QRect(0, 30, 100, 30));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0, 0, 1, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(0, 132, 150, 255));
        gradient.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 255, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(63, 255, 63, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 127, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 170, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient1(0, 0, 1, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(0, 132, 150, 255));
        gradient1.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush7(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        QLinearGradient gradient2(0, 0, 1, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(0, 132, 150, 255));
        gradient2.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush8(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush10(QColor(0, 0, 0, 128));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0, 0, 1, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(0, 132, 150, 255));
        gradient3.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush11(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(0, 0, 1, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(0, 132, 150, 255));
        gradient4.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush12(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        QLinearGradient gradient5(0, 0, 1, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(0, 132, 150, 255));
        gradient5.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush13(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        QLinearGradient gradient6(0, 0, 1, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(0, 132, 150, 255));
        gradient6.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush14(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        QLinearGradient gradient7(0, 0, 1, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(0, 132, 150, 255));
        gradient7.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush15(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush15);
        QLinearGradient gradient8(0, 0, 1, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(0, 132, 150, 255));
        gradient8.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush16(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush16);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush17(QColor(0, 255, 0, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        pb_excel->setPalette(palette);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 100, 30));
        label_4->setContextMenuPolicy(Qt::CustomContextMenu);
        label_4->setStyleSheet(QLatin1String("border-right-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(37, 255, 51, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(85, 255, 127);"));
        tabWidget_2->addTab(tab, QString());

        retranslateUi(Dialogabonne);

        tabWidget_2->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(1);
        tabWidget_4->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialogabonne);
    } // setupUi

    void retranslateUi(QDialog *Dialogabonne)
    {
        Dialogabonne->setWindowTitle(QApplication::translate("Dialogabonne", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Dialogabonne", "Gestion des Abonnements", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Dialogabonne", "Ajout", Q_NULLPTR));
        le_id->setPlaceholderText(QApplication::translate("Dialogabonne", "Id", Q_NULLPTR));
        le_nom->setPlaceholderText(QApplication::translate("Dialogabonne", "Nom", Q_NULLPTR));
        le_prenom->setPlaceholderText(QApplication::translate("Dialogabonne", "Prenom", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("Dialogabonne", "Ajouter", Q_NULLPTR));
        le_age->setText(QString());
        le_age->setPlaceholderText(QApplication::translate("Dialogabonne", "age", Q_NULLPTR));
        le_Modifier->setText(QApplication::translate("Dialogabonne", "Modifier", Q_NULLPTR));
        le_sexe->clear();
        le_sexe->insertItems(0, QStringList()
         << QApplication::translate("Dialogabonne", "choisir sexe", Q_NULLPTR)
         << QApplication::translate("Dialogabonne", "male", Q_NULLPTR)
         << QApplication::translate("Dialogabonne", "femelle", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("Dialogabonne", "Sexe   :", Q_NULLPTR));
        label->setText(QApplication::translate("Dialogabonne", "region :", Q_NULLPTR));
        les_region->clear();
        les_region->insertItems(0, QStringList()
         << QApplication::translate("Dialogabonne", "choisir region", Q_NULLPTR)
         << QApplication::translate("Dialogabonne", "Nord-Est", Q_NULLPTR)
         << QApplication::translate("Dialogabonne", "Nord-Ouest", Q_NULLPTR)
         << QApplication::translate("Dialogabonne", "Centre-Est", Q_NULLPTR)
         << QApplication::translate("Dialogabonne", "Centre-Ouest", Q_NULLPTR)
         << QApplication::translate("Dialogabonne", "Sud-Est", Q_NULLPTR)
         << QApplication::translate("Dialogabonne", "Sud-Ouest", Q_NULLPTR)
        );
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("Dialogabonne", "Ajouter", Q_NULLPTR));
        cb_tri_client->clear();
        cb_tri_client->insertItems(0, QStringList()
         << QApplication::translate("Dialogabonne", "Tri par:", Q_NULLPTR)
         << QApplication::translate("Dialogabonne", "Identifiant", Q_NULLPTR)
         << QApplication::translate("Dialogabonne", "Age", Q_NULLPTR)
         << QApplication::translate("Dialogabonne", "Sexe", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("Dialogabonne", "QR", Q_NULLPTR));
        QRCODE_3->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("Dialogabonne", "Affichier", Q_NULLPTR));
        le_id_sup->setInputMask(QString());
        le_id_sup->setText(QString());
        le_id_sup->setPlaceholderText(QApplication::translate("Dialogabonne", "Identifiant", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("Dialogabonne", "Supprimer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_2), QApplication::translate("Dialogabonne", "Supprimer ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(client), QApplication::translate("Dialogabonne", "client", Q_NULLPTR));
        pb_ajouter_2->setText(QApplication::translate("Dialogabonne", "Ajouter", Q_NULLPTR));
        label_9->setText(QApplication::translate("Dialogabonne", "Date Debut", Q_NULLPTR));
        label_10->setText(QApplication::translate("Dialogabonne", "Date Fin", Q_NULLPTR));
        le_modifier_2->setText(QApplication::translate("Dialogabonne", "Modifier", Q_NULLPTR));
        le_id_2->setText(QString());
        le_id_2->setPlaceholderText(QString());
        label_3->setText(QApplication::translate("Dialogabonne", "Id", Q_NULLPTR));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_13), QApplication::translate("Dialogabonne", "Ajouter", Q_NULLPTR));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_14), QApplication::translate("Dialogabonne", "Afficher", Q_NULLPTR));
        le_id_sup_2->setPlaceholderText(QApplication::translate("Dialogabonne", "Identifiant", Q_NULLPTR));
        pb_supprimer_2->setText(QApplication::translate("Dialogabonne", "Supprimer", Q_NULLPTR));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_15), QApplication::translate("Dialogabonne", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_12), QApplication::translate("Dialogabonne", "Abonnement", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("Dialogabonne", "gestion basic", Q_NULLPTR));
        pb_stat_age->setText(QApplication::translate("Dialogabonne", "Selon l'Age", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QApplication::translate("Dialogabonne", "Statistiques", Q_NULLPTR));
        CLEAR->setText(QApplication::translate("Dialogabonne", "Clear", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("Dialogabonne", "History", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QApplication::translate("Dialogabonne", "warningexpir", Q_NULLPTR));
        pb_excel->setText(QApplication::translate("Dialogabonne", "EXCEL", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialogabonne", "creation d'un fichier excel ", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QApplication::translate("Dialogabonne", "Excel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialogabonne: public Ui_Dialogabonne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGABONNE_H
