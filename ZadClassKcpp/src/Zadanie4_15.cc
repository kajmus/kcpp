#include "../include/Zadanie4_15.h"
#include <iostream>
#include <cstdlib>  // dla rand()
#include <ctime>    // dla time()
using namespace std;

void Zadanie4_15::run() {
    cout << "wybierz poziom 1 - łatwy, 2 - trudny: ";
    int poziom;
    cin >> poziom;
    int wylosowana;
    srand(time(0));
    if (poziom == 1) {
        wylosowana = rand() % 50 + 1;
        cout << "Zgadnij liczbe (1-50):" << endl;
        
    } else if (poziom == 2) {
        wylosowana = rand() % 200 + 1;
        cout << "Zgadnij liczbe (1-200):" << endl;

    }else return ;
    int proba, licznik = 0;
    const int MAX = 10;


    while (licznik < MAX) {
        cout << "pruba" << licznik << "/"<< MAX << endl;
        cin >> proba;
        licznik++;

        if (proba < wylosowana) {
            cout << "Za malo! Probuj dalej." << endl;
        } else if (proba > wylosowana) {
            cout << "Za duzo! Probuj dalej." << endl;
        } else {
            cout << "Brawo! Zgadles w " << licznik << " probach." << endl;
            break;  // przerywa pętlę
        }
    }
    cout<< "poprawan liczba to " << wylosowana << endl;

}