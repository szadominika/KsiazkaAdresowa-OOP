#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <cstdlib>

using namespace std;

class MetodyPomocnicze {

public:

    static string wczytajLinie();
    static string konwerjsaIntNaString(int liczba);
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
    static int konwersjaStringNaInt(string liczba);
    static char wczytajZnak();
    static int wczytajLiczbeCalkowita();
};

#endif
