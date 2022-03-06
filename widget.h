#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QLineEdit>
#include <QLabel>
#include <QLCDNumber>


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QLineEdit * leName;
    QLabel * lGreetings;

//    //------------------LCD Counter with increment and decrement button------------------
//    QLCDNumber * lcdCount;
//    int x=0;
//    //------------------LCD Counter with increment and decrement button------------------
};
#endif // WIDGET_H




