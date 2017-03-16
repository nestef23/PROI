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

wersja::~wersja(){ //konstruktor
    #ifdef _DEBUG
    cout<<"Usunieto obiekt wersja"<<endl;
    #endif // _DEBUG
}

bool wersja::operator!=(const wersja &w)const{
    bool rozne = 0;
    if(siedzenia_B!=siedzenia_B)
        rozne =1;
    if(siedzenia_E!=w.siedzenia_E)
        rozne =1;
    return rozne;
}

wersja& wersja::operator=(const wersja &w){
    siedzenia_B = w.siedzenia_B;
    siedzenia_E = w.siedzenia_E;
    return *this;
}

