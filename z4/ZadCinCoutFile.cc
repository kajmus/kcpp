// Zadanie 4.2
// --------------------------------------
// Napisz program pokazujący funkcjonalność:
// - wypisywania na ekran,
// - +zapisywanie do strumienia błędów
// //- zapisywania do pliku,
// //- odczytywania z pliku,
// - nazwać program: ZadCinCoutFile.cc

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int liczba;
    
    cout << "daj liczbe większą od zera: ";
    cin >> liczba;

    if (liczba < 0){
        cerr << "zła liczba" << endl;
    }
    ofstream plik("liczba.txt");
    plik << liczba << endl;
    plik.close();

    cout << "zrobiono plik" << endl;
    int temp;
    ifstream plik2("liczba.txt");
    plik2 >> temp;
    cout << "odczytano liczbe: " << temp << endl;

    return 0;
}