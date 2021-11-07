#define DIALOG_H
#define DIALOG_H
#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>

class dialog : public QWidget
{
public:
    explicit dialog(QWidget*parent=nullptr);
protected:
    void creatWidgets();
    void placeWidgets();
protected:
    QLineEdit*edit;
    QLabel*label;
    QPushButton*search;
};


