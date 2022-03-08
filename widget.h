#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QLineEdit>
#include <QLabel>


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QLineEdit * leName;
    QLabel * lGreetings;

    // Password generator :
    QLabel * lpswd;
};
#endif // WIDGET_H




