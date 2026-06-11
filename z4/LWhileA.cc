
// Zadanie 4.14
// ------------------------------------
// Zmodyfikuj program ZadStudent/LWhileA.cc, aby zliczał również liczbę wprowadzonych wartości.
// Dodaj sprawdzanie, czy podana liczba jest dodatnia – jeśli nie, program ma wypisać komunikat.



#include <iostream>
using namespace std;

int main() {
  int liczba;
  int suma = 0;
  int licznik = 0;

  cout << "Wprowadzaj liczby (0 konczy program):" << endl;
  cin >> liczba;

  while (liczba != 0) {
    if (liczba > 0) {
        licznik++;
        suma += liczba;
    }else {
        cout << "liczba nie jest dodatnia" << endl;
    }
    cin >> liczba;


  }

  cout << "Suma wprowadzonych liczb: " << suma << endl;
  cout <<"ilosc wpisanych liczb"<< licznik << endl;

  return 0;
}
