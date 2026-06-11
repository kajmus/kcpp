// Zadanie 3.6
// -------------------------------------
// Napisz program do kopiowanie tablicy przy użyciu wskaźników.
// Napisz funkcję kopiujTablice, która kopiuje jedną tablicę do drugiej, korzystając wyłącznie ze wskaźników.
// Nazwa: ZadArytmetykaWskaznikowKopiowanie.cc

#include <iostream>
using namespace std;

void kopiujTablice(int* arr1, int* arr2, int size){

    for (int i=0; i < size;i++){
        arr2[i] = arr1[i];
    }
}

int main(){
    int arr1[] = {1,2,3};
    int arr2[3];
    int size = sizeof(arr1)/sizeof(int);

    kopiujTablice(arr1,arr2,size);
    cout << "arr2= ";
    for (int i =0; i<size;i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
}