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

void parametry::setpredkosc_max(int p){ //setter
    parametry::predkosc_max = p;
}
void parametry::setzasieg_max(int z){ //setter
    parametry::zasieg_max = z;
}
int parametry::getpredkosc_max() const{ //getter
    return parametry::predkosc_max;
}
int parametry::getzasieg_max()const{ //getter
    return parametry::zasieg_max;
}

bool parametry::operator!=(const parametry &p)const{ // przeciążenie operatora !=
    bool rozne = 0;
    if(predkosc_max!=p.predkosc_max)
        rozne =1;
    if(zasieg_max!=p.zasieg_max)
        rozne =1;
    return rozne;
}

parametry& parametry::operator=(const parametry &p){ // przeciążenie operatora =
    predkosc_max = p.predkosc_max;
    zasieg_max = p.zasieg_max;
    return *this;
}

ostream& operator<< (ostream &os,  parametry &s){ // przeciązenie operatora <<
    os<<"Vmax: "<<s.getpredkosc_max()<<" Rmax: "<<s.getzasieg_max()<<endl;

    return os;
}
