// Zadanie 1.3
// --------------------------------------
// Napisać program (z zajęć) o treści zadanej w pliku LString.cc
// - nazwać program: ZadStringExample.cc


 /* Zadanie podczas zajec
   *   Napisz funkcje (osobny program) w ktorym zadeklarujesz string i uzyjesz
   * na nim funkcji manipulacyjnych:
   *   1. empty()     Zwraca wartosc true jezeli napis jest pusty.
   *   2. size(),length()     Zwraca ilosc znakow w napisie.
   *   3. at()     Zwraca znak o podanym polozeniu, tak jak operator [], z tym
   * ze ta metoda jest bezpieczniejsza - wyrzuca wyjatek w przypadku wyjscia
   * poza zakres stringa.
   *   4. clear()     Usuwa wszystkie znaki z napisu.
   *   5. erase(...)     Usuwa wybrane znaki.
   *   6. find(...)     Znajduje podciag w ciagu, sa tez bardziej rozbudowane
   * funkcje tego typu.
   *   7. swap(...)     Zamienia miejscami dwa stringi, a staje sie b, a b staje
   * sie a.
   *   8. substr(...)     Zwraca podciag na podstawie indeksu poczatkowego i
   * dlugosci podciagu.
   *   9. append(...) */

#include <iostream>
#include <string>
using namespace std;


int main(){
    string tekst = "I use Arch btw";
    string temp = "";
    string napis = "Arch";
    cout << tekst <<endl; 
    cout<<"temp=tekst"<<endl;
    cout<<"napis=Arch"<<endl;
    cout<< "tekst.empty()="<< tekst.empty()<<endl;
    cout<<"tekst.size()="<<tekst.size()<<endl;
    cout<<"tekst.length()="<<tekst.length()<<endl;
    cout<<"tekst.at(13)="<<tekst.at(13)<<endl;
    temp = tekst;
    temp.clear();
    cout<< "temp.clear() = " << temp << endl;
    temp = tekst;
    temp.erase(0,5);
    cout<< "temp.erase(0,5) = " << temp << endl;
    cout<< "tekst.find(use)="<< tekst.find("use") << endl;
    temp = tekst;
    temp.swap(napis);
    cout<< "temp.swap(napis)=" <<temp <<endl;
    temp = tekst.substr(1,4);
    cout<< "temp.substr(1,4)=" <<temp <<endl;
    temp = tekst;
    temp.append(napis);
    cout<< "temp.append(napis)=" <<temp <<endl;




    return 0;
}