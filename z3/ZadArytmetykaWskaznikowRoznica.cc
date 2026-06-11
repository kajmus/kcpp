// Zadanie 3.5
// -------------------------------------
// Napisz program: Różnica między dwoma wskaźnikami
// Stwórz program, który definiuje tablicę 10 liczb całkowitych, a następnie oblicza różnicę między dwoma wskaźnikami wskazującymi na różne elementy tej tablicy.
// Nazwa: ZadArytmetykaWskaznikowRoznica.cc

#include <iostream>
using namespace std;

int main() {
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int* ptr1 = &arr[2];
    int* ptr2 = &arr[5];

    cout << "Wskazniki: " << ptr1 << " " << ptr2 << endl;
    cout << "Roznica = " << ptr2 - ptr1 << endl; 
}