#include <iostream>

#include "AdresatMenedzer.h"
#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;


void AdresatMenedzer::dodajAdresata()
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    if(plikZAdresatami.dopiszAdresataDoPliku(adresat))
        cout << "Nowy adresat zosta³ dodany." << endl;
    else
        cout << "Blad. Nie udalo sie dodac nowego adresata." << endl;
    system("pause");
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata() {

    Adresat adresat;
    string imie, nazwisko, numerTelefonu, email, adres;
   MetodyPomocnicze metodypomocnicze;

    adresat.ustawId((plikZAdresatami.pobierzIdOstatniegoAdresata() + 1));
    adresat.ustawIdUzytkownika(ID_ZALOGOWANEGO_UZYTKOWNIKA);

    cout << "Podaj imie: ";
    imie = MetodyPomocnicze::wczytajLinie();
    imie = metodypomocnicze.zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie);
    //adresat.ustawImie(MetodyPomocnicze::wczytajLinie());
    //adresat.ustawImie(metodypomocnicze.zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie()));

    cout << "Podaj nazwisko: ";
    nazwisko = MetodyPomocnicze::wczytajLinie();
    nazwisko = metodypomocnicze.zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko);
    //adresat.ustawNazwisko(MetodyPomocnicze::wczytajLinie());
   // adresat.ustawNazwisko(metodypomocnicze.zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko()));

    cout << "Podaj numer telefonu: ";
    numerTelefonu = MetodyPomocnicze::wczytajLinie();
    //adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    email = MetodyPomocnicze::wczytajLinie();
   // adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adres = MetodyPomocnicze::wczytajLinie();
  // adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

    adresat.ustawImie(imie);
    adresat.ustawNazwisko(nazwisko);
    adresat.ustawNumerTelefonu(numerTelefonu);
    adresat.ustawEmail(email);
    adresat.ustawAdres(adres);


    return adresat;
}

/*int AdresatMenedzer::ustawIdOstatniegoAdresata( int IdAdresata)
{
    idOstatniegoAdresata = IdAdresata;
}*/

 void AdresatMenedzer::wyswietlWszystkichAdresatow() {
    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (vector <Adresat> :: iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
        {
            wyswietlDaneAdresata(*itr);
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}

void AdresatMenedzer::wyswietlDaneAdresata(Adresat adresat) {

    cout << endl << "Id:                 " << adresat.pobierzId() << endl;
    cout << "Imie:               " << adresat.pobierzImie() << endl;
    cout << "Nazwisko:           " << adresat.pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresat.pobierzNumerTelefonu() << endl;
    cout << "Email:              " << adresat.pobierzEmail() << endl;
    cout << "Adres:              " << adresat.pobierzAdres() << endl;
}
