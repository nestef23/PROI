#include <iostream>
#include "samolot.h"

#define _DEBUG
using namespace std;
int  samolot::ileObiektow(){ //funkcja zwracająca liczbe stworzonych obiektow typu samolot
    return samolot::licznik;
}

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

bool samolot::operator==(const samolot &s) const{
    bool kopia = 1;
    if(p!=s.p)
        kopia =0;
   // if(w!=s.w)
   //     kopia =0;
    return kopia;
}
