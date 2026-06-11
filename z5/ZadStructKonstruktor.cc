// Zadanie 5.4
// --------------------------------------
// Stwórz klase (program: ZadKlasaKonstruktor.cc) oraz structure (program: ZadStructKonstruktor.cc) z przykładami konstruktorów i 
// inicializacją zmiennych:
// - domyślny konstruktor,Co
// - domyślny destruktor,
// - konstruktor z niepustą liczbą zmiennych argumentów
// - inicjalizacja zmiennych:
//   - 'standardowa',
//   - inicjalizacyjna za pomocą listy inicjalizacyjnej

#include <iostream>
#include <string>
using namespace std;


struct Student{
    string imie;
    int wiek;
    Student(){
        imie = "x";
        wiek = 0;
    }
    Student(string i, int w){
        imie = i;
        wiek = w;
    }
    ~Student() = default;
    void print(){
        cout << "imie: "<<imie << endl;
        cout << "wiek: "<<wiek << endl;
    }
};

int main(){
    Student s;
    s.print();
    Student s1("Kamil", 23);
    s1.print();
}
