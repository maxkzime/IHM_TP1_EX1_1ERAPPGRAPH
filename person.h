// TP1/EX1/person.h
// exercice 1 : Fabrication d’une première application graphique
// BODIN Maxime C2
// 22/03/24


#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Person
{
public:
    Person();
    QString transformName(QString aFirstName);

    // Password generator :
    QString createPswd(int length);
};

#endif // PERSON_H
