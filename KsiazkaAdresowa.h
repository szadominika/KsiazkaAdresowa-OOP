#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa {

   UzytkownikMenedzer uzytkownikMenedzer;
  // AdresatMenedzer adresatMenedzer;


public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami) {
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
  //  adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    };



    void  rejestracjaUzytkownika();
    int logowanieUzytkownika();
    int wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wypiszWszystkichUzytkownikow();

   // void dodajAdresata();
};

#endif
