#ifndef DIALOG_H
#define DIALOG_H
#include <QDialog>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
#include <QWidget>
#include <QList>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QList<qreal> stat_reclamation();
    QList <QString> stat_reclamation_nom();
};




#endif // DIALOG_H
