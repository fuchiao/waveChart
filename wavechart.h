#ifndef WAVECHART_H
#define WAVECHART_H

#include <QWidget>
#include <QTime>
#include <QTimer>
namespace Ui {
class waveChart;
}

class waveChart : public QWidget
{
    Q_OBJECT

public:
    explicit waveChart(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    ~waveChart();
#define RADIUS_MAX 512
#define AMPLITUDE_MAX 100
    int buffer[RADIUS_MAX];

private slots:
    void updateFrame();

private:
    Ui::waveChart *ui;
};

#endif // WAVECHART_H
