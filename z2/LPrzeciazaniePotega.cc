// Zadanie 2.5 (przeciążenie potęgowanie)
// --------------------------------------
// Napisz program z funkcją do obliczania wartości potęgi (przeciążenie dla różnych typów)
// Napisz funkcję potega, która podnosi liczbę do potęgi, obsługując:
// - liczby całkowite,
// - liczby zmiennoprzecinkowe.
// Nazwa: LPrzeciazaniePotega.cc


#include <iostream>
using namespace std;

int power(int x, int n){
    int wynik =1;
    for(int i=0;i<n;i++){
        wynik *=x;
    }
    return wynik;
};

float power(float x, int n){
    float wynik =1;
    for(int i=0;i<n;i++){
        wynik *=x;
    }
    return wynik;
};

int main(){
    cout << power(2,3) << endl;
    cout << power(2.2f,3) << endl;
    return 0;
}