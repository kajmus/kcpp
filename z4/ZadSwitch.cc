// Zadanie 4.10
// --------------------------------------
// Napisz program wykorzystujący instrukcje 'switch' gdzie:
// - zamiast pojedynczego znaku będzie sprawdzane całe słowo (czy da się to zrobić bezpośrednio?)
// - program może być uszczegółowieniem/modyfikacją (zrobić kopie pliku i zmienić kopie) tego co jest w ZadParzysteCase.cc
// - nazwać program: ZadSwitch.cc



// switch case przyjmuje tylko in albo enum więc nie da się na stringach

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
    string fun;

    cout << "liczba: ";
    cin >> liczba;
    cout << endl;
    cout << "ktura funckja:fooA;fooB;fooC  ??: ";
    cin >> fun;
    cout<<endl;

    if (fun == "fooA"){
        choice = 1;
    }else if (fun == "fooB"){
        choice = 2;
    }else if (fun == "fooC"){
        choice = 3;
    }
    

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