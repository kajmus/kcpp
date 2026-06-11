#include "../include/Zadanie4_13.h"
#include <iostream>

using namespace std;

// Definicja metody - tutaj ląduje logika z Twojego starego main()
void Zadanie4_13::run() {
  int rozmiar;
  cout << "Podaj rozmiar kwadratu: ";
  cin >> rozmiar;

  cout << "\nKwadrat:" << endl;
  for (int i = 0; i < rozmiar; i++) {
    for (int j = 0; j < rozmiar; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  cout << "\nTrojkat prostokatny:" << endl;
  for (int i = 0; i < rozmiar; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << "\ntrojkat rownoramienny: "<< endl;
  for (int i=0; i<rozmiar; i++){
    for (int j=0; j<rozmiar-i; j++){
      cout<<" ";
    }
    for (int j=0; j<=i; j++){
      cout<<"* ";
    }
    cout<<endl;
  }

  cout << "\npiramida: "<<endl;
  for (int i=0;i <rozmiar;i++){
    for (int j=0; j<rozmiar-i; j++){
      cout<<" ";
    }
    for (int j=0; j<=i; j++){
      cout<<i+1<<" ";
    }
    cout<<endl;
  }

}