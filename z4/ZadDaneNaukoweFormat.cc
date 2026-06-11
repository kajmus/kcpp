// Zadanie 4.6
// --------------------------------------
// Napisz program, który wyświetli stałe matematyczne w trzech różnych formatach:

// Stała          Wartość (domyślnie)    Notacja stała      Notacja naukowa
// --------       -----------------      -------------      --------------
// Pi             3.14159                3.141593           3.141593e+00
// e              2.71828                2.718282           2.718282e+00
// Złoty podział  1.61803                1.618034           1.618034e+00

// - Użyj scientific i fixed do zmiany notacji
// - Dla każdej notacji zastosuj precyzję 6 cyfr
// - Szerokość kolumn: nazwa stałej (15 znaków), wartości (20 znaków)
// - Nagłówki kolumn wyrównaj do środka (używając spacji)
// - nazwij program: ZadDaneNaukoweFormat.cc

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
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

    return 0;
}