#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

void KsiazkaAdresowa::rejestracjaUzytkownika() {

    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow () {

    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika() {

     uzytkownikMenedzer.logowanieUzytkownika();
         if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
         {
             adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
         }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {

    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika() {

    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}


void KsiazkaAdresowa::dodajAdresata() {

    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->dodajAdresata(); // jak dzia³amy na wska¿niku to uzywamu operatora strza³ki
    }
    else
    {
        cout << "Aby dodac adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {

    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyswietlWszystkichAdresatow();
    }
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany () {

    uzytkownikMenedzer.czyUzytkownikJestZalogowany();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego() {

    MetodyPomocnicze metodyPomocnicze;
    char wybor;
    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = metodyPomocnicze.wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika() {
    char wybor;
    MetodyPomocnicze metodyPomocnicze;
    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = metodyPomocnicze.wczytajZnak();

    return wybor;
}

