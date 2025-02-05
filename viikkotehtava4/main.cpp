#include <iostream>
#include "pankkitili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas a("Pertti", 1000);
    Asiakas b("Martti", 1000);
    Asiakas c("Liisa", 1000);

    cout << "Pertti käy pankissa" << endl;
    a.talletus(500);
    a.tilisiirto(200, b);
    a.tilisiirto(100, c);

    cout << "Martti käy pankissa" << endl;
    b.talletus(600);
    b.tilisiirto(300, a);

    cout << "Liisa käy pankissa" << endl;
    c.talletus (1000);
    c.tilisiirto(1500, a);

    cout << "Pertin saldo: " << endl;
    a.showSaldo();

    cout << "Martin saldo: " << endl;
    b.showSaldo();

    cout << "Liisan saldo: " << endl;
    c.showSaldo();


    return 0;
}
