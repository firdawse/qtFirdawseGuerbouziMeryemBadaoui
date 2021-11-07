#include "calculator.h"
#include <string>


void calculator ::creatingWdgets(){
    for(int i=0;i<10;i++){
       QString s = QString::number(i);
        buttons[i]=new QPushButton(s);
    }
    bEnter =new QPushButton("enter");
    label= new QLCDNumber();

}
void calculator :: positionWidgets(){
   mainLayout = new QVBoxLayout();
   grid = new QGridLayout();

   int k = 1;
   for(int i=2;i>=0;i--){
       for(int j=0;j<3;j++){
        grid->addWidget(buttons[k],i,j);
        k++;

       }
   }
    label->setMinimumHeight(80);
    label->setDigitCount(6);
    grid->addWidget(buttons[0],3,0);
    grid->addWidget(bEnter,3,1,1,2);
    mainLayout->addWidget(label);
    mainLayout->addLayout(grid);
    resize(300,300);
    setLayout(mainLayout);
}
calculator::calculator(QWidget* parent):QWidget(parent)
{
creatingWdgets();
positionWidgets();
}

