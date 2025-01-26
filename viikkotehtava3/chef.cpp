#include "chef.h"

Chef::Chef()
{
    cout << "Chef defaultkonstruktori, ei nimeä" << endl;
}

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef konstruktori, kokin nimi " << chefName << endl;
}

Chef::~Chef()
{
    cout << "Chef destruktori" << endl;
}

string Chef::getName() const
{
    return chefName;
}

int Chef::makeSalad(int aines)
{
    int annoksia = 0;
    cout << "Aineksia " << aines << endl;
// Salaatti: yhteen annokseen tarvitaan 5 ainesta
// Palauttaa annosten määrän
}

int Chef::makeSoup(int aines)
{
    int annoksia = 0;
    cout << "Aineksia " << aines << endl;
// Keitto: yhteen annokseen tarvitaan 3 ainesta
// Palauttaa annosten määrän
}
