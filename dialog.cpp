#include "dialog.h"
#include "ui_dialog.h"
#include "connection.h"
#include <QSqlQuery>
#include<QChartView>
#include<QtCharts>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QPieSeries *series =new QPieSeries ;

    QList<qreal> list= stat_reclamation();
     QList<QString> list2=stat_reclamation_nom();

     for(int i=0 ;i<list.size();i++)
     {
          series->append(list2[i],list[i]);

     }





        QChart *chart =new QChart;
        chart->addSeries(series);
        chart->setTitle("STATS des reclamations");
        QChartView *chartview= new QChartView(chart);
        chartview->setParent( ui->Frame2 );
}

Dialog::~Dialog()
{
    delete ui;
}

 QList<qreal> Dialog::stat_reclamation()
{
    QList<qreal> list ;
    QSqlQuery query;
    //query.prepare("select nom,count(type_reclamation) from reclamation group by type_reclamation");
    query.prepare("select numBus,count(numBus) from reclamation group by numBus");
    query.exec();
    while(query.next())
    {list.append(query.value(1).toInt());}

  return list;

 }

 QList<QString> Dialog::stat_reclamation_nom()
 {
     QList<QString> list ;
     QSqlQuery query;
     //query.prepare("select nom,count(type_reclamation) from reclamation group by type_reclamation");
     query.prepare("select numBus,count(numBus) from reclamation group by numBus");
     query.exec();
     while(query.next())
     {list.append(query.value(0).toString());}

   return list;
 }
