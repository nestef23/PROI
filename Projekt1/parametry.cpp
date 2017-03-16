#include <iostream>
#include "parametry.h"

#define _DEBUG
using namespace std;

parametry::parametry(){ //konstruktor samolot
    #ifdef _DEBUG
    cout<<"Stworzono obiekt parametry"<<endl;
    #endif // _DEBUG
}

parametry::~parametry(){ //konstruktor samolot
    #ifdef _DEBUG
    cout<<"Usunieto obiekt parametry"<<endl;
    #endif // _DEBUG
}
