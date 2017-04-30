
#include <string>
#include "pilot.h"
#include "hostessa.h"
using namespace std;


class samolotP
{
    string nazwa;
    string wlasciciel;
    static int licznik; //Liczba stworzonych obiektow
    int zasieg;
    int predkosc;



public:
    pilot *p;
    vector<hostessa> zaloga;

    samolotP(string n="BRAK", string w="BRAK", int p=0, int z=0);
    ~samolotP();

    static int ileObiektow(); //funkcja zwracająca liczbe stworzonych obiektow
    void wypisz();

    void setnazwa(string);
    void setwlasciciel(string);
    void setzasieg(int);
    void setpredkosc(int);
    std::string getnazwa()const;
    std::string getwlasciciel()const;
    int getzasieg()const;
    int getpredkosc()const;

    void addzaloga(hostessa);
    void deletezaloga(int);
    int ilezaloga()const;


    samolotP& operator=(samolotP &s);
    bool operator==(samolotP &s) ;

    friend
    std::ostream& operator<<(std::ostream &os, samolotP &s);
}; //samolotP
