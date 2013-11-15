#include "wavechart.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    waveChart w;
    w.show();

    return a.exec();
}
