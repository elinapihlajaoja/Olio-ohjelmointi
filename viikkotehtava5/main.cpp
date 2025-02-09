#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Notifikaattori *N = new Notifikaattori();

    Seuraaja *A = new Seuraaja("Aapeli");
    Seuraaja *B = new Seuraaja("Beepeli");
    Seuraaja *C = new Seuraaja("Ceepeli");
    Seuraaja *D = new Seuraaja("Deepeli");
    Seuraaja *E = new Seuraaja("Eepeli");
    Seuraaja *F = new Seuraaja("Feepeli");

    // lisätään seuraajat

    N->lisää(A);
    N->lisää(B);
    N->lisää(C);
    N->lisää(D);
    N->lisää(E);
    N->lisää(F);

    cout << "Listalla ovat: " << endl;

    N->tulosta();


// lähetetään viesti

    cout << "Notifikaattori lähettää viestin " << endl;
    N->postita("Terveppä terve");

// poistetaan yksi seuraaja listalta

    cout << "Poistetaan listalta Ceepeli" << endl;
    N->poista(C);

    // tulostetaan lista uudelleen

    N->tulosta();

    // lähetetään toinen viesti

    N->postita("Tämä on toinen viesti");



    delete N;


    return 0;
}
