#include <iostream>
// Dołączamy nagłówki naszych zadań
#include "include/Zadanie5_6.h"
#include "include/Zadanie4_13.h"

using namespace std;

int main() {
    int wybor;
    
    do {
        cout << "\n===================================" << endl;
        cout << "       MENU GŁÓWNE PROGRAMU        " << endl;
        cout << "===================================" << endl;
        cout << "Sekcja 4. Operacje wejscia/wyjscia" << endl;
        cout << "  1. Zadanie 4.13 - Rysowanie ksztaltow (kwadrat, trojkat, piramida)" << endl;
        cout << "\nSekcja 5. Klasy" << endl;
        cout << "  2. Zadanie 5.6 (Obowiazkowe) - Figury geometryczne i metoda abstrakcyjna" << endl;
        cout << "\n  0. Wyjscie z programu" << endl;
        cout << "===================================" << endl;
        cout << "Wybierz zadanie: ";
        
        cin >> wybor;

        // Tworzymy wskaźnik bazowy dla polimorfizmu
        ZadKcpp* zadanie = nullptr; 

        switch(wybor) {
            case 1:
                zadanie = new Zadanie4_13();
                break;
            case 2:
                zadanie = new Zadanie5_6();
                break;
            case 0:
                cout << "Zamykanie programu..." << endl;
                break;
            default:
                cout << "Nieznany wybor! Sprobuj ponownie." << endl;
                break;
        }

        // Jeśli użytkownik wybrał poprawne zadanie, uruchamiamy je
        if (zadanie != nullptr) {
            cout << "\n--- URUCHAMIAM ZADANIE ---" << endl;
            zadanie->run(); 
            cout << "--- KONIEC ZADANIA ---\n" << endl;
            
            // Sprzątamy pamięć
            delete zadanie; 
        }

    } while (wybor != 0);

    return 0;
}