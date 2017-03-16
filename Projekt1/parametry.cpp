#include <iostream>
#include "parametry.h"

#define _DEBUG
using namespace std;

parametry::parametry(int p, int z){ //konstruktor
    #ifdef _DEBUG
    cout<<"Stworzono obiekt parametry"<<endl;
    #endif // _DEBUG
    predkosc_max = p;
    zasieg_max = z;
}

parametry::~parametry(){ //destruktor
    #ifdef _DEBUG
    cout<<"Usunieto obiekt parametry"<<endl;
    #endif // _DEBUG
}

bool parametry::operator!=(const parametry &p)const{
    bool rozne = 0;
    if(predkosc_max!=p.predkosc_max)
        rozne =1;
    if(zasieg_max!=p.zasieg_max)
        rozne =1;
    return rozne;
}
