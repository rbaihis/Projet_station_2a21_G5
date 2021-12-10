#ifndef DIALOGABONNE_H
#define DIALOGABONNE_H

#include <QDialog>
#include "client.h"
#include "abonnement.h"
namespace Ui {
class Dialogabonne;
}

class Dialogabonne : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogabonne(QWidget *parent = nullptr);
    ~Dialogabonne();
private slots:

    void on_pb_ajouter_clicked();
    void on_le_Modifier_clicked();
    void on_pb_supprimer_clicked();
    void on_pb_ajouter_2_clicked();
    void on_pb_supprimer_2_clicked();
    void on_le_modifier_2_clicked();
    void stats(QString,QString,int,int,QString);




    void on_pb_stat_age_clicked();

    void on_le_recherche_client_textChanged();

    void on_cb_tri_client_currentIndexChanged(int index);


    void on_pb_excel_clicked();
    void on_CLEAR_clicked();

    void on_pushButton_clicked();

    void on_tab_client_activated(const QModelIndex &index);
private:
    Ui::Dialogabonne *ui;
    Abonnement b;

        Client C;
        QString File = "‪H.txt";
};

#endif // DIALOGABONNE_H
