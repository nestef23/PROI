#include <iostream>
#include "samolotT.h"
#define _DEBUG
using namespace std;

samolotT::samolotT(string n, string w, int p, int z, int l, bool m, int ll):nazwa(n), wlasciciel(w), predkosc(p), zasieg(z), ladownosc(l), mrozone(m), ladunek(ll){ //konstruktor
    #ifdef _DEBUG
    cout<<"Stworzono samolotT"<<endl;
    #endif // _DEBUG
}

samolotT::~samolotT(){ //destruktor
    #ifdef _DEBUG
    cout<<"Usunieto samolotT"<<endl;
    #endif // _DEBUG
}

void samolotT::setnazwa(string n){ //setter
    samolotT::nazwa = n;
}
void samolotT::setwlasciciel(string w){ //setter
    samolotT::wlasciciel = w;
}
void samolotT::setzasieg(int z){ //setter
    samolotT::zasieg = z;
}
void samolotT::setpredkosc(int p){ //setter
    samolotT::predkosc = p;
}

void samolotT::setladownosc(int l){ //setter
    samolotT::ladownosc = l;
}

void samolotT::setmrozone(bool m){ //setter
    samolotT::mrozone = p;
}

string samolotT::getnazwa()const{ //getter
    return samolotT::nazwa;
}
string samolotT::getwlasciciel()const{ //getter
    return samolotT::wlasciciel;
}
int samolotT::getzasieg()const{ //getter
    return samolotT::zasieg;
}
int samolotT::getpredkosc()const{ //getter
    return samolotT::predkosc;
}

int samolotT::getladownosc()const{ //getter
    return samolotT::ladownosc;
}

bool samolotT::getmrozone()const{ //getter
    return samolotT::mrozone;
}



double samolotT::getladunek()const{
    return samolotT::ladunek;
}

bool samolotT::operator==(samolotT &s) {  // przeciązenie operatora ==
    bool kopia = 1;
    if(predkosc!=s.getpredkosc())
        kopia =0;
    if(zasieg!=s.getzasieg())
        kopia =0;
    if(ladownosc!=s.getladownosc())
        kopia =0;
    if(mrozone!=s.getmrozone())
        kopia =0;
    return kopia;
}

samolotT& samolotT::operator=(samolotT &s){ // przeciązenie operatora =
    predkosc = s.getpredkosc();
    zasieg = s.getzasieg();

    return *this;
}

ostream& operator<< (ostream &os, samolotT &s){ // przeciązenie operatora <<
    cout<<"Nazwa: "<<s.getnazwa()<<" ,Wlasciciel: "<<s.getwlasciciel()<<endl;
    cout<<"Predkosc: "<<s.getpredkosc()<<" ,Zasieg: "<<s.getzasieg()<<endl;
    cout<<"Ladownosc: "<<s.getladownosc()<<" ,Mrozone: "<<s.getmrozone()<<endl<<endl;

    return os;
}



