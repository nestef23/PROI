#include <iostream>
#include "testy.h"
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


    test3();



    return 0;
}
