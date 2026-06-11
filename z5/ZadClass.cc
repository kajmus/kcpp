// Zadanie 5.1
// --------------------------------------
// Napisz prosty program z klasą
// - metody deklarowane i definiowane w klasie
// - metody deklarowane w klasie, a definiowane poza klasą
// - zastosowanie 3 sekcji: public, private, protected
// - zmienne w każdej z sekcji
// - funkcje, które mają dostęp do zmiennych z sekcji protected i private
// - funkcje inline
// - nazwij program: ZadClass.cc

#include <iostream>
using namespace std;

class Student 
{
public:
    string imie;

    void printImie(){
        cout << "imie: "<<imie << endl;
    }

    void setDane(string i, int w, double s);
    void printDane();

    inline int getWiek(){
        return wiek;
    }

    void printAll(){
        cout << "imie: "<<imie << endl;
        cout << "wiek: "<<wiek << endl;
        cout << "srednia: "<<srednia << endl;
    }

protected:
    int wiek;

    void printWiek(){
        cout << "wiek: "<<wiek << endl;
    }
private:
    double srednia;

    inline double getSrednia(){
        return srednia;
    }

};

void Student::setDane(string i, int w, double s){
    imie = i;
    wiek = w;
    srednia = s;
}

void Student::printDane(){
    printImie();
    printWiek();
    cout << "srednia: "<<srednia << endl;
}

int main(){
    Student s;

    s.setDane("kamil", 23, 5.0);

    s.printDane();

    cout <<endl;
    s.printAll();
    cout <<endl;

    s.printImie();
    //s.printWiek(); // nie nie wyswietla da się skompilować ale mi IDE krzyczy o to wiec zakomantowane
    return 0;

}