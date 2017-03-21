#include <iostream>
#include "testy.h"
#include "hangar.h"

#define _DEBUG
using namespace std;

int samolot::licznik = 0;
static samolot s;
static samolot* s2 = new samolot;

int main()
{
    cout<<"Krzysztof Cąderek - symulator samolotu"<<endl<<endl;
    #ifdef _DEBUG
    cout<<"Wersja do debugowania"<<endl;
    #else
    cout<<"Wersja relase"<<endl;
    #endif // _DEBUG

    string s;
    while (s!="q"){
        cout<<"Wpisz nazwę testu, który chcesz wykonać"<<endl;
        cin>>s;
        if(s=="test1"){
            test1();
        }
        else if(s=="test2"){
            test2();
        }
        else if(s=="test3"){
            test3();
        }
    }

    delete s2;
    return 0;
}
