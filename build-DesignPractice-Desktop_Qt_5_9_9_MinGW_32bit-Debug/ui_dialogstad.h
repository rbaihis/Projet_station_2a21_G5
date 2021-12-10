/********************************************************************************
** Form generated from reading UI file 'dialogstad.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSTAD_H
#define UI_DIALOGSTAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DialogSTAD
{
public:
    QFrame *Frame;

    void setupUi(QDialog *DialogSTAD)
    {
        if (DialogSTAD->objectName().isEmpty())
            DialogSTAD->setObjectName(QStringLiteral("DialogSTAD"));
        DialogSTAD->resize(1100, 594);
        Frame = new QFrame(DialogSTAD);
        Frame->setObjectName(QStringLiteral("Frame"));
        Frame->setGeometry(QRect(80, 40, 921, 501));
        Frame->setFrameShape(QFrame::StyledPanel);
        Frame->setFrameShadow(QFrame::Raised);

        retranslateUi(DialogSTAD);

        QMetaObject::connectSlotsByName(DialogSTAD);
    } // setupUi

    void retranslateUi(QDialog *DialogSTAD)
    {
        DialogSTAD->setWindowTitle(QApplication::translate("DialogSTAD", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogSTAD: public Ui_DialogSTAD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSTAD_H
