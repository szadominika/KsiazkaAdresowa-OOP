#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownicy.h"
#include "MetodyPomocnicze.h"
#include "PlikZUzytkownikami.h"
#include "AdresatMenedzer.h"

using namespace std;

class UzytkownikMenedzer {

        int idZalogowanegoUzytkownika;
        int idOstatniegoAdresata;

        vector <Uzytkownik> uzytkownicy;

        Uzytkownik podajDaneNowegoUzytkownika();
        int pobierzIdNowegoUzytkownika();
        bool czyIstniejeLogin(string login);

        PlikZUzytkownikami plikZUzytkownikami;
         AdresatMenedzer adresatMenedzer;

public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {};
       void rejestracjaUzytkownika();
       void wczytajUzytkownikowZPliku();
       int logowanieUzytkownika();
       int wylogowanieUzytkownika();
       void zmianaHaslaZalogowanegoUzytkownika();
       void wypiszWszystkichUzytkownikow();
       void wypiszWszystkichAdresatow();
       int dodajAdresata();
       void wczytajAdresatowZalogowanegoUzytkownikaZPliku();



};

#endif
