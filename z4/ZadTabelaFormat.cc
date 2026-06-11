// Zadanie 4.4
// --------------------------------------
// Napisz program, który wyświetli tabelę produktów w następującym formacie:

// | Nazwa          | Cena    | Ilosc |
// |----------------|---------|-------|
// | Chleb          |   4.99  |    5  |
// | Mleko          |   3.20  |   10  |
// | Jajka (10 szt) |   8.50  |    3  |

// - Użyj manipulatorów setw, left i right do wyrównania kolumn
// - Ceny wyświetl z dokładnością do 2 miejsc po przecinku
// - Szerokość kolumn: Nazwa (15 znaków), Cena (8 znaków), Ilosc (7 znaków)
// - nazwij program: ZadTabelaFormat.cc

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

int main() {
    stringstream dane;

    dane << "Chleb 4.99 5\n";
    dane << "Mleko 3.20 10\n";
    dane << "\"Jajka_(10_szt)\" 8.50 3\n";

    cout << "| "
         << left << setw(15) << "Nazwa"
         << "| "
         << right << setw(8) << "Cena"
         << " | "
         << setw(7) << "Ilosc"
         << " |" << endl;

    cout << "|" << string(16, '-')
         << "|" << string(10, '-')
         << "|" << string(9, '-')
         << "|" << endl;

    string nazwa;
    double cena;
    int ilosc;

    while (dane >> nazwa >> cena >> ilosc) {
        for (char &c : nazwa) {
            if (c == '_')
                c = ' ';
        }

        if (nazwa.front() == '"' && nazwa.back() == '"') {
            nazwa = nazwa.substr(1, nazwa.size() - 2);
        }

        cout << "| "
             << left << setw(15) << nazwa
             << "| "
             << right << fixed << setprecision(2)
             << setw(8) << cena
             << " | "
             << setw(7) << ilosc
             << " |" << endl;
    }

    return 0;
}