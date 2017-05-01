
#include<iostream>
#include <string>
#include "samolotP.h"
using namespace std;


class samolotT
{
    string nazwa;
    string wlasciciel;
    static int licznik; //Liczba stworzonych obiektow
    int zasieg;
    int predkosc;
    int ladownosc;
    bool mrozone;
    double ladunek;

public:
    pilot *p;

    samolotT(string n="BRAK", string w="BRAK", int p=0, int z=0, int l=0, bool m=0, int ll=0);
    ~samolotT();

    static int ileObiektow(); //funkcja zwracająca liczbe stworzonych obiektow
    void wypisz();

    void setnazwa(string);
    void setwlasciciel(string);
    void setzasieg(int);
    void setpredkosc(int);
    void setladownosc(int);
    void setmrozone(bool);
    std::string getnazwa()const;
    std::string getwlasciciel()const;
    int getzasieg()const;
    int getpredkosc()const;
    int getladownosc()const;
    bool getmrozone()const;
    double getladunek()const;



    samolotT& operator=(samolotT &s);
    bool operator==(samolotT &s);
  /*  template <class T>
    void addladunek(T);
    template <class T>
    void deleteladunek(T); */

    template <class T>
    void addladunek(T l){
        if(samolotT::ladunek+l<=samolotT::ladownosc){
            samolotT::ladunek +=l;
        }
        else{
            cout<<"Brak miejsca"<<endl;
        }
    }

    template <class T>
    void deleteladunek(T l){
        if(samolotT::ladunek-l>=0){
            samolotT::ladunek -=l;
        }
        else{
            cout<<"Brak ladunku"<<endl;
        }
    }

    friend
    std::ostream& operator<<(std::ostream &os, samolotT &s);
}; //samolotT
