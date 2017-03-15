#include <iostream>
#define _DEBUG
using namespace std;

class model
{
    string nazwa;
    int rok_powstania;
};

class parametry
{
    int predkosc_max;
    int zasieg;
};

class wersja
{
    int siedzenia_B;
    int siedzenia_E;
    bool salon;
};

class samolot
{
    string nazwa;
    string wlasciciel;
    parametry p;
    wersja w;
    model m;
    static int licznik;
public:
    samolot();
    int ileObiektow();
    void wypisz();

    samolot operator=(const samolot &s) const;
    samolot operator==(const samolot &s) const;
    samolot operator+(const samolot &s) const;
    samolot operator-(const samolot &s) const;
    samolot operator+=(const samolot &s) const;
    samolot operator-=(const samolot &s) const;



};

int  samolot::ileObiektow(){
    return samolot::licznik;
}

samolot::samolot(){
    licznik++;
}

int main()
{
#ifdef _DEBUG
    cout<<"Wersja do debugowania"<<endl;
#else
    cout<<"Wersja do relase"<<endl;
#endif // _DEBUG

    return 0;
}
