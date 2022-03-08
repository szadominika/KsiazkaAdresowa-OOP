#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <cstdlib>

#include "Uzytkownicy.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;



class PlikZUzytkownikami : public PlikTekstowy
 {
        string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
        Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
        PlikZUzytkownikami(string nazwaPlikuZUzytkownikami) : PlikTekstowy(nazwaPlikuZUzytkownikami) {};
        void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
        void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);
        vector <Uzytkownik> wczytajUzytkownikowZPliku();

};

#endif
