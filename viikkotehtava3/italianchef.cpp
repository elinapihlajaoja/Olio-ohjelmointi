#include "italianchef.h"



ItalianChef::ItalianChef()
{
    cout << "ItalianChef defaultkonstruktori, ei nimeä" << endl;
}

ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout << "ItalianChef konstruktori" << ", kokin nimi " << name << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef destruktori" << endl;
}

bool ItalianChef::askSecret(string pw, int f, int w)
{

// 1. Jäsenfunktio askSecret() tarkistaa onko parametrinä annettu salasana ok
    if (pw == password)
    {
        cout << "Salasana ok! Pizzaa valmistetaan." << endl;


// 1.1 Jos on, parametrit f -> flour ja w -> water pitää
// sijoittaa jäsenmuuttujiin jauhon ja veden määrä.

    flour = f;
    water = w;

// 1.2. Jos on, kutsuu makePizza()-jäsenfunktiota.

// 1.3 Jos on, palauta true

// 1.4 Jos ei, palauta false

    int pizzas = makePizza();
    cout << "Valmistettu " << pizzas << endl;

    return true;
    } else { cout << "Väärä salasana! Pizzaa ei voida valmistaa." << endl;
        return false;
    }
}


int ItalianChef::makePizza()
{
    // makePizza tekee pizzoja niin paljon kuin aineksia riittää
    // yhteen pizzaan tarvitaan:
    // 5 ainesta jauhoja -> flour-jäsenmuuttuja
    // 5 ainesta vettä -> water-jäsenmuuttuja
    if (flour < 5 || water < 5) {
        cout << "Ei tarpeeksi aineksia" << endl;
        return 0;
    }

    int pizzas = min(flour / 5, water / 5);


    flour -= pizzas * 5;
    water -= pizzas * 5;

    return pizzas;

}
