#include <iostream>
#include "wersja.h"

#define _DEBUG
using namespace std;

wersja::wersja(int b, int e){ //konstruktor
    #ifdef _DEBUG
    cout<<"Stworzono obiekt wersja"<<endl;
    #endif // _DEBUG
    siedzenia_B = b;
    siedzenia_E = e;
}

wersja::~wersja(){ //destruktor
    #ifdef _DEBUG
    cout<<"Usunieto obiekt wersja"<<endl;
    #endif // _DEBUG
}

void wersja::setsiedzenia_B(int b){ //setter
    wersja::siedzenia_B = b;
}
void wersja::setsiedzenia_E(int e){ //setter
    wersja::siedzenia_E = e;
}
int wersja::getsiedzienia_B(){ //setter
    return wersja::siedzenia_B;
}
int wersja::getsiedzienia_E(){ //setter
    return wersja::siedzenia_E;
}

bool wersja::operator!=(const wersja &w)const{ // przeciążenie operatora !=
    bool rozne = 0;
    if(siedzenia_B!=siedzenia_B)
        rozne =1;
    if(siedzenia_E!=w.siedzenia_E)
        rozne =1;
    return rozne;
}

wersja& wersja::operator=(const wersja &w){ // przeciążenie operatora =
    siedzenia_B = w.siedzenia_B;
    siedzenia_E = w.siedzenia_E;
    return *this;
}

ostream& operator<< (ostream &os,  wersja &s){ // przeciązenie operatora <<
    os<<"Siedzenia B: "<<s.getsiedzienia_B()<<" Siedzenia S: "<<s.getsiedzienia_E()<<endl;

    return os;
}
