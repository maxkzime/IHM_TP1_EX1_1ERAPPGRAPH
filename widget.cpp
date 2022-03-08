#include "widget.h"

#include <QGridLayout>
#include <QPushButton>
#include <QGroupBox>
#include <QSlider>

#include <person.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    QGridLayout * gLayout = new QGridLayout(); /* Création du layout general */

    //------------------TP1 -  Saisie puis affichage du nom ------------------
    QLabel * lTitle = new QLabel("Veuillez saisir votre prénom : ");
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

    connect(button, &QPushButton::released, [this](){Person p; lGreetings->setText("Bonjour " + p.transformName(leName->text()));});
    //------------------TP1 -  Saisie puis affichage du nom ------------------



    //------------------Password generator------------------
    QGroupBox *qGroupBoxDate = new QGroupBox("Génération mot de passe :"); /* Création du QGroupBox */
    QVBoxLayout *layoutCreatePswd = new QVBoxLayout(); /* Création du layout */

    lpswd = new QLabel();
    layoutCreatePswd->addWidget(lpswd);

    /* Création du slider */
    QSlider *m_slider = new QSlider();
    m_slider->setRange(10,20);
    m_slider->setOrientation(Qt::Horizontal); /* orientation du slider */
    layoutCreatePswd->addWidget(m_slider);

    /* signaux du slider pour actualisation */
    connect(m_slider, QOverload<int>::of(&QSlider::valueChanged),
            [=](int i){Person p; lpswd->setText("Mot de passse : " + p.createPswd(i)); });


    qGroupBoxDate->setLayout(layoutCreatePswd);
    gLayout->addWidget(qGroupBoxDate,4,0);/* Ajout du layout au layout general */

    //------------------Password generator------------------

    setWindowTitle("Mon premier programme");
    setLayout(gLayout);

}

Widget::~Widget()
{
}

