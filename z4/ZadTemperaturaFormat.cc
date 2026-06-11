// Zadanie 4.5
// --------------------------------------
// Napisz program, który wyświetli tabelę konwersji temperatur z Celsjusza na Fahrenheita dla wartości od -10 do 10 stopni C (co 5 stopni) w formacie:

// Celsjusz   Fahrenheit
// -------    ---------
//   -10        14.00
//    -5        23.00
//     0        32.00
//     5        41.00
//    10        50.00

// - Użyj fixed i setprecision dla temperatur w Fahrenheitach
// - Liczby wyświetl z wiodącymi spacjami (dodatnie) lub minusem (ujemne)
// - Wyrównaj liczby do prawej w kolumnach
// - nazwij program: ZadTemperaturaFormat.cc
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Celsjusz   Fahrenheit" << endl;
    cout << "--------   ---------" << endl;

    for (int c = -10; c <= 10; c += 5) {
        double f = c * 9.0 / 5.0 + 32.0;

        cout << setw(7) << c
             << setw(13) << fixed << setprecision(2) << f
             << endl;
    }

    return 0;
}