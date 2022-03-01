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

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
        : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
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
};

#endif
