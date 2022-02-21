#include <iostream>
#include "Adresaci.h"

using namespace std;

void Adresat::ustawId(int noweId){

    if (noweId >=0)
        id = noweId;

}

void Adresat::ustawIdUzytkownika(int noweIdUzytkownika){

    idUzytkownika = noweIdUzytkownika;

}

void Adresat::ustawImie(string noweImie) {

    imie = noweImie;

}

void Adresat::ustawNazwisko(string noweNazwisko) {

    nazwisko = noweNazwisko;

}

void Adresat::ustawEmail(string nowyEmail) {

    email = nowyEmail;

}

void Adresat::ustawNumerTelefonu(string nowyNumerTelefonu) {

    numerTelefonu = nowyNumerTelefonu;

}

void Adresat::ustawAdres(string nowyAdres) {

    adres = nowyAdres;

}

int Adresat::pobierzId() {

    return id;

}

int Adresat::pobierzIdUzytkownika() {

    return idUzytkownika;

}

string Adresat::pobierzImie() {

    return imie;

}

string Adresat::pobierzNazwisko() {

    return nazwisko;

}

string Adresat::pobierzNumerTelefonu() {

    return numerTelefonu;

}

string Adresat::pobierzEmail() {

    return email;

}

string Adresat::pobierzAdres() {

    return adres;

}
