#include "person.h"

#include <random> // pour générer  un nombre aléatoire
#include <chrono> // pour la seed du générateur de nombre aléatoire

Person::Person()
{
}
QString Person::transformName(QString aFirstName)
{
    return aFirstName.toUpper();
}

// Password generator :
QString Person::createPswd(int length)
{
    // random number generator
    auto seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
    static std::mt19937 gen(seed);

    std::uniform_int_distribution<> distribNumberDec(33,126); // limites incluses du générateur de nombre aléatoire

    QString password;

    for (int i=0; i <=length; i++)
    {
        char c = (distribNumberDec(gen));
        password += c;
    }
    for (int i=0; i <=20-length; i++)
        password += "  ";

    return password;
}
