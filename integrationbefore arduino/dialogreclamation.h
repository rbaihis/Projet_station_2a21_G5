#ifndef DIALOGRECLAMATION_H
#define DIALOGRECLAMATION_H

#include <QDialog>
#include "Reclamation.h"
#include <QMessageBox>
#include <QIntValidator>
namespace Ui {
class DialogReclamation;
}

class DialogReclamation : public QDialog
{
    Q_OBJECT

public:
    explicit DialogReclamation(QWidget *parent = nullptr);
    ~DialogReclamation();

private slots:
    void on_pb_ajouter_clicked();
    void on_pb_supprimer_clicked();

    void on_pushButton_modifier_clicked();

    void on_Generer_PDF_clicked();

    void on_pb_recherche_clicked();

    void on_pb_tri_clicked();

    void on_pb_stat_clicked();

    void on_Trier_currentChanged();

   // void on_pb_arduino_clicked();

private:
    Ui::DialogReclamation *ui;
     Reclamation R;
};

#endif // DIALOGRECLAMATION_H
