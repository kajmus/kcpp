#include "../include/Zadanie4_6.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Zadanie4_6::run() {
    const double PI = 3.141592653589793;
    const double E = 2.718281828459045;
    const double GOLDEN = 1.618033988749895;

    const int w1 = 15;
    const int w2 = 23;
    const int w3 = 20;
    const int w4 = 20;
    cout << left << setw(w1) << "Stala"
         << setw(w2) << "Wartosc (domyslnie)"
         << setw(w3) << "Notacja stala"
         << setw(w4) << "Notacja naukowa"
         << endl;

    cout << string(8, '-') << string(7, ' ')
         << string(19, '-') << string(4, ' ')
         << string(13, '-') << string(7, ' ')
         << string(15, '-') 
         << endl;

    cout << left << setw(w1) << "Pi";
    cout << left << setw(w2) << PI;
    cout << setw(w3) << fixed << setprecision(6) << PI;
    cout << setw(w4) << scientific << setprecision(6) << PI << endl;

    cout << left << setw(w1) << "e";
    cout << defaultfloat << left << setw(w2) << E;
    cout << setw(w3) << fixed << setprecision(6) << E;
    cout << setw(w4) << scientific << setprecision(6) << E << endl;

    cout << left << setw(w1) << "Zloty podzial";
    cout << defaultfloat << left << setw(w2) << GOLDEN;
    cout << setw(w3) << fixed << setprecision(6) << GOLDEN;
    cout << setw(w4) << scientific << setprecision(6) << GOLDEN << endl;

}