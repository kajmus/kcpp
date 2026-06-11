
// Zadanie 4.11
// --------------------------------------
// Napisz program pokazujący zastosowanie dyrektywy preprocesora:
//   '#ifdef' (#else)
//   '#ifndef'
// oraz
//   '#define':
//   (a) użycie makra
//   (b) uzycie '#' i '##'
//   (a) i (b) stwórz także dla porównania bez dyrektywy preprocesora
// - nazwać program: ZadPreprocesor.cc



#include <iostream>
#include <string>

using namespace std;

#define SUMA(x, y) (x + y)
#define NAPIS(x) #x
#define POLACZ(a,b) a##b

#define TRYB_TESTOWY



#ifndef WERSJA
#define WERSJA "1"
#endif

int sumaF(int x, int y) {return x + y;}

string napisF(const string& txt){return txt;}

int main(){
    int a = 5;
    int b = 10;

    cout << "makro" << endl;
    cout << "SUMA(" << a << "," << b<<") = "
         << SUMA(a,b) << endl;

    cout << "sumaF(" << a << ","<<b<<") = "
         << sumaF(a,b) << endl;

    cout << "#" << endl;
    cout << NAPIS(To_jest_tekst) << endl;

    cout << napisF("To_jest_tekst") << endl;

    cout << "##" << endl;

    int liczba1 = 50;

    cout << "wartosc liczba1 = "<<  POLACZ(liczba,1) << endl;


    #ifdef TRYB_TESTOWY
        cout << "tryb testowy." << endl;
    #else
        cout << "tryb normlany." << endl;
    #endif

    cout << "wersja " << WERSJA << endl;

    return 0;
}

