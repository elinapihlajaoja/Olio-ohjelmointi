#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <iostream>

using namespace std;

class Seuraaja
{
public:
    Seuraaja(string n);
    string getNimi() const;
    void päivitys(string viesti);

    Seuraaja *next = nullptr;


private:
    string nimi;
};

#endif // SEURAAJA_H
