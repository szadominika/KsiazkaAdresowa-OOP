#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa {

   UzytkownikMenedzer uzytkownikMenedzer;
   AdresatMenedzer *adresatMenedzer; // nie mamy danych do tej klasy od razu dlatego tworzymy wskaünik
   const string NAZWA_PLIKU_Z_ADRESATAMI;
   const string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami, string nazwaTymczasowegoPlikuZAdresatami)
        : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami),NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI(nazwaTymczasowegoPlikuZAdresatami)
    {
        adresatMenedzer = NULL; // jezeli pracujemy na wskazniku to ustawiamy w klasie gdzie go tworzymy NULL
    };
    ~KsiazkaAdresowa() // rowniez nalezy stworzyc destruktor, sprzata po danej klasie
    {
        delete adresatMenedzer;
        adresatMenedzer = NULL;
    };

    void  rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wypiszWszystkichUzytkownikow();
    bool czyUzytkownikJestZalogowany();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void usunAdresata();
};

#endif
