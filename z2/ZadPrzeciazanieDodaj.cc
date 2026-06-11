// Zadanie 2.3 (przeciążanie funkcji)
// --------------------------------------
// Napisz program który przeciąża funkcję do dodawania różnych typów danych.
// Zaimplementuj funcję 'dodaj'
// - dodawanie dwóch liczb całkowitych,
// - dodawanie dwóch liczb zmiennoprzecinkowych,
// - konkatenację dwóch napisów (std::string).
// Nazwa: ZadPrzeciazanieDodaj.cc

#include <iostream>
using namespace std;

int dodaj(int a, int b) { return a + b; }
float dodaj(float a, float b) { return a + b; }
string dodaj(string a, string b) { return a + b; }

int main() {
    cout <<"dodawanie liczb całkowitych " << dodaj(1, 2) << endl;
    cout <<"dodawanie liczb zmiennoprzecinkowych " <<dodaj(1.0f, 2.0f) << endl;
    cout <<"dodawanie napisów " <<dodaj("1", "2") << endl;
    return 0;
}