#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

void KsiazkaAdresowa::rejestracjaUzytkownika() {

    uzytkownikMenedzer.rejestracjaUzytkownika();

}

int KsiazkaAdresowa::logowanieUzytkownika() {

     uzytkownikMenedzer.logowanieUzytkownika();

}


int KsiazkaAdresowa::wylogowanieUzytkownika() {

    uzytkownikMenedzer.wylogowanieUzytkownika();

}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {

    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();

}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow () {

    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();

}


int KsiazkaAdresowa::dodajAdresata() {

   uzytkownikMenedzer.dodajAdresata();

}

 void KsiazkaAdresowa::wypiszWszystkichAdresatow(){

 uzytkownikMenedzer.wypiszWszystkichAdresatow();

 }
