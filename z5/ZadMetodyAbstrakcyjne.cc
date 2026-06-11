// Zadanie 5.6
// --------------------------------------
// Bazując na pliku LClassMetodyAbstrakcyjne.cc stwórz program który oblicza:
// - obwód, pole powierzchni
// dla:
// - kwadrat, trójkąt, prostokąt, koło (jako klasy dziedziczące po klasie abstrakcyjnej Figura),
// oraz funkcja Dystans (dodatkowo w klasie Koło): Jeśli rząd podaje, że na każdego obywatela w sklepie (kościele etc) przypada X metrów kwadratowych (argument przekazywany do funkcji) to w jakiej odległości (promieniu - to ma funkcja Dystans zwracać) może znaleźć się następna osoba.
// Nazwij program: ZadMetodyAbstrakcyjne.cc 

#include <iostream>
#include <cmath>
using namespace std;

class Figura {
public:
    virtual double Pole() = 0;
    virtual double Obwod() = 0;
    virtual void print() = 0;

    virtual ~Figura() {}
};

class Kwadrat : public Figura {
private:
    double a;

public:
    Kwadrat(double bok){
        a = bok;
    }

    double Pole() {
        return a * a;
    }

    double Obwod() {
        return 4 * a;
    }
    void print(){
        cout << "kwadrat" << endl;
    }

};

class Prostokat : public Figura {
private:
    double a, b;

public:
    Prostokat(double bokA, double bokB) {
        a = bokA;
        b = bokB;
    }

    double Pole() {
        return a * b;
    }

    double Obwod() {
        return 2 * (a + b);
    }

    void print() {
        cout << "prostokat" << endl;
    }
};

class Trojkat : public Figura {
private:
    double a, b, c;

public:
    Trojkat(double bokA, double bokB, double bokC){
        a = bokA;
        b = bokB;
        c = bokC;
    }
        

    double Obwod() {
        return a + b + c;
    }

    double Pole() {
        double p = Obwod() / 2.0;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    void print() {
        cout << "trojkat" << endl;
    }
};

class Kolo : public Figura {
private:
    double r;
    const double PI = 3.141592653589793;

public:
    Kolo(double promien) {
        r = promien;
    }

    double Pole() {
        return PI * r * r;
    }

    double Obwod() {
        return 2 * PI * r;
    }

    void print() {
        cout << "kolo" << endl;
    }

    double Dystans(double x) {
        return sqrt(x / PI);
    }
};

int main(){
    Figura *kwadrat = new Kwadrat(10);
    kwadrat->print();
    cout << "pole: " << kwadrat->Pole() << endl;
    cout << "obwod: " << kwadrat->Obwod() << endl;

    Figura *prostokat = new Prostokat(10, 20);
    prostokat->print();
    cout << "pole: " << prostokat->Pole() << endl;
    cout << "obwod: " << prostokat->Obwod() << endl;

    Figura *trojkat = new Trojkat(3, 4, 5);
    trojkat->print();
    cout << "pole: " << trojkat->Pole() << endl;
    cout << "obwod: " << trojkat->Obwod() << endl;

    Kolo *kolo = new Kolo(10);
    double x = 2.5;
    kolo->print();
    cout << "pole: " << kolo->Pole() << endl;
    cout << "obwod: " << kolo->Obwod() << endl;
    cout << "dystans: " << kolo->Dystans(x) << endl;

    delete kwadrat;
    return 0;
}