#ifndef ZADANIE2_4_H
#define ZADANIE2_4_H

#include "ZadKcpp.h"

class Punkt {
public:
    int x, y;
    Punkt(int xx, int yy);
    Punkt operator+(const Punkt& p);
    void printP();
};

class Zadanie2_4 : public ZadKcpp {
public:
    void run() override;
};

#endif