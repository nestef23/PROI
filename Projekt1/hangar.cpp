#include <iostream>
#include "hangar.h"

#define _DEBUG
using namespace std;

hangar::hangar(string nazwa, int n){ //konstruktor
    #ifdef _DEBUG
    cout<<"Stworzono obiekt hangar"<<endl;
    #endif // _DEBUG
    nazwa_lotniska = nazwa;
    l_miejsc=n;
    wolne=0;
    lista = new samolot[n];

}

hangar::~hangar(){ //konstruktor
    #ifdef _DEBUG
    cout<<"Usunieto obiekt hangar"<<endl;
    #endif // _DEBUG
}

hangar hangar::operator+=(const samolot &s){ //dodawanie samolotu do hangaru
    if(wolne<=l_miejsc){
        lista[wolne] = s;
        wolne++;
    }
    else{
        cout<<"Brak miejsc"<<endl;
    }
}

ostream& operator<< (ostream &os, const hangar &h){
    os<<nazwa_lotnikska<<" "<l_miejsc<<endl;
    for(int i= 0; i<=wolne){
        os<<lista[i].getnazwa<<" "<<lista[i].getwlasciciel<<endl;
    }
    return os;
}
