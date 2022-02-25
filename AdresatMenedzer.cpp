#include <iostream>

#include "AdresatMenedzer.h"
#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;




  void AdresatMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku() {

    ustawIdOstatniegoAdresata(plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika));
    cout << adresaci.size();
 }

 int AdresatMenedzer::dodajAdresata(int idZalogowanegoUzytkownika,int idOstatniegoAdresata)
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;
    MetodyPomocnicze metodypomocnicze;


    adresat.ustawId( ++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocnicze::wczytajLinie());
   adresat.ustawImie(metodypomocnicze.zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie()));

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(MetodyPomocnicze::wczytajLinie());
    adresat.ustawNazwisko(metodypomocnicze.zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko()));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

    return adresat;
}

void AdresatMenedzer::wypiszWszystkichAdresatow(int idZalogowanegoUzytkownika) {

    for (int i = 0; i < adresaci.size(); i++) {
                if (adresaci[i].pobierzIdUzytkownika() == idZalogowanegoUzytkownika ){
            cout << adresaci[i].pobierzId();
            cout << adresaci[i].pobierzIdUzytkownika();
            cout << adresaci[i].pobierzImie() ;
            cout << adresaci[i].pobierzNazwisko();
            cout << adresaci[i].pobierzNumerTelefonu();
            cout << adresaci[i].pobierzEmail();
            cout << adresaci[i].pobierzAdres() << endl;
        }
    }
}

 int AdresatMenedzer::ustawIdOstatniegoAdresata( int IdAdresata)
 {
    idOstatniegoAdresata = IdAdresata;
 }