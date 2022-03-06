#include "widget.h"

#include <QGridLayout>
#include <QPushButton>
//#include <QProgressBar>
//#include <QLCDNumber>
//#include <QApplication>
//#include <QGroupBox>
//#include <QRadioButton>
//#include <QSpinBox>
//#include <QSlider>
//#include <QCalendarWidget>

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


//    //------------------QLabel test 'Hello world'------------------
//    QLabel *m_texte = new QLabel(); // Création de l"objet
//    m_texte->setText("Hello world !"); // Définition du texte
//    gLayout->addWidget(m_texte,3,1);
//    //------------------QLabel test 'Hello world'------------------


//    //------------------Progress bar with spinbox to select the value------------------
//    QSpinBox *m_spinbox = new QSpinBox();
//    gLayout->addWidget(m_spinbox,4,1);
//    //    m_spinbox->setMinimum(0); /* La valeur minimale sera de 0 */
//    //    m_spinbox->setMaximum(100); /* La valeur maximale sera de 100 */
//    m_spinbox->setRange(0, 100);


//    QProgressBar *m_progressbar = new QProgressBar(); /* Création de la barre de progression */
//    gLayout->addWidget(m_progressbar,4,0);

//    /* Choix de la valeur de la barre en fonction de la valeur du spinbox */
//    connect(m_spinbox, QOverload<int>::of(&QSpinBox::valueChanged),
//            [=](int i){ m_progressbar->setValue(i); });
//    //------------------Progress bar with spinbox to select the value------------------


//    //------------------LCD Counter with increment and decrement button------------------
//    QGroupBox *lcdGroupBox = new QGroupBox("Compteur LCD :"); /* Création du QGroupBox */

//    /* Création et initialisation du compteur lcd */
//    lcdCount = new QLCDNumber();
//    lcdCount->display(0);

//    /* Création des boutons */
//    QPushButton * m_pblcdincr = new QPushButton("Increment");
//    QPushButton * m_pblcddecr = new QPushButton("Decrement");
//    connect(m_pblcdincr, &QPushButton::clicked, [this](){x++; lcdCount->display(x);});
//    connect(m_pblcddecr, &QPushButton::clicked, [this](){x--; lcdCount->display(x);});

//    QVBoxLayout *layoutLcd = new QVBoxLayout(); /* Création du layout */
//    /* Ajout des widgets au layout */
//    layoutLcd->addWidget(lcdCount);
//    layoutLcd->addWidget(m_pblcdincr);
//    layoutLcd->addWidget(m_pblcddecr);


//    lcdGroupBox->setLayout(layoutLcd);
//    gLayout->addWidget(lcdGroupBox,6,1);/* Ajout du layout au layout general */
//    //------------------LCD Counter with increment button------------------


//    //------------------LCD Counter with a slider------------------
//    QGroupBox *lcdGroupBoxSlider = new QGroupBox("Compteur LCD avec un slider :"); /* Création du QGroupBox */

//    /* Création et initialisation du compteur lcd */
//    QLCDNumber *lcdCountSlider = new QLCDNumber();
//    lcdCountSlider->display(0);

//    /* Création du slider */
//    QSlider *m_slider = new QSlider();
//    m_slider->setOrientation(Qt::Horizontal); /* orientation du slider */

//    /* signaux du slider pour actualisation */
//    connect(m_slider, QOverload<int>::of(&QSlider::valueChanged),
//            [=](int i){ lcdCountSlider->display(i); });

//    QVBoxLayout *layoutLcdSlider = new QVBoxLayout(); /* Création du layout */
//    /* Ajout des widgets au layout */
//    layoutLcdSlider->addWidget(lcdCountSlider);
//    layoutLcdSlider->addWidget(m_slider);

//    lcdGroupBoxSlider->setLayout(layoutLcdSlider);
//    gLayout->addWidget(lcdGroupBoxSlider,7,0);/* Ajout du layout au layout general */
//    //------------------LCD Counter with increment button------------------


//    //------------------Close window button------------------
//    QPushButton * m_pushbutton = new QPushButton("Quitter");
//    gLayout->addWidget(m_pushbutton,9,3);

//    connect(m_pushbutton, SIGNAL(clicked()), qApp, SLOT(quit()));
//    //------------------Close window button------------------


//    //------------------Radio button (example from internet)------------------
//    QGroupBox *qgroupbox = new QGroupBox("Votre language de programmation préféré :"); /* Création du QGroupBox */
//    QRadioButton *cPlusPlus = new QRadioButton("C++"); /* Création de l'option C++ ... */
//    QRadioButton *python = new QRadioButton("Python"); /*..., de l'option Python ... */
//    QRadioButton *php = new QRadioButton("PHP"); /*..., et de l'option PHP */

//    QVBoxLayout *layout = new QVBoxLayout(); /* Création du layout */
//    layout->addWidget(cPlusPlus);/* Ajout des QRadioButton */
//    layout->addWidget(python);
//    layout->addWidget(php);

//    qgroupbox->setLayout(layout); /* Définition du layout pour l'objet QGroupBox */
//    gLayout->addWidget(qgroupbox,6,0);
//    //------------------Radio button (example from internet)------------------


//    //------------------Date editor------------------
//    QGroupBox *qGroupBoxDate = new QGroupBox("Entrez la date de votre mort :"); /* Création du QGroupBox */
//    QCalendarWidget  *m_calendar  = new QCalendarWidget();
//    m_calendar->setMinimumDate(QDate(QDate(2022, 1, 1)));
//    m_calendar->setMaximumDate(QDate(2022, 12, 1));
//    m_calendar->setGridVisible(true); /* Affichage de la grille */

//    QVBoxLayout *layoutDate = new QVBoxLayout(); /* Création du layout */
//    layoutDate->addWidget(m_calendar);
//    qGroupBoxDate->setLayout(layoutDate);
//    gLayout->addWidget(qGroupBoxDate,8,0);
//    //------------------Date editor------------------




    setWindowTitle("Mon premier programme");
    setLayout(gLayout);





}

Widget::~Widget()
{
}

