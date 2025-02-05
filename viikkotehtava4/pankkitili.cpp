#include "pankkitili.h"

Pankkitili::Pankkitili()
{

}

bool Pankkitili::withdraw(double summa)
{
    if (summa > 0 && saldo >= summa)
    {
        saldo -= summa;
        cout << "Nosto: " << summa << ", uusi saldo: " << saldo << endl;
        return true;
    }
    return false;

}

bool Pankkitili::deposit(double summa)
{
    if (summa > 0 && saldo >= summa)
    {
        saldo += summa;
        cout << "Talletus: " << summa << ", uusi saldo: " << saldo << endl;
        return true;
    }
    return false;
}
