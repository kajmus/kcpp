// Zadanie 3.11 (LArytmetykaWskaznikow.cc)
// -------------------------------------
// Co robią poniższe operacje? Napisać program który pokazuje ich działanie.
// 1. Funkcja1()
// p++;
// ++p;
// ++*p;
// ++(*p);
// ++*(p);
// *p++;
// (*p)++;
// *(p)++;
// *++p;
// *(++p);

// oraz (Funkcja2()) w analogii do LArytmetykaWzkaznikowZmienne.cc aby wypisywał na ekran:

// 1.  A, B, C: 0  0   0
// 2.  A, B, C: 0  10  0
// 3.  A, B, C: 0  10  20
// 4.  A, B, C: 0  30  20
// 5.  A, B, C: 40 30  20
// 6.  A, B, C: 40 50  20
// 7.  A, B, C: 40 50  60
// 8.  A, B, C: 40 70  60
// 9.  A, B, C: 80 70  60
// 10. A, B, C: 80 90  60

// przy początkowych wartościach zmiennych: int a = 0, b = 0, c = 0;
// - nazwać program: ZadArytmetykaWskaznikow.cc

#include <iostream>
using namespace std;

int Funkcja1(){
    int arr[] = {1,2,3};
    int *p = arr;
    // p++;
    cout << "p++ = " << p++ << endl;
    // ++p;
    cout << "++p = " << ++p << endl;
    // ++*p;
    cout << "++*p = " << ++*p << endl;
    // ++(*p);
    cout << "++(*p) = " << ++(*p) << endl;
    // ++*(p);
    cout << "++*(p) = " << ++*(p) << endl;
    // *p++;
    cout << "*p++ = " << *p++ << endl;
    // (*p)++;
    cout << "(*p)++ = " << (*p)++ << endl;
    // *(p)++;
    cout << "*(p)++ = " << *(p)++ << endl;
    // *++p;
    cout << "*++p = " << *++p << endl;
    // *(++p);
    cout << "*(++p) = " << *(++p) << endl;
    return 0;
}

void print(int i,int a, int b, int c){
    cout << i << ". A, B, C: " << a << "  " << b << "  " << c << endl;
}

void Funkcja2(){
    int a = 0, b = 0, c = 0;
    int i = 1;
    int *p;
    print(i++, a, b, c);
    p = &b;
    *p = 10;
    print(i++, a, b, c);
    p = &c;
    *p = 20;
    print(i++, a, b, c);
    p = &b;
    *p = 30;
    print(i++, a, b, c);
    p = &a;
    *p = 40;
    print(i++, a, b, c);
    p = &b;
    *p = 50;
    print(i++, a, b, c);
    p = &c;
    *p = 60;
    print(i++, a, b, c);
    p = &b;
    *p = 70;
    print(i++, a, b, c);
    p = &a;
    *p = 80;
    print(i++, a, b, c);
    p = &b;
    *p = 90;
    print(i++, a, b, c);

}
int main()
{   
    Funkcja1();
    Funkcja2();
    return 0;
}