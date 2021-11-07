#include "dialog.h"
#include <QHBoxLayout>




dialog::dialog(QWidget *parent):QWidget(parent)
{
   creatWidgets();
   placeWidgets();

}
void dialog :: creatWidgets()
{
    label =new QLabel("name");
    search =new QPushButton("search");
    edit =new QLineEdit;
    this->setWindowTitle("HBoxLayout");
};
void dialog :: placeWidgets()
 { auto layout = new QHBoxLayout;
   this->setLayout(layout);
   layout->addWidget(label);
   layout->addWidget(edit);
   layout->addWidget(search);
 };

