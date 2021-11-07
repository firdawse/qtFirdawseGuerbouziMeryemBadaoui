#include <QApplication>
#include "calculator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto calc = new calculator();
    calc->show();
    return a.exec();
}
