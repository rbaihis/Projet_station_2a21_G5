#include "dialogstad.h"
#include "ui_dialogstad.h"

//#include "connection.h"
#include <QSqlQuery>
#include<QChartView>
#include<QtCharts>
DialogSTAD::DialogSTAD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSTAD)
{
    ui->setupUi(this);

    QPieSeries *series =new QPieSeries ;

    QList<qreal> list= stat_station();
     QList<QString> list2=stat_station_nom();

     for(int i=0 ;i<list.size();i++)
     {
          series->append(list2[i],list[i]);

     }





        QChart *chart =new QChart;
        chart->addSeries(series);
        chart->setTitle("STATS des Stations");
        QChartView *chartview= new QChartView(chart);
        chartview->setParent( ui->Frame );
}

DialogSTAD::~DialogSTAD()
{
    delete ui;
}

 QList<qreal> DialogSTAD::stat_station()
{
    QList<qreal> list ;
    QSqlQuery query;
    query.prepare("select ville, sum(numero) as TotalSum from station group by ville ORDER BY ville ASC");
    query.exec();
    while(query.next())
    {list.append(query.value(1).toInt());}

  return list;

 }

 QList<QString> DialogSTAD::stat_station_nom()
 {
     QList<QString> list ;
     QSqlQuery query;
     query.prepare("select ville, sum(numero) as TotalSum from station group by ville ORDER BY ville ASC");
     query.exec();
     while(query.next())
     {list.append(query.value(0).toString());}

   return list;
 }
