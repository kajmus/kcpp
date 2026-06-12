#include "../include/Zadanie4_12.h"
#include <iostream>
using namespace std;

void Zadanie4_12::run() {
  int liczba;
  long long silnia = 1; // long long, aby uniknąć przepełnienia
  long long suma =1;
  cout << "Podaj liczbe do obliczenia silni: ";
  cin >> liczba;
  if (liczba < 0) {
      cout << "zla liczba"<<endl;
      return;
  }
  for (int i = 1; i <= liczba; i++) {
    silnia *= i;
    suma += silnia;
  }

  cout << "Silnia z " << liczba << " wynosi: " << silnia << endl;
  cout << "suma silni "<< suma << endl;

}
