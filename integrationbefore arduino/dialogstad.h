#ifndef DIALOGSTAD_H
#define DIALOGSTAD_H

#include <QDialog>

namespace Ui {
class DialogSTAD;
}

class DialogSTAD : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSTAD(QWidget *parent = nullptr);
    ~DialogSTAD();

private:
    Ui::DialogSTAD *ui;
    QList<qreal> stat_station();
        QList <QString> stat_station_nom();
};

#endif // DIALOGSTAD_H
