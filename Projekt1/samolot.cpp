#include <iostream>
#include "samolot.h"

#define _DEBUG
using namespace std;
int  samolot::ileObiektow(){ //funkcja zwracająca liczbe stworzonych obiektow typu samolot
    return samolot::licznik;
}

samolot::samolot(){ //konstruktor samolot
    #ifdef _DEBUG
    cout<<"Stworzono obiekt samolot"<<endl;
    #endif // _DEBUG
    licznik++;
}

samolot::~samolot(){ //destruktor samolot
    #ifdef _DEBUG
    cout<<"Usunieto obiekt samolot"<<endl;
    #endif // _DEBUG
    licznik--;
}
