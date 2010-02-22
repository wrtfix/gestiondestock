#include <QtGui/QApplication>
#include "ventas.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ventas w;
    w.show();
    return a.exec();
}
