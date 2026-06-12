#ifndef ZADANIE5_6_H
#define ZADANIE5_6_H

#include "ZadKcpp.h"

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
    Kwadrat(double bok);
    double Pole() override;
    double Obwod() override;
    void print() override;
};

class Prostokat : public Figura {
private:
    double a, b;
public:
    Prostokat(double bokA, double bokB);
    double Pole() override;
    double Obwod() override;
    void print() override;
};

class Trojkat : public Figura {
private:
    double a, b, c;
public:
    Trojkat(double bokA, double bokB, double bokC);
    double Obwod() override;
    double Pole() override;
    void print() override;
};

class Kolo : public Figura {
private:
    double r;
    const double PI = 3.141592653589793;
public:
    Kolo(double promien);
    double Pole() override;
    double Obwod() override;
    void print() override;
    double Dystans(double x);
};


class Zadanie5_6 : public ZadKcpp {
public:
    void run() override;
};

#endif