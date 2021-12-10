#ifndef DIALOGSTATION_H
#define DIALOGSTATION_H

#include <QDialog>
#include "station.h"
namespace Ui {
class DialogStation;
}

class DialogStation : public QDialog
{
    Q_OBJECT

public:
    explicit DialogStation(QWidget *parent = nullptr);
    ~DialogStation();
private slots:


    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_afficher_clicked();

    void on_pb_modifier_clicked();

   // void on_lineEdit_recherhche_2_textChanged(const QString &arg1);

    void on_pushButton_32_clicked();

    void on_pushButton_clicked();

    void on_pushButton_28_clicked();

    void on_pb_valider_clicked();

void on_pb_recherche_clicked();

private:
    Ui::DialogStation *ui;
     station ss;
};

#endif // DIALOGSTATION_H
