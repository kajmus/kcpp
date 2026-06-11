// Zadanie 5.3
// --------------------------------------
// Pokaż działanie uni (niebezpieczenstwa, bledy)
// - nazwij program: ZadUnia.cc

#include <iostream>
using namespace std;

union Student {
    int wiek;
    char plec;
    double srednia;
};

int main(){
    Student s;

    cout << "rozmiar uni"<< sizeof(s) << endl;

    s.wiek = 23;
    cout <<"wiek " <<s.wiek << endl;

    s.plec = 'm';

    cout << "plec "<<s.plec << endl;
    cout <<"wiek po przypisaniu plci " <<s.wiek << endl;

    s.srednia = 5.5;
    cout << "srednia "<<s.srednia << endl;
    cout << "wiek po przypisaniu sredniej " <<s.wiek << endl;
    cout << "plec po przypisaniu sredniej " <<s.plec << endl;

    return 0;
}