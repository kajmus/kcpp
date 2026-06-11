// Zadanie 4.1
// --------------------------------------
// Napisz program z przykładami manipulacji strumieniem cout:
// - setw, setprecision, setfill, fixed, scientific, hex, dec... etc (patrz plik kcpp02.pdf)
// - nazwać program LManipulacjaStrumieniemCout.cc

//   Spraw aby na ekran wypisało to co jest pomiedzy liniami ze znakami =:
//   ==================================================
//   Wynika naszego działania: x.xxxxx jest niepoprawny ale:
//      output:   xx.xxx    T:  x.xxx 
//      output1:   x.xxxx   T: xx.xxxxx
//      output2:   x.xxxx   T: xx.xxxxxx
//      ---------------------------------
//      liczba:  xx.xxxx   T: xx.xxxxxx
//   ==================================================
//   - x.xxxx są wynikami jakiś działań, a nie sztucznie wstawionymi liczbami
//   - ustawienie liczb/wypisanie/sformatowanie wykonać używając manipulatorow strumieniem (setw, setprecision, setfill etc), zamiast " " czy \t



#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a = 1.23456789;
    double b = 3.14159265359;
    double c = 21.374206967;

    double liczba = (a+b+c) * (a+b+c);

    cout << setfill('=')<< setw(50) << "" << endl;

    cout << setfill(' ');
    cout << "Wynika naszego działania: "
         << fixed << setprecision(5)
         << a
         << " jest niepoprawny ale:" << endl;

    cout << setw(10) << "output:"
         << setw(10) << fixed << setprecision(3) << a
         << setw(8) << "T:"
         << setw(8) << c
         << endl;

    cout << setw(10) << "output1:"
         << setw(10) << fixed << setprecision(4) << b
         << setw(8) << "T:"
         << setw(10) << fixed << setprecision(5) << liczba
         << endl;

    cout << setw(10) << "output2:"
         << setw(10) << fixed << setprecision(4) << c
         << setw(8) << "T:"
         << setw(10) << fixed << setprecision(6) << (a+b)
         << endl;

    cout << setw(37) << setfill('-') << "" << endl;

    cout << setfill(' ')
         << setw(10) << "liczba:"
         << setw(10) << fixed << setprecision(4) << liczba
         << setw(8) << "T:"
         << setw(10) << fixed << setprecision(6) << (a+b+c)
         << endl;

    cout << setfill('=')<< setw(50) << "" << endl;

    cout << endl;

    int liczba2 = 255;

    cout << "DEC: " << dec << liczba2 << endl;
    cout << "HEX: " << hex << liczba2 << endl;

    cout << scientific;
    cout << "Scientific: " << liczba << endl;

    return 0;
}