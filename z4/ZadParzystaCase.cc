// Zadanie 4.8 
// --------------------------------------
// Napisz program z użyciem 'switch' wybierajacy do wykonania jedną z trzech funkcji z zadania ZadParzysta.cc:
// - nazwać program: ZadParzystaCase.cc (kopia ZadParzyste do ZadParzysteCase+switch, lub pominięcie ZadParzyste i umieszczenie wszystkiego w ZadParzystaCase)


#include <iostream>
using namespace std;


bool fooA(int liczba){ 
    return (liczba & 1) == 0;
}

bool fooB(int liczba){
    return liczba % 2 == 0;
}

bool fooC(int liczba){
    return (liczba % 2 == 0) ? true : false;
}
int main(){
    int liczba;
    int choice;

    cout << "liczba: ";
    cin >> liczba;
    cout << endl;
    cout << "ktura funckja:1;2;3  ??: ";
    cin >> choice;
    cout<<endl;

    switch(choice){
        case 1:
            cout << (fooA(liczba) ? "parzysta" : "nieparzysta")<<endl;
            break;
        case 2:
            cout << (fooB(liczba) ? "parzysta" : "nieparzysta")<<endl;
            break;
        case 3:
            cout << (fooC(liczba) ? "parzysta" : "nieparzysta")<<endl;
            break;
        default:
            cout << "zly wybur"<<endl;
            break;
    }
    return 0;
}   