#include <iostream>
#include "hangar.h"

#define _DEBUG
using namespace std;

int samolot::licznik = 0;

void test1{ //test operatorów = i == dlaklasy samolot
    samolot a;
    samolot b;
    if(a==b)
        cout<<"Takie same"<<endl;
    else
        cout<<"Inne"<<endl;
    a.getp().setpredkosc_max(50);
    if(a==b)
        cout<<"Takie same"<<endl;
    else
        cout<<"Inne"<<endl;

    b=a;

     if(a==b)
        cout<<"Takie same"<<endl;
    else
        cout<<"Inne"<<endl;
}
void test2(){ //test klasy hangar
    hangar h = new hangar("h1", 10);
    samolot a;
    h+=a;
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
