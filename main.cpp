#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();
   // ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
   // ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wypiszWszystkichAdresatow();
    //ksiazkaAdresowa.wypiszWszystkichAdresatow();

    ksiazkaAdresowa.wylogowanieUzytkownika();

     ksiazkaAdresowa.logowanieUzytkownika();
    // ksiazkaAdresowa.dodajAdresata();




    return 0;
}
