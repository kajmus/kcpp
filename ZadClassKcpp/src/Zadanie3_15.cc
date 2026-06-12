#include "../include/Zadanie3_15.h"
#include <iostream>
using namespace std;

void Zadanie3_15::run(){
    int arr[8] = {0};
    cout<< "podaj 8 liczb 0 lub 1: "<<endl;
    for (int i=0;i<8;i++){
        int a;
        cin >> a;
        if (a == 1){
            arr[i] = 1;
        } else{
            arr[i] = 0;
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