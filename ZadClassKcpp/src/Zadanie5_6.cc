#include "../include/Zadanie5_6.h"
#include <iostream>
#include <cmath>

using namespace std;

// Definicje metod z klas figur
Kwadrat::Kwadrat(double bok) { a = bok; }
double Kwadrat::Pole() { return a * a; }
double Kwadrat::Obwod() { return 4 * a; }
void Kwadrat::print() { cout << "kwadrat" << endl; }

// ... (tutaj dodaj definicje dla Prostokat, Trojkat, Kolo)

// Definicja głównej metody uruchamiającej zadanie
void Zadanie5_6::run() {
    // To jest Twój stary kod z int main() w Zadaniu 5.6
    Figura *kwadrat = new Kwadrat(10);
    kwadrat->print();
    cout << "pole: " << kwadrat->Pole() << endl;
    cout << "obwod: " << kwadrat->Obwod() << endl;

    // ... reszta kodu testującego figury ...
    
    delete kwadrat;
    // pamiętaj też o dealokacji pozostałych wskaźników! (prostokat, trojkat, kolo)
}