// Zadanie 3.10 (LArytmetykaWskaznikowTablice.cc)
// -------------------------------------
// Pokazać w jakiej kolejności jest adresowana tablica dwuwymiarowa (Tab[3][3]).
// Wypisać adresy poszczególnych elementów.
// - nazwać program: ZadArytmetykaWskaznikowTablica2D.cc

#include <iostream>
using namespace std;

int main(){
    int tab[3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}