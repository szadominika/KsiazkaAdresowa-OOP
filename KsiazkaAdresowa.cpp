#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

void KsiazkaAdresowa::rejestracjaUzytkownika() {

    uzytkownikMenedzer.rejestracjaUzytkownika();
}

int KsiazkaAdresowa::logowanieUzytkownika() {

     uzytkownikMenedzer.logowanieUzytkownika();
     uzytkownikMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}


int KsiazkaAdresowa::wylogowanieUzytkownika() {

    uzytkownikMenedzer.wylogowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {

    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

int KsiazkaAdresowa::dodajAdresata() {

   uzytkownikMenedzer.dodajAdresata();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow () {

    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

 void KsiazkaAdresowa::wypiszWszystkichAdresatow(){

 uzytkownikMenedzer.wypiszWszystkichAdresatow();
 }
