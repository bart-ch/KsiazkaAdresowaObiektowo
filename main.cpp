#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazka;
    ksiazka.wypiszWszystkichUzytkownikow();
    ksiazka.logowanieUzytkownika();
   // ksiazka.rejestracjaUzytkownika();
   // ksiazka.rejestracjaUzytkownika();
   // ksiazka.wypiszWszystkichUzytkownikow();
   ksiazka.zmianaHaslaZalogowanegoUzytkownika();

    return 0;
}
