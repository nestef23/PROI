#include <iostream>
//#include "parametry.h"
//#include "wersja.h"
//#include "samolot.h"
#include "hangar.h"

#define _DEBUG
using namespace std;

int samolot::licznik = 0;

int main()
{

    #ifdef _DEBUG
    cout<<"Wersja do debugowania"<<endl;
    #else
    cout<<"Wersja relase"<<endl;
    #endif // _DEBUG

    samolot a;
    samolot b;
    if(a==b)
        cout<<"Takie same"<<endl;
    else
        cout<<"Inne"<<endl;

    b.p.predkosc_max =50;
    cout<<a.nazwa<<endl;

    if(a==b)
        cout<<"Takie same"<<endl;
    else
        cout<<"Inne"<<endl;
    return 0;
}
