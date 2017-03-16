#include "parametry.h"
#include "wersja.h"
class samolot
{
    std::string nazwa;
    std::string wlasciciel;
    parametry p;
    wersja w;
    //Liczba stworzonych obiektow
    static int licznik;
public:
    samolot();
    ~samolot();
    //funkcja zwracająca liczbe stworzonych obiektow
    static int ileObiektow();
    void wypisz();

    samolot operator=(const samolot &s) const;
    samolot operator==(const samolot &s) const;
}; //samolot
