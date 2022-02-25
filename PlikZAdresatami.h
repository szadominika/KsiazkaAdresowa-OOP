#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <cstdlib>
#include <vector>

#include "Adresaci.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami {

    string nazwaPlikuZAdresatami;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    bool czyPlikJestPusty(fstream &plikTekstowy);
     Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
public:
    PlikZAdresatami();
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci,int idZalogowanegoUzytkownika);
    void dopiszAdresataDoPliku(Adresat adresat);


};


#endif // PLIKZADRESATAMI_H
