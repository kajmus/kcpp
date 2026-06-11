// Zadanie 3.3
// -------------------------------------
// Napisz program znajdujący największy element w tablicy przy użyciu wskaźników
// Napisz funkcję maxElement, która przyjmuje wskaźnik na tablicę liczb oraz jej rozmiar i zwraca wskaźnik do największego elementu.
// Nazwa: ZadArytmetykaWskaznikowZnajdowanie.cc

#include <iostream>
using namespace std;

int* maxElement(int *arr, int size){
    int* max = arr;
    for (int i=1;i<size;i++){
        if (*max < arr[i]){
            *max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {1,2,3,5};
    int size = sizeof(arr)/sizeof(int);
    int *max = maxElement(arr,size);
    cout << "maxElement = "<< *max << endl;
    cout << "maxElement adres = "<< max << endl;

}