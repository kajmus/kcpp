// Zadanie 3.2
// -------------------------------------
// Napisz program do sumowania elementów tablicy za pomocą wskaźników
// Stwórz funkcję suma, która przyjmuje wskaźnik do tablicy liczb całkowitych oraz jej rozmiar, a następnie zwraca sumę jej elementów.
// Nazwa: ZadArytmetykaWskaznikowSuma.cc

#include <iostream>
using namespace std;

int suma(int *arr, int size){
    int sum = 0;
    for (int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[] = {1,2,3};
    int size = sizeof(arr)/sizeof(int);

     cout << "Suma elementow tablicy = "<< suma(arr, size) << endl;

}