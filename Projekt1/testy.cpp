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
    samolot s2=s;
    s.setnazwa("B545");
    h+=s2;
    h+=s2;
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

void test3(){
    hangar f;
    samolot b;
    cout<<b.ileObiektow()<<endl;
    samolot g;
    cout<<g.ileObiektow()<<endl;
    f+=g;
     cout<<b.ileObiektow()<<endl;
    f.setl_miejsc(5);
    f+=g;
    f+=g;
    f+=g;
    f+=g;
     cout<<b.ileObiektow()<<endl;
}
