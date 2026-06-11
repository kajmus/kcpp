// Zadanie 1.2
// --------------------------------------
// Napisać program który zawiera przykłady funkcji z biblioteki cstring (plik: LChar.cc)
// - nazwać program: ZadCharExample.cc

#include <cstdio>
#include <cstring>
#include <cctype>
#include <string>
#include <cstdlib>

#define stricmp strcasecmp
using namespace std;


int main() {
    string liczba = "12345";
    string zdanie = "Długi string złożony z wielu czarów i zaklęć bo kot";
    string slowo = "kot";

    // atol
    printf("atol(\"%s\") = %ld\n", liczba.c_str(), atol(liczba.c_str()));

    // strchr
    printf("strchr(\"%s\", '%c') = %p\n", zdanie.c_str(), 'o', strchr(zdanie.c_str(), 'o'));

    // strcmp
    string a = "abc", b = "abd";
    printf("strcmp(\"%s\",\"%s\") = %d\n", a.c_str(), b.c_str(), strcmp(a.c_str(), b.c_str()));

    // strcoll
    printf("strcoll(\"%s\",\"%s\") = %d\n", a.c_str(), b.c_str(), strcoll(a.c_str(), b.c_str()));

    // strcspn
    printf("strcspn(\"%s\", \"%s\") = %zu\n", zdanie.c_str(), "xyz", strcspn(zdanie.c_str(), "xyz"));


    // strlen
    printf("strlen(\"%s\") = %zu\n", zdanie.c_str(), strlen(zdanie.c_str()));

    // strrchr
    printf("strrchr(\"%s\", '%c') = %p\n", zdanie.c_str(), 'o', strrchr(zdanie.c_str(), 'o'));

    // strspn
    printf("strspn(\"%s\", \"%s\") = %zu\n", "123abc", "1234567890", strspn("123abc", "1234567890"));

    // strstr
    printf("strstr(\"%s\", \"%s\") = %p\n", zdanie.c_str(), "world", strstr(zdanie.c_str(), "world"));


    return 0;
}
