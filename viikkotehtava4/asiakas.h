#ifndef ASIAKAS_H
#define ASIAKAS_H

#include <iostream>

#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class Asiakas
{
public:
    Asiakas(string n, double lr);
    bool talletus(double summa);
    bool tilisiirto(double summa, Asiakas &saaja);

    string getNimi() const;
    void showSaldo() const;

private:
    Pankkitili käyttötili;
    Luottotili luottotili;
    string nimi;

};

#endif // ASIAKAS_H
