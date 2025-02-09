#include "notifikaattori.h"


Notifikaattori::Notifikaattori()
{
    cout << "luodaan notifikaattori" << endl;
}



Notifikaattori::~Notifikaattori()
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        Seuraaja *poistettava = alku;
        alku = alku->next;
        delete poistettava;
    }
}


void Notifikaattori::lisää(Seuraaja *uusiSeur)
{
    uusiSeur->next = seuraajat;
    seuraajat = uusiSeur;
}



void Notifikaattori::poista(Seuraaja *poistaSeur)
{
    if (seuraajat == nullptr)
        return;

    if (seuraajat == poistaSeur)
    {
        seuraajat = seuraajat->next;
        delete poistaSeur;
        return;
    }

    Seuraaja* alku = seuraajat;
    while (alku->next != nullptr)
    {
        if (alku->next == poistaSeur)
        {
            alku-> next = poistaSeur->next;
            delete poistaSeur;
            return;
        }

        alku = alku->next;
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        cout << "Seuraaja: " << alku->getNimi() << endl;
        alku = alku->next;
    }
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        alku->päivitys(viesti);
        alku = alku->next;
    }
}
