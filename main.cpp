#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}

/*
 * À la fin de la séance de TP vous devrez répondre à un QCM. Afin de vous préparez, essayez de
 * répondre aux questions suivantes :
 *
 * 1. Donnez le lien, dans la documentation officielle, décrivant la méthode add utilisée par l’objet gLayout.
 *      https://doc.qt.io/qt-5/qgridlayout.html#addWidget-1
 *
 * 2. En vous aidant de la documentation, expliquez ce que fait l’instruction suivante : gLayout->addWidget(button, 2, 1);
 *  ajoute le widget button sur la grille gLayout, centré (2->ligne du milieu, 1->colonne du milieu)
 *
 * 3. Quelles sont les méthodes de la classe Widget ?
 *      https://doc.qt.io/qt-5/qwidget.html#public-functions
 *
 * 4. Que signifie l’instruction Class Widget: public QWidget ?
 *
5. Que signifie l’instruction Widget::Widget(QWidget *parent) : QWidget(parent) ?
6. Quel est le diagramme d’objet correspondant à votre programme ?
7. Donnez les lignes qui sont exécutées après un appui sur le bouton.

* 8. Expliquez pourquoi lorsque l’on clique sur la croix, l’application se ferme.
* Lorsque l'on clique sur la croix, l'application se ferme car c'est un bouton.
* Comme :
*   QPushButton * m_pushbutton = new QPushButton("Quitter");
    connect(m_pushbutton, SIGNAL(clicked()), qApp, SLOT(quit()));
*/
