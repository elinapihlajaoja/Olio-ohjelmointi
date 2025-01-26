#include <iostream>
#include <ctime>

using namespace std;


//prototyyppi
int game(int maxnum);

int main()
{
    int arvausten_lkm = 0;
    int maxnum = 40;
    arvausten_lkm = game(maxnum);
    cout << "Arvauksia: " << arvausten_lkm << endl;

    return 0;
}

int game(int maxnum) {
    int arvausten_lkm = 0;

    int satunnaisluku = 0;
    int arvaus = 0;

    cout << "Maxnum = " << maxnum << endl;


    // arvotaan satunnainen luku
    // satunnaisluku = 17;

    srand(time(NULL));
    satunnaisluku = rand() % maxnum;

    while (arvaus != satunnaisluku) {

        // kysytään pelaajalta arvaus

        cout << "Anna luku: " << endl;
        cin >> arvaus;
        arvausten_lkm++; // pelaaja teki arvauksen lkm +1

        // tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
        // kerrotaan tarkistuksen tulos
        // jos vastaus meni väärin, palataan kohtaan 2

        // arvaus on pienempi

        if (arvaus < satunnaisluku) {
            cout << "Luku on suurempi!" << endl;
        }

        // arvaus on suurempi

        if (arvaus > satunnaisluku) {
            cout << "Luku on pienempi!" << endl;
        }

    } // päättää while-silmukan

    cout << "Oikein arvattu!" << endl;


    return arvausten_lkm;
}
