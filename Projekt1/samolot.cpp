#include <iostream>
#include "samolot.h"
#define _DEBUG
using namespace std;

samolot::samolot(string n, string w){ //konstruktor
    #ifdef _DEBUG
    cout<<"Stworzono obiekt samolot"<<endl;
    #endif // _DEBUG
    nazwa = n;
    wlasciciel =w;
    licznik++;
}

samolot::~samolot(){ //destruktor
    #ifdef _DEBUG
    cout<<"Usunieto obiekt samolot"<<endl;
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
string samolot::getnazwa()const{ //getter
    return samolot::nazwa;
}
string samolot::getwlasciciel()const{ //getter
    return samolot::wlasciciel;
}
parametry& samolot::getp(){ //getter
    return samolot::p;
}
wersja& samolot::getw(){ //getter
    return samolot::w;
}

bool samolot::operator==(samolot &s) {  // przeciązenie operatora ==
    bool kopia = 1;
    if(p!=s.getp())
        kopia =0;
    if(w!=s.getw())
        kopia =0;
    return kopia;
}

samolot& samolot::operator=(samolot &s){ // przeciązenie operatora =
    p = s.getp();
    w = s.getw();

    return *this;
}

ostream& operator<< (ostream &os, samolot &s){ // przeciązenie operatora <<
    cout<<"Nazwa: "<<s.getnazwa()<<" Wlasciciel: "<<s.getwlasciciel()<<endl;
    cout<<s.getp()<<s.getw()<<endl;

    return os;
}

