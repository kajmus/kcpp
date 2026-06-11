// Zadanie 5.2
// --------------------------------------
// Stwórz plik z działająca strukturą:
// - deklaracja,
// - definicja obiektów (w dowolny sposób):
//   - wywołanie,
//   - zmiana wartości,
//   - odczyt wartości,
//   // - czy można stworzyć konstruktor (inicjalizacja wartości poczatkowych - standard, lista inicjalizacyjna)
// - nazwij program: ZadStruct.cc

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string imie;
    int wiek;
    double srednia;

    Student(){
        imie = "x";
        wiek = 0;
        srednia = 0.0;
    }

    Student (string i, int w, double s){
        imie = i;
        wiek = w;
        srednia = s;
    }
};


int main()
{
    Student s1;

    cout << "s1: " << endl;
    cout << "Imie: " << s1.imie << endl;
    cout << "Wiek: " << s1.wiek << endl;
    cout << "Srednia: " << s1.srednia << endl;

    s1.imie = "Kamil";
    s1.wiek = 23;
    s1.srednia = 5.5;

    cout << "s1 zmianione:" << endl;
    cout << "Imie: " << s1.imie << endl;
    cout << "Wiek: " << s1.wiek << endl;
    cout << "Srednia: " << s1.srednia << endl;

    Student s2("Kaim", 100, 6.0);

    cout << "s2:" << endl;
    cout << "Imie: " << s2.imie << endl;
    cout << "Wiek: " << s2.wiek << endl;
    cout << "Srednia: " << s2.srednia << endl;

    return 0;
}