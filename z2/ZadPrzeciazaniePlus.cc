// Zadanie 2.4 (przeciążanie operatora +)
// --------------------------------------
// Przeciążenie operatora + dla klasy Punkt
// Stwórz klasę Punkt przechowującą współrzędne (x, y). Przeciąż operator +, tak aby można było dodawać do siebie dwa obiekty klasy Punkt.
// Nazwa: ZadPrzeciazaniePlus.cc

#include <iostream>
using namespace std;

class Punkt {
    private:
        int x;
        int y;
    public:
    Punkt(int xx=0, int yy=0){
        x = xx;
        y = yy;
    }

    Punkt operator+(const Punkt& p){
        return Punkt(x +p.x, y +p.y);
    }

    void printP(){
        cout << x << ", " << y << endl;
    }
};

int main(){
    Punkt p1(-1,0);
    Punkt p2(1,2);
    Punkt p3(3,2);

    Punkt p4 = p1+p2;
    Punkt p5 = p2+p3;

    p1.printP();
    p2.printP();
    p3.printP();
    cout << "p1 +p2"<< endl;
    p4.printP();
    cout << "p2 +p3"<< endl;
    p5.printP();
    return 0;
}