// Zadanie 1.4
// --------------------------------------
// Napisać program który zawiera:
// - funkcję main
// - 5 innych funkcji, z czego dwie zadeklarowane jako: extern "C"
// - dodatkowo do wykonania w późniejszej cześci kursu: wywołując program decydujemy, które z funkcji mają zostać wykonane przez podanie tego w liście argumentów przekazanych do funkcji main
// - nazwać program: ZadMainExample.cc


#include <iostream>
#include <string.h>


extern "C" void func1() {
    printf("func1\n");
}


extern "C" void func2() {
    printf("func2\n");
}


void func3(void){
    std::cout <<"func3\n"<< std::endl;
}


void func4(void){
    std::cout <<"func4\n"<< std::endl;
}

void func5(void){
    std::cout <<"func5\n"<< std::endl;
}


int main(int argc, char* argv[]) {
    for (int i=1; i<argc; i++){
        std::string arg = argv[i]; 
        if (arg == "1") func1();
        if (arg == "2") func2();
        if (arg == "3") func3();
        if (arg == "4") func4();
        if (arg == "5") func5();
    }
    return 0;
}