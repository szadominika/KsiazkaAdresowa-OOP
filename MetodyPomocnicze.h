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
    string konwerjsaIntNaString(int liczba);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
};

#endif
