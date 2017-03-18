#include "parametry.h"
#include "wersja.h"
class samolot
{
    std::string nazwa;
    std::string wlasciciel;
    static int licznik; //Liczba stworzonych obiektow
    parametry p;
    wersja w;

public:
    samolot(std::string n= "BRAK", std::string w= "BRAK");
    ~samolot();

    static int ileObiektow(); //funkcja zwracająca liczbe stworzonych obiektow
    void wypisz();

    void setnazwa(std::string);
    void setwlasciciel(std::string);
    std::string getnazwa();
    std::string getwlasciciel();
    parametry& getp();
    wersja& getw();



    samolot& operator=( samolot &s);
    bool operator==( samolot &s) ;
}; //samolot
