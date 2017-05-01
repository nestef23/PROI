#include <iostream>
#include "testy.h"
//#include "lotnisko.h"

#define _DEBUG
using namespace std;

int samolotP::licznik = 0;

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
        if (s=="test1"){
            test1();
        }
        if (s=="test2"){
            test2();
        }
        if (s=="test3"){
            test3();
        }
        if (s=="test4"){
            test4();
        }
        if (s=="test5"){
            test5();
        }
        if (s=="test6"){
            test1();
        }
    }

    return 0;
}
