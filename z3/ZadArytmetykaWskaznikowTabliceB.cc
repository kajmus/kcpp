// Zadanie 3.9 (LArytmetykaWskaznikowTablice.cc)
// -------------------------------------
// Operacje na dwóch tablicach z użyciem wskaźników
// Napisz program, który:
// - Zadeklaruje dwie tablice liczb zmiennoprzecinkowych o rozmiarze 5.
// - Wypełni pierwszą tablicę wartościami podanymi przez użytkownika, a drugą tablicę wartościami pierwszej tablicy pomnożonymi przez 2 (używając wyłącznie wskaźników).
// - Stworzy trzecią tablicę, która będzie zawierała sumy odpowiadających sobie elementów z dwóch pierwszych tablic (używając arytmetyki wskaźników).
// - Wyświetli zawartość wszystkich trzech tablic, używając wskaźników do iteracji po elementach.
// Nazwać program: ZadArytmetykaWskaznikowTabliceB.cc

#include <iostream>
using namespace std;

int main(){
    float ar1[5], ar2[5], ar3[5];
    float *p1 =ar1;
    float *p2 =ar2;
    float *p3 =ar3;
    cout << "daj 5 liczb "<< endl;
    for(int i=0;i<5;i++){
        cin >> *(p1 +i);
        *(p2 +i) = *(p1 +i) * 2;
    }

    for (int i=0;i<5;i++){
        *(p3 +i) = *(p1 +i) + *(p2 +i);
    }


    cout <<"ar1 = ";
    for (int i=0;i<5;i++){
        cout << ar1[i] << " ";
    }
    cout << endl;
    cout << "ar2 = ";
    for (int i=0;i<5;i++){
        cout << ar2[i] << " ";
    }
    cout << endl;
    cout << "ar3 = ";
    for (int i=0;i<5;i++){
        cout << ar3[i] << " ";
    }
    cout << endl;
    return 0;
}