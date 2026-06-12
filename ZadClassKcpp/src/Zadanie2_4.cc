#include "../include/Zadanie2_4.h"
#include <iostream>
using namespace std;

Punkt::Punkt(int xx = 0, int yy = 0)  {x = xx; y = yy;}
Punkt Punkt::operator+(const Punkt& p) {return Punkt(x +p.x, y +p.y);}
void Punkt::printP() {cout << x << ", " << y << endl;}

void Zadanie2_4::run() {
    Punkt p1(-1,0);
    Punkt p2(1,2);
    Punkt p3(3,2);

    Punkt p4 = p1+p2;
    Punkt p5 = p2+p3;

    p1.printP();
    p2.printP();
    p3.printP();
    cout << "p1 +p2"<< endl;
    p4.printP();
    cout << "p2 +p3"<< endl;
    p5.printP();
}