#include "parametry.h"
#include "wersja.h"
#include <string>
using namespace std;
class samolot
{
    string nazwa;
    string wlasciciel;
    static int licznik; //Liczba stworzonych obiektow
    parametry p; // parametry samolotu
    wersja w;    // wersja wyposażenia

public:
    samolot(string n="BRAK", string w="BRAK");
    ~samolot();

    static int ileObiektow(); //funkcja zwracająca liczbe stworzonych obiektow
    void wypisz();

    void setnazwa(string);
    void setwlasciciel(string);
    std::string getnazwa()const;
    std::string getwlasciciel()const;
    parametry& getp();
    wersja& getw();



    samolot& operator=(samolot &s);
    bool operator==(samolot &s) ;

    friend
    std::ostream& operator<<(std::ostream &os, samolot &s);
}; //samolot
