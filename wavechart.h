#ifndef WAVECHART_H
#define WAVECHART_H

#include <QWidget>

namespace Ui {
class waveChart;
}

class waveChart : public QWidget
{
    Q_OBJECT

public:
    explicit waveChart(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void appendData(int data);
    ~waveChart();

    QList<qreal> xList;

private:
    Ui::waveChart *ui;
};

#endif // WAVECHART_H
