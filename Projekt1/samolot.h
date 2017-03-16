#include "parametry.h"
#include "wersja.h"
class samolot
{
    public:
    std::string nazwa;
    std::string wlasciciel;
    parametry p;
    wersja w;
    //Liczba stworzonych obiektow
    static int licznik;
    samolot(std::string n= "BRAK", std::string w= "BRAK");
    ~samolot();
    //funkcja zwracająca liczbe stworzonych obiektow
    static int ileObiektow();
    void wypisz();

    samolot operator=(const samolot &s) const;
    bool operator==(const samolot &s) const;
}; //samolot
