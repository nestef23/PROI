#include <string>
using namespace std;
class samolot
{
    string nazwa;
    string wlasciciel;
    static int licznik; //Liczba stworzonych obiektow
    int zasieg;
    int predkosc;


public:
    samolot(string n="BRAK", string w="BRAK", int p=0, int z=0);
    ~samolot();

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


    samolot& operator=(samolot &s);
    bool operator==(samolot &s) ;

    friend
    std::ostream& operator<<(std::ostream &os, samolot &s);
}; //samolot
