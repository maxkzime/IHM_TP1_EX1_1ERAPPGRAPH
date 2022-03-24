// TP1/EX1/widget.cpp
// exercice 1 : Fabrication d’une première application graphique
// BODIN Maxime C2
// 22/03/24

#include "widget.h"
#include "person.h"

#include <QGridLayout>
#include <QPushButton>
#include <QSlider>
#include <QApplication>
#include <QTabWidget>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QGridLayout * gLayout = new QGridLayout(); /* Création du layout name */
    QTabWidget *onglets = new QTabWidget(); /* Création du système onglets */

    //------------------TP1 -  Saisie puis affichage du nom ------------------
    QWidget *printUpperName = new QWidget();

    QGridLayout * nameLayout = new QGridLayout(); /* Création du layout name */

    QLabel * lTitle = new QLabel("Veuillez saisir votre prénom : ");
    nameLayout->addWidget(lTitle, 0,0,1,2);

    QLabel * lName = new QLabel("Votre prénom : ");
    nameLayout->addWidget(lName, 1,0);

    leName = new QLineEdit("James");
    leName->selectAll();
    nameLayout->addWidget(leName,1,1);

    lGreetings = new QLabel();
    nameLayout->addWidget(lGreetings, 3,0,1,2);

    QPushButton * button = new QPushButton("Valider");
    nameLayout->addWidget(button, 2,1);

    connect(button, &QPushButton::released, [this](){Person p; lGreetings->setText("Bonjour " + p.transformName(leName->text()));});

    printUpperName->setLayout(nameLayout);

    //------------------TP1 -  Saisie puis affichage du nom ------------------



    //------------------Password generator------------------
    QWidget *passwordGen = new QWidget();
    QGridLayout * pswdLayout = new QGridLayout(); /* Création du layout password */

    QLabel * pswdTitle = new QLabel("Mot de passse : ");
    pswdLayout->addWidget(pswdTitle);

    lpswd = new QLineEdit();
    pswdLayout->addWidget(lpswd);

    /* Création du slider */
    QSlider *m_slider = new QSlider();
    m_slider->setRange(10,20);
    m_slider->setOrientation(Qt::Horizontal); /* orientation du slider */
    pswdLayout->addWidget(m_slider);

    count = new QLCDNumber();
    count->setSegmentStyle(QLCDNumber::Flat);
    count->setPalette(Qt::gray);
    pswdLayout->addWidget(count);

    /* signaux du slider pour actualisation */
    connect(m_slider, QOverload<int>::of(&QSlider::valueChanged),
            [=](int i){Person p; lpswd->setText(p.createPswd(i)); lpswd->selectAll(); count->display(i); });

    passwordGen->setLayout(pswdLayout);

    //------------------Password generator------------------

    //------------------Quit button------------------
    QPushButton * m_pushbutton = new QPushButton("Quitter");
    connect(m_pushbutton, SIGNAL(clicked()), qApp, SLOT(quit()));

    gLayout->addWidget(m_pushbutton,1,0);
    //------------------Quit button------------------


    onglets->addTab(printUpperName, "Identification");
    onglets->addTab(passwordGen, "Générateur de mot de passe");

    gLayout->addWidget(onglets,0,0);


    setWindowTitle("Mon premier programme");
    setLayout(gLayout);

}

