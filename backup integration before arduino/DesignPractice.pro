#CONFIG +=console
QT       += core gui sql printsupport
QT       += network
QT +=multimedia  multimediawidgets
QT += charts svg
QT += serialport


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11


# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dbconnexion.cpp \
    employee.cpp \
    main.cpp \
    MainWindowseif.cpp \
    smtpseif.cpp \
    Reclamation.cpp \
    abonnement.cpp \
    bus.cpp \
    client.cpp \
    dialog.cpp \
    dialogabonne.cpp \
    dialogrec.cpp \
    dialogreclamation.cpp \
    dialogstad.cpp \
    dialogstation.cpp \
    exporttoexcel.cpp \
    mainwindow.cpp \
    qrcode.cpp \
    qrcodegeneratordemo.cpp \
    qrcodegeneratorworker.cpp \
    qrwidget.cpp \
    smtp.cpp \
    station.cpp \
    maquette_yesmin.cpp


HEADERS += \
    dbconnexion.h \
    employee.h \
    MainWindowseif.h \
    smtpseif.h \
    Reclamation.h \
    abonnement.h \
    bus.h \
    client.h \
    dialog.h \
    dialogabonne.h \
    dialogrec.h \
    dialogreclamation.h \
    dialogstad.h \
    dialogstation.h \
    exporttoexcel.h \
    mainwindow.h \
    qrcode.h \
    qrwidget.h \
    rfid.cpp.autosave \
    rfid.h.autosave \
    smtp.h \
    station.h \
    maquette_yesmin.h

FORMS += \
    MainWindowseif.ui \
    dialog.ui \
    dialogabonne.ui \
    dialogrec.ui \
    dialogreclamation.ui \
    dialogstad.ui \
    dialogstation.ui \
    mainwindow.ui \
    maquette_yesmin.ui



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    SMTPEmail.pro \
    SMTPEmail.pro

#DISTFILES += \
#    Arabic2.ts \
#    H.txt \
#    LICENSE \
#    english.ts \
#    tran/Arabic2.qm \
#    tran/english2.qm

RESOURCES += \
    images.qrc

RESOURCES += \
    Translations.qrc

DISTFILES +=
