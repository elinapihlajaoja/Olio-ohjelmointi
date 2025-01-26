#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;



int main()
{

    Chef c_olio("Bob");

    int annoksia = c_olio.makeSalad(10);
    cout << "Salaattiannoksia tehtiin " << annoksia << endl;

    int annoksia2 = c_olio.makeSoup(20);
    cout << "Keittoannoksia tehtiin " << annoksia2 << endl;



    ItalianChef i_olio("Mario");

    string password;
    cout << "Anna salasana aloittaaksesi pizzan valmistuksen: ";
    cin >> password;

    if (i_olio.askSecret(password, 30, 30))
{
        cout << "Pizzan valmistus onnistui!" << endl;
    } else {
        cout << "Pizzaa ei voitu valmistaa." << endl;
    }


    return 0;

}
