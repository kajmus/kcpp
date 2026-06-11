// Zadanie 3.4
// -------------------------------------
// Napisz program do przesunięcie elementów tablicy o jedno miejsce w prawo
// Napisz funkcję przesun, która przesuwa wszystkie elementy tablicy o jedno miejsce w prawo (ostatni element przechodzi na początek), wykorzystując wskaźniki.
// Nazwa: ZadArytmetykaWskaznikowPrzesuniecie.cc

#include <iostream>
using namespace std;

void przesun(int *arr, int size){
    int temp = arr[0];
    int last = arr[size-1];
    for(int i= size -1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = last;
}

int main(){
    int arr[] = {1,2,3,5};
    int size = sizeof(arr)/sizeof(int);

    przesun(arr,size);
    cout << "output: ";
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}