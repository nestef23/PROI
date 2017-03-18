#include <iostream>
#include "samolot.h"
//#include "parametry.h"
//#include "wersja.h"
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

void samolot::setnazwa(string n){
    samolot::nazwa = n;
}
void samolot::setwlasciciel(string w){
    samolot::wlasciciel = w;
}
string samolot::getnazwa()const{
    return samolot::nazwa;
}
string samolot::getwlasciciel()const{
    return samolot::wlasciciel;
}
parametry& samolot::getp(){
    return samolot::p;
}
wersja& samolot::getw(){
    return samolot::w;
}

bool samolot::operator==( samolot &s) {
    bool kopia = 1;
    if(p!=s.getp())
        kopia =0;
    if(w!=s.getw())
        kopia =0;
    return kopia;
}

samolot& samolot::operator=( samolot &s){
    p = s.getp();
    w = s.getw();

    return *this;
}
