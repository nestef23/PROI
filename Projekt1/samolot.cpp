#include <iostream>
#include "samolot.h"
#define _DEBUG
using namespace std;

samolot::samolot(string n, string w, int p, int z):nazwa(n), wlasciciel(w), predkosc(p), zasieg(z){ //konstruktor
    #ifdef _DEBUG
    cout<<"Stworzono samolot"<<endl;
    #endif // _DEBUG
    licznik++;
}

samolot::~samolot(){ //destruktor
    #ifdef _DEBUG
    cout<<"Usunieto samolot"<<endl;
    #endif // _DEBUG
    licznik--;
}

int  samolot::ileObiektow(){ //funkcja zwracająca liczbe stworzonych obiektow typu samolot
    return samolot::licznik;
}

void samolot::setnazwa(string n){ //setter
    samolot::nazwa = n;
}
void samolot::setwlasciciel(string w){ //setter
    samolot::wlasciciel = w;
}
void samolot::setzasieg(int z){ //setter
    samolot::zasieg = z;
}
void samolot::setpredkosc(int p){ //setter
    samolot::predkosc = p;
}

string samolot::getnazwa()const{ //getter
    return samolot::nazwa;
}
string samolot::getwlasciciel()const{ //getter
    return samolot::wlasciciel;
}
int samolot::getzasieg()const{ //getter
    return samolot::zasieg;
}
int samolot::getpredkosc()const{ //getter
    return samolot::predkosc;
}

bool samolot::operator==(samolot &s) {  // przeciązenie operatora ==
    bool kopia = 1;
    if(predkosc!=s.getpredkosc())
        kopia =0;
    if(zasieg!=s.getzasieg())
        kopia =0;
    return kopia;
}

samolot& samolot::operator=(samolot &s){ // przeciązenie operatora =
    predkosc = s.getpredkosc();
    zasieg = s.getzasieg();

    return *this;
}

ostream& operator<< (ostream &os, samolot &s){ // przeciązenie operatora <<
    cout<<"Nazwa: "<<s.getnazwa()<<" Wlasciciel: "<<s.getwlasciciel()<<endl;
    cout<<"Predkosc: "<<s.getpredkosc()<<"Zasieg: "<<s.getzasieg()<<endl;

    return os;
}

