#ifndef ZADKCPP_H
#define ZADKCPP_H

class ZadKcpp {
public:
    // Wirtualna metoda, którą każde zadanie musi nadpisać.
    // Zastąpi ona Twoje dotychczasowe funkcje int main() z pojedynczych zadań.
    virtual void run() = 0; 
    
    // Wirtualny destruktor to dobra praktyka przy polimorfizmie
    virtual ~ZadKcpp() {} 
};

#endif