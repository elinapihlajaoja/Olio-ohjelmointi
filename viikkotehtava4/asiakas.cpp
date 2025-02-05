#include "asiakas.h"

Asiakas::Asiakas(string n, double lr)
    : käyttötili(nimi), luottotili (nimi, lr)
{
    nimi = n;
    cout << "Asiakkaan nimi = " << nimi << endl;
}

bool Asiakas::talletus(double summa)
{
    return käyttötili.deposit(summa);
}

bool Asiakas::tilisiirto(double summa, Asiakas &saaja)
{
    if (käyttötili.withdraw(summa))
    {
        saaja.talletus(summa);
        cout << "Tilisiirto onnistui: " << summa << " siirretty " << saaja.getNimi() << " tilille" << endl;
        return true;
    }
    cout << "Tilisiirto ei onnistunut" << endl;
    return false;
}

string Asiakas::getNimi() const
{
    return nimi;
}
