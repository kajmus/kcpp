// Zadanie 1.1
// --------------------------------------
// Napisać prosty program z jedną klasą. Wszystko zawarte w jednym pliku: klasa oraz definicje funkcji. Definicje funkcji mogą być w klasie lub poza nią. Klasa oparta o przykład: KviCar.cc
// - nazwać program: ZadClassExample.cc

#include <iostream>

using namespace std;

class Rower {
public:
    void setModel(string model) { fModel = model; }
    string getModel() { return fModel; }
private:
    string fModel;
};    

int main() {
    Rower rower;
    rower.setModel("koministyczny");
    cout << rower.getModel();
    return 0;

}