// Zadanie 3.7 (LArytmetykaWskaznikowZmienne.cc)
// -------------------------------------
// Kierunek adresowania pamięci 
// - wyjaśnić w komentarzu do programu podającego przykład:
// - wypisywanie adresów deklarowanych zmiennych
// - nazwać program: ZadAdresowaniePamieci.cc

#include <iostream>
using namespace std;

// zmienne lokalne wrzucane są na stos gdzie adresowanę śa w kierunku malejącym
// wniosek jest taki że zmienne deklarowanre póżniej będa miały mniejszy adres
// niże te na pocżatku
// Adres zmiennej A: 0x7ffdc4759edc         dec: 140727899496156
// Adres zmiennej B: 0x7ffdc4759ed8         dec: 140727899496152
// Adres zmiennej C: 0x7ffdc4759ed4         dec: 140727899496148

int main()
{
    int a;
    int b;
    int c;
    float x;
    double y;

    cout << "Adres zmiennej a: " << &a << endl;
    cout << "Adres zmiennej b: " << &b << endl;
    cout << "Adres zmiennej c: " << &c << endl;
    cout << "Adres zmiennej x: " << &x << endl;
    cout << "Adres zmiennej y: " << &y << endl;

    return 0;
}