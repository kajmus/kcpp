// Zadanie 1.0
// --------------------------------------
// Napisać krótki program oparty na pliku LTypeEnumerated.cc, zawierający przykład użycia typu enum (scoped lub unscoped, z miesiącami)
// - nazwać program: ZadEnumExample.cc
#include <iostream>
#include <string>
using namespace std;

enum Months {
  january,
  february,
  march,
  april,
  may,
  june,
  july,
  august,
  september,
  october,
  november,
  december
};

enum class Miesiace {
  styczen,
  luty,
  marzec,
  kwiecien,
  maj,
  czerwiec,
  lipiec,
  sierpien,
  wrzesien,
  pazdziernik,
  listopad,
  grudzien
};


int main(){
  Months m1 = february;
  enum Miesiace m2 = Miesiace::luty;
  cout << "unscoped " << m1 << endl;
  cout << "scoped " << static_cast<int>(m2) << endl;
}