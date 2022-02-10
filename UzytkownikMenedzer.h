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

using namespace std;

class UzytkownikMenedzer {

        int idZalogowanegoUzytkownika;
        vector <Uzytkownik> uzytkownicy;

        Uzytkownik podajDaneNowegoUzytkownika();
        int pobierzIdNowegoUzytkownika();
        bool czyIstniejeLogin(string login);
        PlikZUzytkownikami plikZUzytkownikami;


public:
       void rejestracjaUzytkownika();
       void wypiszWszystkichUzytkownikow();



};

#endif
