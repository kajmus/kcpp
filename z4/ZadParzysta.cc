// Zadanie 4.7
// --------------------------------------
// Napisz program sprawdzający czy liczba jest parzysta/nieparzysta:
// - trzy funkcje:
//   (a) w jednej sprawdzamy z wykorzystaniem operacji bitowych (&);
//   (b) w drugiej inaczej (eg. modulo)
//   (c) w trzeciej sprawdzenie z użyciem operatora warunkowego zamiast if (lub jako warunek w if: TRUE || FALSE; (... ? 0 : 1))
//   - w kodzie funkcji (a) proszę rozpisać jako komentarz przykładowe sprawdzenie
// - nazwać program: ZadParzysta.cc


#include <iostream>
using namespace std;

bool fooA(int liczba){ 
    // 6  = 0110
    // 1  = 0001
    // ----------
    // &  = 0000
    // jak dostaniemy 0 to liczba jest parzysta
    // jak dostaniemy 1 to liczba jest nieparzysta
    
    return (liczba & 1) == 0; }

bool fooB(int liczba){
    return liczba % 2 == 0;
}
bool fooC(int liczba){
    return (liczba % 2 == 0) ? true : false;
}



int main()
{
    int liczba;

    cout << "liczba: ";
    cin >> liczba;

    cout << (fooA(liczba) ? "parzysta" : "nieparzysta")<<endl;

    cout << (fooB(liczba) ? "parzysta" : "nieparzysta")<<endl;

    cout << (fooC(liczba) ? "parzysta" : "nieparzysta")<<endl;

    cout << endl;

    return 0;
}