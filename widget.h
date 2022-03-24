// TP1/EX1/widget.h
// exercice 1 : Fabrication d’une première application graphique
// BODIN Maxime C2
// 22/03/24

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

private:
    QLineEdit * leName;
    QLabel * lGreetings;

    // Password generator :
    QLineEdit * lpswd;
    QLCDNumber * count;

};
#endif // WIDGET_H




