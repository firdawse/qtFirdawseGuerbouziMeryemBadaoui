#include <QApplication>
#include <QtWidgets>
#include "bugreport.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto b =new bugreport;
    b->show();
    return a.exec();
}
