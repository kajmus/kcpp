// Zadanie 4.12
// -------------------------------------
// Dodaj do programu ZadStudent/LSilnia.cc sprawdzanie, czy podana liczba jest większa lub równa zero (silnia jest zdefiniowana tylko dla liczb nieujemnych).
// Zmodyfikuj program, aby obliczał sumę silni od 1 do n.

#include <iostream>
using namespace std;

int main() {
  int liczba;
  long long silnia = 1; // long long, aby uniknąć przepełnienia
  long long suma =1;
  cout << "Podaj liczbe do obliczenia silni: ";
  cin >> liczba;
  if (liczba < 0) {
      cout << "zla liczba"<<endl;
      return 0;
  }
  for (int i = 1; i <= liczba; i++) {
    silnia *= i;
    suma += silnia;
  }

  cout << "Silnia z " << liczba << " wynosi: " << silnia << endl;
  cout << "suma silni "<< suma << endl;

  return 0;
}
