#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    ksiazkaAdresowa.dodajAdresata();
     ksiazkaAdresowa.dodajAdresata();
    //ksiazkaAdresowa.dodajAdresata();
   //  ksiazkaAdresowa.dodajAdresata();
      //ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wypiszWszystkichAdresatow();

   // ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.wylogowanieUzytkownika();
     ksiazkaAdresowa.logowanieUzytkownika();
      ksiazkaAdresowa.dodajAdresata();
   // ksiazkaAdresowa.wylogowanieUzytkownika();

    // ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    // ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    return 0;
}
