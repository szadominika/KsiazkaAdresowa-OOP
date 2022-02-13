#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <cstdlib>

#include "Uzytkownicy.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZUzytkownikami {

        string nazwaPlikuZUzytkownikami;
        fstream plikTekstowy;

        bool czyPlikJestPusty();
        string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
        Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    PlikZUzytkownikami();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    void wczytajUzytkownikowZPliku(vector <Uzytkownik> &uzytkownicy);

};

#endif
