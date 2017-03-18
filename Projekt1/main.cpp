#include <iostream>
#include "testy.h"
#include "hangar.h"

#define _DEBUG
using namespace std;

int samolot::licznik = 0;

void test2(){ //test klasy hangar
    hangar h;
    samolot s;
    h.setl_miejsc(10);
    h.setnazwa_lotniska("WAR");
    s.setnazwa("A158");
    s.setwlasciciel("LOT");

    h+s;
    cout<<h;

}

int main()
{
    #ifdef _DEBUG
    cout<<"Wersja do debugowania"<<endl;
    #else
    cout<<"Wersja relase"<<endl;
    #endif // _DEBUG

    test2();



    return 0;
}
