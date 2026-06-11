// Zadanie 3.15 (LBitoweOperatoryLogiczneB.c i ..czneC.cc)
// -------------------------------------
// Proszę napisać samodziely program który jako argument będzie przyjmował tablice 8
// elementową, gdzie na poszczególnych pozycjach tablicy będzie 0 lub 1. Program będzie
// zwracał liczbę, która w formie binarnej będzie miała ustawione 1 na pozycjach odpowiadających
// pozycjom 1 w tablicy. Wystarczy zmodyfikować program LBitoweOperatoryLogiczneC.cc
// - nazwać program: LBitoweOperatoryLogiczneSingleVariable.cc

#include <iostream>
using namespace std;

int main(){
    int arr[8];
    cout<< "podaj 8 liczb 0 lub 1: "<<endl;
    for (int i=0;i<8;i++){
        int a;
        cin >> a;
        if (a == 1){
            arr[i] = 1;
        }
    }
    cout << endl;
    int liczba = 0;
    for (int i=0;i<8;i++){
        if (arr[i] == 1){
        liczba = liczba |(1 << i);
        }

    }
    cout <<"wynik = " <<liczba << endl;
}