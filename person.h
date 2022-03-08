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
