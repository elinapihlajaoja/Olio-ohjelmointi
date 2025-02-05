#include "luottotili.h"

Luottotili::Luottotili() : Pankkitili(), luottoRaja(0)
{

}

Luottotili::Luottotili(string o, double lr) : Pankkitili(0), luottoRaja(lr)
{
    luottoRaja = lr;
    cout << "luottotili luotu: " << omistaja << "luottoraja = " << luottoRaja << endl;
}

bool Luottotili::withdraw(double summa)
{
    if (summa > 0 && (saldo + luottoRaja) >= summa)
    {
        saldo -= summa;
        cout << "Luottotililtä nostettu: " << summa << ", uusi saldo: " << saldo << endl;
        return true;
    }
    return false;

}


bool Luottotili::deposit(double summa)
{
    if (summa > 0)
    {
        saldo += summa;
        cout << "Luottotilille talletettu: " << summa << ", uusi saldo: " << saldo << endl;
        return true;
    }
    return false;
}
