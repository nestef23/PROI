#include <iostream>
#include "wersja.h"

#define _DEBUG
using namespace std;

wersja::wersja(){ //konstruktor samolot
    #ifdef _DEBUG
    cout<<"Stworzono obiekt wersja"<<endl;
    #endif // _DEBUG
}

wersja::~wersja(){ //konstruktor samolot
    #ifdef _DEBUG
    cout<<"Usunieto obiekt wersja"<<endl;
    #endif // _DEBUG
}

