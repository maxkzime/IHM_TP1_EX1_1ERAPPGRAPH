#include "widget.h"

#include <QGridLayout>
#include <QPushButton>

#include <person.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    QGridLayout * gLayout = new QGridLayout();

    QLabel * lTitle = new QLabel("Veuillez saisir votre prénom");
    gLayout->addWidget(lTitle, 0,0,1,2);

    QLabel * lName = new QLabel("Votre prénom : ");
    gLayout->addWidget(lName, 1,0);

    leName = new QLineEdit("James");
    leName->selectAll();
    gLayout->addWidget(leName,1,1);

    lGreetings = new QLabel();
    gLayout->addWidget(lGreetings, 3,0,1,2);

    QPushButton * button = new QPushButton("Valider");
    gLayout->addWidget(button, 2,1);

    connect(button, &QPushButton::clicked, [this](){Person p; lGreetings->setText("Bonjour " + p.transformName(leName->text()));});

    setWindowTitle("Mon premier programme");
    setLayout(gLayout);
}

Widget::~Widget()
{
}

