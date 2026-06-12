#include "../include/Zadanie5_6.h"
#include <iostream>
#include <cmath>

using namespace std;

Kwadrat::Kwadrat(double bok) { a = bok; }
double Kwadrat::Pole() { return a * a; }
double Kwadrat::Obwod() { return 4 * a; }
void Kwadrat::print() { cout << "kwadrat" << endl; }


Prostokat::Prostokat(double bokA, double bokB) { a = bokA; b = bokB; }
double Prostokat::Pole() { return a * b; }
double Prostokat::Obwod() { return 2 * (a + b); }
void Prostokat::print() { cout << "prostokat" << endl; }

Trojkat::Trojkat(double bokA, double bokB, double bokC) { a = bokA; b = bokB; c = bokC; }
double Trojkat::Obwod() { return a + b + c; }
double Trojkat::Pole() {
    double p = Obwod() / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
void Trojkat::print() { cout << "trojkat" << endl; }

Kolo::Kolo(double promien) { r = promien; }
double Kolo::Pole() { return PI * r * r; }
double Kolo::Obwod() { return 2 * PI * r; }
double Kolo::Dystans(double x) { return sqrt(x / PI); }
void Kolo::print() { cout << "kolo" << endl; }

void Zadanie5_6::run() {
    Figura *kwadrat = new Kwadrat(10);
    kwadrat->print();
    cout << "pole: " << kwadrat->Pole() << endl;
    cout << "obwod: " << kwadrat->Obwod() << endl;

    Figura *prostokat = new Prostokat(10, 20);
    prostokat->print();
    cout << "pole: " << prostokat->Pole() << endl;
    cout << "obwod: " << prostokat->Obwod() << endl;

    Figura *trojkat = new Trojkat(3, 4, 5);
    trojkat->print();
    cout << "pole: " << trojkat->Pole() << endl;
    cout << "obwod: " << trojkat->Obwod() << endl;

    Kolo *kolo = new Kolo(10);
    double x = 2.5;
    kolo->print();
    cout << "pole: " << kolo->Pole() << endl;
    cout << "obwod: " << kolo->Obwod() << endl;
    cout << "dystans: " << kolo->Dystans(x) << endl;

    delete kwadrat;
    delete prostokat;
    delete trojkat;
    delete kolo;
    
}