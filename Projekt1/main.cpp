#include <iostream>
#include "testy.h"
#include "lotnisko.h"

#define _DEBUG
using namespace std;

int samolot::licznik = 0;


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
        }
    }

    return 0;
}
