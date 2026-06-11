// Zadanie 4.9
// --------------------------------------
// Napisz program pokazujący działanie instrukcji (każda jako osobna funkcja; trzy funkcje od a do c):
// (a) while    (pokazujące while z inkrementacją: i++, ++i)
// (b) do-while (pokazujące do-while z inkrementacją: i++, ++i)
// (c) for
// - wykorzystaj: break, continue, return
// - nazwać program: ZadPetle.cc

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


void fooA(int max, string type){
    int i =0;
    if(type == "++i"){
        while (i < max){
            cout << i << endl;
            if (i == max/4) {
                cout << "continue przy "<< i <<endl;
                i++;
                continue;
            }
            ++i;
        }
    } else if (type == "i++"){
        while (i < max){
            cout << i << endl;
            if (i == max/4) {
                cout << "break przy "<< i <<endl;
                break;
            }
            i++;
        }
    }
}

void fooB(int max, string type){
    int i =0;
    if(type == "++i"){
        do {
            cout<<i<<endl;
            if (i == max/4) {
                cout << "continue przy "<< i <<endl;
                i++;
                continue;
            }
            ++i;
        } while (i <max);
    } else if (type == "i++"){
        do {
            cout<<i<<endl;
            if (i == max/2) {
                cout << "break przy "<< i <<endl;
                break;
            }
            i++;
        } while (i <max);
    }
}

int fooC(int max, int example){
    int i =0;
    if (example == 1){
        for (int i = 0; i < max; i++){
            cout<<i<<endl;
            if (i == max/2) {
                cout << "break przy "<< i <<endl;
                break;
            }
        }
    }else if (example == 2){
        for (int i = 0; i < max; i++){
            cout<<i<<endl;
            if (i == max/2) {
                cout << "continue przy "<< i <<endl;
                continue;
            }
        }
    }else if (example == 3){
        for (int i = 0; i < max; i++){
            cout<<i<<endl;
            if (i == max/2) {
                cout << "return przy "<< i <<endl;
                return i;
            }
        }
    }
    return i;
}
int main(){
    cout << "while ++i"<<endl;
    fooA(10,"++i");
    cout << "while i++"<<endl;
    fooA(10,"i++");
    cout << "do while ++i"<<endl;
    fooB(10,"++i");
    cout << "do while i++"<<endl;
    fooB(10,"i++");
    cout << "for"<<endl;
    fooC(10,1);
    cout << "for"<<endl;
    fooC(10,2);
    cout << "for"<<endl;
    fooC(10,3);
    return 0;
}