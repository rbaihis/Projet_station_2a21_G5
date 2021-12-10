/********************************************************************************
** Form generated from reading UI file 'arduinomaq.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARDUINOMAQ_H
#define UI_ARDUINOMAQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_arduinomaq
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *arduinomaq)
    {
        if (arduinomaq->objectName().isEmpty())
            arduinomaq->setObjectName(QStringLiteral("arduinomaq"));
        arduinomaq->resize(400, 300);
        pushButton = new QPushButton(arduinomaq);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 60, 75, 23));
        pushButton_2 = new QPushButton(arduinomaq);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 60, 75, 23));
        label = new QLabel(arduinomaq);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 100, 47, 14));
        label_2 = new QLabel(arduinomaq);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 100, 47, 14));
        label_3 = new QLabel(arduinomaq);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 60, 47, 14));

        retranslateUi(arduinomaq);

        QMetaObject::connectSlotsByName(arduinomaq);
    } // setupUi

    void retranslateUi(QDialog *arduinomaq)
    {
        arduinomaq->setWindowTitle(QApplication::translate("arduinomaq", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("arduinomaq", "ON", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("arduinomaq", "OFF", Q_NULLPTR));
        label->setText(QApplication::translate("arduinomaq", "ETAT", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("arduinomaq", "BUZZER", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class arduinomaq: public Ui_arduinomaq {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARDUINOMAQ_H
