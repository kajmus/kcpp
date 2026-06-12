#include <iostream>
#include "include/Zadanie1_2.h"
#include "include/Zadanie2_4.h"
#include "include/Zadanie3_4.h"
#include "include/Zadanie3_15.h"
#include "include/Zadanie4_6.h"
#include "include/Zadanie4_7.h"
#include "include/Zadanie4_12.h"
#include "include/Zadanie4_13.h"
#include "include/Zadanie4_15.h"
#include "include/Zadanie5_6.h"



using namespace std;

int main() {
    int wybor;
    do {
        int iter =1;
        cout << "\n===================================" << endl;
        cout << "       MENU GŁÓWNE PROGRAMU        " << endl;
        cout << "===================================" << endl;
        cout << "Sekcja 1. Operacje wejscia/wyjscia" << endl;
        cout << "  "<<iter++<<". Zadanie 1.2 - Przykłady cstring" << endl;

        cout << "\nSekcja 2. Operacje wejscia/wyjscia" << endl;
        cout << "  "<<iter++<<". Zadanie 2.4 - Klasa punkt i przeciążenie dodawania" << endl;

        cout << "\nSekcja 3. Operacje wejscia/wyjscia" << endl;
        cout << "  "<<iter++<<". Zadanie 3.4 - Przesuwanie elementów tablicy" << endl;
        cout << "  "<<iter++<<". Zadanie 3.15 - Bitowa cos" << endl;

        cout << "\nSekcja 4. Operacje wejscia/wyjscia" << endl;
        cout << "  "<<iter++<<". Zadanie 4.6 - Stałe matematyczne" << endl;
        cout << "  "<<iter++<<". Zadanie 4.7 - Sprawdzanie parzystości" << endl;
        cout << "  "<<iter++<<". Zadanie 4.12 - Silnia" << endl;
        cout << "  "<<iter++<<". Zadanie 4.13 - Ksztalty" << endl;
        cout << "  "<<iter++<<". Zadanie 4.15 - Lotto" << endl;

        cout << "\nSekcja 5. Klasy" << endl;
        cout << "  "<<iter++<<". Zadanie 5.6 - Figury geometryczne" << endl;

        cout << "\n  0. Wyjscie z programu" << endl;
        cout << "===================================" << endl;
        cout << "Wybierz zadanie: ";
        
        cin >> wybor;

        ZadKcpp* zadanie = nullptr; 

        switch(wybor) {
            case 1:
                zadanie = new Zadanie1_2();
                break;
            case 2:
                zadanie = new Zadanie2_4();
                break;
            case 3:
                zadanie = new Zadanie3_4();
                break;
            case 4:
                zadanie = new Zadanie3_15();
                break;
            case 5:
                zadanie = new Zadanie4_6();
                break;
            case 6:
                zadanie = new Zadanie4_7();
                break;
            case 7:
                zadanie = new Zadanie4_12();
                break;
            case 8:
                zadanie = new Zadanie4_13();
                break;
            case 9:
                zadanie = new Zadanie4_15();
                break;
            case 10:
                zadanie = new Zadanie5_6();
                break;
            case 0:
                cout << "Zamykanie programu..." << endl;
                break;
            default:
                cout << "Nieznany wybor! Sprobuj ponownie." << endl;
                break;
        }

        if (zadanie != nullptr) {
            cout << "\n--- URUCHAMIAM ZADANIE ---" << endl;
            zadanie->run(); 
            cout << "--- KONIEC ZADANIA ---\n" << endl;
            
            delete zadanie; 
        }

    } while (wybor != 0);

    return 0;
}