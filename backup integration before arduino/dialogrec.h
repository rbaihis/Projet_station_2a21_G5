#ifndef DIALOGREC_H
#define DIALOGREC_H
#include <QDialog>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
#include <QWidget>
#include <QList>
#include <QDialog>

namespace Ui {
class DialogREC;
}

class DialogREC : public QDialog
{
    Q_OBJECT

public:
    explicit DialogREC(QWidget *parent = nullptr);
    ~DialogREC();

private:
    Ui::DialogREC *ui;
    QList<qreal> stat_reclamation();
       QList <QString> stat_reclamation_nom();
};

#endif // DIALOGREC_H
