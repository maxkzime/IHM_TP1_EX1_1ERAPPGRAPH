#include "person.h"

Person::Person()
{
}
QString Person::transformName(QString aFirstName)
{
    return aFirstName.toUpper();
}
