#include <iostream>
#include "wersja.h"

#define _DEBUG
using namespace std;

wersja::wersja(){ //konstruktor
    #ifdef _DEBUG
    cout<<"Stworzono obiekt wersja"<<endl;
    #endif // _DEBUG
}

wersja::~wersja(){ //konstruktor
    #ifdef _DEBUG
    cout<<"Usunieto obiekt wersja"<<endl;
    #endif // _DEBUG
}

bool wersja::operator!=(const wersja &w)const{
    bool rozne = 0;
    if(predkosc_max!=p.predkosc_max)
        rozne =1;
    if(zasieg_max!=p.zasieg_max)
        rozne =1;
    return rozne;
}

