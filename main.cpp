#include "saper.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    saper w;
    w.show();
    return a.exec();
}


