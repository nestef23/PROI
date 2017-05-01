#include <iostream>
#include "samolotP.h"
#define _DEBUG
using namespace std;

samolotP::samolotP(string n, string w, int p, int z):nazwa(n), wlasciciel(w), predkosc(p), zasieg(z){ //konstruktor
    #ifdef _DEBUG
    cout<<"Stworzono samolotP"<<endl;
    #endif // _DEBUG
    licznik++;
}

samolotP::~samolotP(){ //destruktor
    #ifdef _DEBUG
    cout<<"Usunieto samolotP"<<endl;
    #endif // _DEBUG
    licznik--;
}

int  samolotP::ileObiektow(){ //funkcja zwracająca liczbe stworzonych obiektow typu samolotP
    return samolotP::licznik;
}

void samolotP::setnazwa(string n){ //setter
    samolotP::nazwa = n;
}
void samolotP::setwlasciciel(string w){ //setter
    samolotP::wlasciciel = w;
}
void samolotP::setzasieg(int z){ //setter
    samolotP::zasieg = z;
}
void samolotP::setpredkosc(int p){ //setter
    samolotP::predkosc = p;
}

string samolotP::getnazwa()const{ //getter
    return samolotP::nazwa;
}
string samolotP::getwlasciciel()const{ //getter
    return samolotP::wlasciciel;
}
int samolotP::getzasieg()const{ //getter
    return samolotP::zasieg;
}
int samolotP::getpredkosc()const{ //getter
    return samolotP::predkosc;
}

void samolotP::addzaloga(hostessa h){
    samolotP::zaloga.push_back(h);
}
void samolotP::deletezaloga(int i){
    samolotP::zaloga.erase(zaloga.begin()+i);
}

int samolotP::ilezaloga()const{
    return samolotP::zaloga.size();
}

bool samolotP::operator==(samolotP &s) {  // przeciązenie operatora ==
    bool kopia = 1;
    if(predkosc!=s.getpredkosc())
        kopia =0;
    if(zasieg!=s.getzasieg())
        kopia =0;
    return kopia;
}

samolotP& samolotP::operator=(samolotP &s){ // przeciązenie operatora =
    predkosc = s.getpredkosc();
    zasieg = s.getzasieg();

    return *this;
}

ostream& operator<< (ostream &os, samolotP &s){ // przeciązenie operatora <<
    cout<<"Nazwa: "<<s.getnazwa()<<" ,Wlasciciel: "<<s.getwlasciciel()<<endl;
    cout<<"Predkosc: "<<s.getpredkosc()<<" ,Zasieg: "<<s.getzasieg()<<endl;
    cout<<"Liczba hostess: "<<s.ilezaloga()<<endl<<endl;


    return os;
}

