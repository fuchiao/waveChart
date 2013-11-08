#include "wavechart.h"
#include <QApplication>
#include<QTime>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    waveChart w;
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());
    for (int i=0; i<128; i++)
        w.xList.append(qrand() % 100);
    w.show();
    w.show();

    return a.exec();
}
