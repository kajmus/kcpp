// Zadanie 4.0
// --------------------------------------
// Napisz program z przykładem zastosowania klasy stringstream z biblioteki sstream
// - nazwać program LStringStream.cc

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string tekst = "123 45.67 Ala";

    stringstream ss(tekst);

    int liczba;
    double zmienna;
    string napis;

    ss >> liczba >> zmienna >> napis;

    cout << "Liczba: " << liczba << endl;
    cout << "Double: " << zmienna << endl;
    cout << "Napis: " << napis << endl;

    // Tworzenie napisu ze zmiennych
    stringstream wynik;
    wynik << "Wynik = " << liczba + 10;

    cout << wynik.str() << endl;

    return 0;
}