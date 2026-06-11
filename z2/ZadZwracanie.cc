// Zadanie 2.1
// --------------------------------------
// Zadanie: Napisać program z czterema funkcjami z których każda zwraca inaczej:
// 1. Przez wartość
// 2. Przez referencje
// 3. Przez wskaźnik
// 4. Tablice (proszę się zastanowić o co tak naprawę chodzi)
// - nazwać program: ZadZwracanie.cc

#include <iostream>
using namespace std;


int fValue(){
    return 10;
}

int& fRef(){
    static int x = 20;
    return x;
}

int* fPtr(){
    static int x = 30;
    return &x;
}

int* fArray(){
    static int arr[3]= {1,2,3};
    return arr; 
}

int main(){
    int val = fValue();
    std::cout << "przez wartość: " << val << std::endl;

    int& ref = fRef();
    std::cout << "przez referencje przed zmianą: " << ref << std::endl;
    ref = 50;  
    std::cout << "przez referencje po zmianie: " << fRef() << std::endl;

    int* ptr = fPtr();
    std::cout << "przez pointer przed zmianą: " << *ptr << std::endl;
    *ptr = 60;
    std::cout << "przez pointer po zmianie: " << *fPtr() << std::endl;

    int* arr = fArray();
    std::cout << "array : ";
    for (int i = 0; i < 3; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}