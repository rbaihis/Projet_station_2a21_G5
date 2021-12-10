#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include"bus.h"
#include "smtp.h"
#include"exporttoexcel.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

    void on_pb_recherche_clicked();

    void on_pb_trier_clicked();


    void on_pb_afficherTr_clicked();



    void on_pb_afficher_clicked();

    void on_pb_AccFexel_clicked();

    void sendMail();
        void mailSent(QString);

        void on_pb_imp_clicked();

        void on_pb_trierP_clicked();

private:
    Ui::Dialog *ui;
    Bus b;


};

#endif // DIALOG_H
