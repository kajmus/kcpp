// Zadanie 2.2 (przeciążanie funkcji)
// --------------------------------------
// Napisz program który przeciążenia funkcję do obliczania pola: pole(...).
// Napisz funkcję pole, która będzie przeciążona dla:
// - kwadratu (przyjmuje długość boku),
// - prostokąta (przyjmuje długości dwóch boków),
// - koła (przyjmuje promień).
// nazwa: ZadPrzeciazaniePole.cc


#include <iostream>
using namespace std;

float pole(float a){return a*a;};
float pole(float a, float b){return a*b;};
double pole(double r){return 3.14*r*r;};

int main(){
    
    cout <<"pole kwadratu " <<pole(3.0f) << endl;
    cout <<"pole prostokata " <<pole(3.0f, 4.0f) << endl;
    cout <<"pole kola " <<pole(3.0) << endl;
    return 0;
}
