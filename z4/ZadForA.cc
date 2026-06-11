// Zadanie 4.11
// -------------------------------------
// Zmodyfikuj program LFor.cc, aby wypisywał liczby nieparzyste zamiast parzystych.
// Dodaj kolejną pętlę, która wypisze liczby podzielne przez 7.
// Nazwij program: ZadStudent/ZadForA.cc

#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Podaj liczbe n: ";
  cin >> n;

  cout << "Liczby nieparzyste od 1 do " << n << ":" << endl;
  for (int i = 1; i <= n; i++) {
    if (i & 1 == 1) {
      cout << i << " ";
    }
  }

  cout << "\nLiczby podzielne przez 3 i 5 od 1 do " << n << ":" << endl;
  for (int i = 1; i <= n; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      cout << i << " ";
    }
  }
  cout << "\nLiczby podzielne przez 7 od 1 do " << n << ":" << endl;
  for (int i = 1; i <= n; i++) {
    if (i % 7 == 0) {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}
