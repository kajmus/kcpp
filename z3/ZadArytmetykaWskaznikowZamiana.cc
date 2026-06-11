// Zadanie 3.1
// -------------------------------------
// Napisz program do zamiana miejscami dwóch liczb za pomocą wskaźników
// Napisz funkcję zamien(int* a, int* b), która zamienia miejscami wartości przechowywane pod adresami a i b.
// Nazwa: ZadArytmetykaWskaznikowZamiana.cc

#include <iostream>
using namespace std;

void zamien(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5, b = 10;
    zamien(&a, &b);
    cout << "a: " << a << ", b: " << b << endl;
    return 0;
}