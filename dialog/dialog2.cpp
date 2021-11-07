#include "dialog2.h"
#include <QHBoxLayout>
#include <QCheckBox>
#include <QVBoxLayout>


dialog2::dialog2(QWidget *parent):QWidget(parent)
{creatWidgets();
 placeWidgets();
}
void dialog2 :: creatWidgets()
{
    label =new QLabel("name");
    search =new QPushButton("search");
    close =new QPushButton("close");
    b1 =new QCheckBox("match case");
    b2=new QCheckBox("search backward");
    edit =new QLineEdit;
    this->setWindowTitle("HBoxLayout");
};
void dialog2 :: placeWidgets()
{ auto Mainlayout = new QHBoxLayout;
       auto topleftlayout = new QHBoxLayout;
       topleftlayout->addWidget(label);
       topleftlayout->addWidget(edit);
       auto leftlayout = new QVBoxLayout;

      leftlayout->addLayout(topleftlayout);
      leftlayout->addWidget(b1);
      leftlayout->addWidget(b2);
      auto rightlayout = new QVBoxLayout;
      rightlayout->addWidget(search);
      rightlayout->addWidget(close);
      rightlayout->addStretch(7);
      Mainlayout->addLayout(leftlayout);
      Mainlayout->addLayout(rightlayout);
      this->setLayout(Mainlayout);
};

