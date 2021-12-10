 #ifndef MAQUETTE_YESMIN_H
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Reclamation.h"
#include <QMessageBox>
#include <QIntValidator>
#define MAQUETTE_YESMIN_H

#include <QDialog>

namespace Ui {
class maquette_yesmin;
}

class maquette_yesmin : public QDialog
{
    Q_OBJECT

public:
    explicit maquette_yesmin(QWidget *parent = nullptr);
    ~maquette_yesmin();

private slots:
    void on_pb_ajouter_clicked();
    void on_pb_supprimer_clicked();

    void on_pushButton_modifier_clicked();

    void on_Generer_PDF_clicked();

    void on_pb_recherche_clicked();

    void on_pb_tri_clicked();

    void on_pb_stat_clicked();

    void on_Trier_currentChanged();

//    void on_pb_arduino_clicked();

private:
    Ui::maquette_yesmin *ui;
    Reclamation R;
};

#endif // MAQUETTE_YESMIN_H
