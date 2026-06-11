// Zadanie 4.13
// -------------------------------------
// Zmodyfikuj program ZadStudent/LKsztalt.cc, aby rysował trójkąt równoramienny.
// Dodaj pętlę, która narysuje "piramidę" z liczb (np. 1, 2 2, 3 3 3).

#include <iostream>
using namespace std;

int main() {
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

  return 0;
}
