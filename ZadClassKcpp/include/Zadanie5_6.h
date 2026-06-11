#ifndef ZADANIE5_6_H
#define ZADANIE5_6_H

#include "ZadKcpp.h"

// Twoje klasy z zadania (tylko deklaracje!)
class Figura {
public:
    virtual double Pole() = 0;
    virtual double Obwod() = 0;
    virtual void print() = 0;
    virtual ~Figura() {}
};

class Kwadrat : public Figura {
private:
    double a;
public:
    Kwadrat(double bok); // Tylko deklaracja
    double Pole() override;
    double Obwod() override;
    void print() override;
};

// ... (tutaj zadeklaruj Prostokat, Trojkat, Kolo w ten sam sposób)

// Główna klasa "opakowująca" to zadanie dla menu
class Zadanie5_6 : public ZadKcpp {
public:
    void run() override;
};

#endif