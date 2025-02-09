#include "seuraaja.h"


Seuraaja::Seuraaja(string n)
{
    nimi = n;
}

void Seuraaja::päivitys(string viesti)
{
    cout << nimi << " sai viestin: " << viesti << endl;
}

string Seuraaja::getNimi() const
{
    return nimi;
}
