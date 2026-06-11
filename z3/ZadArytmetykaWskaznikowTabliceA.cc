// Zadanie 3.8 (LArytmetykaWskaznikowTablice.cc)
// -------------------------------------
// Operacje na tablicy przy użyciu wskaźników
// Napisz program, który:
// - Zadeklaruje statyczną tablicę 10 liczb całkowitych i wypełni ją wartościami od 1 do 10.
// - Używając wskaźników, obliczy i wyświetli sumę elementów tablicy.
// - Znajdzie i wyświetli maksymalny element w tablicy używając arytmetyki wskaźników.
// - Odwróci kolejność elementów w tablicy używając wyłącznie wskaźników (bez użycia indeksów []).
// Nazwać program: ZadArytmetykaWskaznikowTabliceA.cc

#include <iostream>
using namespace std;


int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    int suma = 0;
    int max = *arr;
    int *p = arr;

    for (int i=0;i<size;i++){
        suma+= *p;
        if(*p > max){
            max = *p;
        }
        *p++;
    }
    cout << "suma = "<< suma << endl;
    cout <<"max = "<< max<<endl;
    
    int *l = arr;
    int *r = arr + size -1;
    while (l <r){
        int tmp = *l;
        *l = *r;
        *r = tmp;
        l++;
        r--;
    }

    cout << "odwrocone = ";
    for (int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}