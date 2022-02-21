#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H


#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresaci.h"
#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"
//#include "UzytkownikMenedzer.h"

using namespace std;


class AdresatMenedzer {

    vector <Adresat> adresaci;
    int idOstatniegoAdresata;
    int idZalogowanegoUzytkownika;

    PlikZAdresatami plikZAdresatami;
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);


public:
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    int dodajAdresata(int idZalogowanegoUzytkownika,int idOstatniegoAdresata);//(int idZalogowanegoUzytkownika);
    void wypiszWszystkichAdresatow();

};



#endif // ADRESATMENEDZER_H
