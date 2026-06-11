// Zadanie 3.12 (LOperatoryPrzypisania.cc)
// -------------------------------------
// Napisać program z przykładami:
// (1) operatorow arytmetycznych i (2) operatorow przypisania
// (1) i (2) jako osobne funkcje: (1) OperatoryArytmetyczne (2) OperatoryPrzypisania
// - nazwać program: ZadOperatoryPrzypisania.cc

#include <iostream>
using namespace std;

void OperatoryArytmetyczne(){
    int a = 20;
    int b = 5;
    
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
}

void OperatoryPrzypisania(){
    int x = 10;

    cout << "x = " << x << endl;

    x += 5;
    cout << "x += 5 -> " << x << endl;

    x -= 3;
    cout << "x -= 3 -> " << x << endl;

    x *= 2;
    cout << "x *= 2 -> " << x << endl;

    x /= 4;
    cout << "x /= 4 -> " << x << endl;

    x %= 3;
    cout << "x %= 3 -> " << x << endl;
}

int main(){
    OperatoryArytmetyczne();
    OperatoryPrzypisania();
    return 0;
}