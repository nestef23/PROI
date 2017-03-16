#include <iostream>
#include "hangar.h"

#define _DEBUG
using namespace std;

hangar::hangar(){ //konstruktor samolot
    #ifdef _DEBUG
    cout<<"Stworzono obiekt hangar"<<endl;
    #endif // _DEBUG
}

hangar::~hangar(){ //konstruktor samolot
    #ifdef _DEBUG
    cout<<"Usunieto obiekt hangar"<<endl;
    #endif // _DEBUG
}
