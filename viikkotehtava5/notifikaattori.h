#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include "seuraaja.h"

class Notifikaattori
{
public:
    Notifikaattori();
    ~Notifikaattori();
    void lisää(Seuraaja *seur);
    void poista(Seuraaja *seur);
    void tulosta();
    void postita(string viesti);

private:
    Seuraaja *seuraajat = nullptr;
};

#endif // NOTIFIKAATTORI_H
