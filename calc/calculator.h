#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <QtWidgets>

class calculator : public QWidget
{
public:
  //constructor
    calculator(QWidget *parent = nullptr);
    void creatingWdgets();
    void positionWidgets();

private:
  QPushButton *buttons[10];
  QPushButton *bEnter;
  QLCDNumber *label;
  QVBoxLayout *mainLayout;
  QGridLayout *grid;

};

#endif // CALCULATOR_H
