/********************************************************************************
** Form generated from reading UI file 'dialogrec.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGREC_H
#define UI_DIALOGREC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DialogREC
{
public:
    QFrame *Frame2;

    void setupUi(QDialog *DialogREC)
    {
        if (DialogREC->objectName().isEmpty())
            DialogREC->setObjectName(QStringLiteral("DialogREC"));
        DialogREC->resize(838, 580);
        Frame2 = new QFrame(DialogREC);
        Frame2->setObjectName(QStringLiteral("Frame2"));
        Frame2->setGeometry(QRect(50, 40, 711, 511));
        Frame2->setFrameShape(QFrame::StyledPanel);
        Frame2->setFrameShadow(QFrame::Raised);

        retranslateUi(DialogREC);

        QMetaObject::connectSlotsByName(DialogREC);
    } // setupUi

    void retranslateUi(QDialog *DialogREC)
    {
        DialogREC->setWindowTitle(QApplication::translate("DialogREC", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogREC: public Ui_DialogREC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGREC_H
