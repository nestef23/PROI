#include "testy.h"
#include "hangar.h"
#include <iostream>
void test2(){ //test klasy hangar
    hangar h;
    samolot s;
    h.setl_miejsc(10);
    h.setnazwa_lotniska("WAR");
    s.setnazwa("A158");
    s.setwlasciciel("LOT");

    h+=s;
    h+=s;
    h+=s;
    s.getp().setpredkosc_max(50);
    s.setnazwa("B545");
    h+=s;
    h+=s;
    cout<<h;
    cout<<s.ileObiektow()<<endl;

}

void test1(){ //test operatorów = i == dlaklasy samolot
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
