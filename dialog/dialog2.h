#ifndef DIALOG2_H
#define DIALOG2_H
#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QCheckBox>


class dialog2: public QWidget
{
public:
    explicit dialog2(QWidget*parent=nullptr);
protected:
    void creatWidgets();
    void placeWidgets();
protected:
    QLineEdit*edit;
    QLabel*label;
    QPushButton*search;
    QCheckBox*b1;
    QCheckBox*b2;
    QPushButton*close;
};

#endif // DIALOG2_H
