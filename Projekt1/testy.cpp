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
    s.getp().setpredkosc_max(600);
    s.getp().setzasieg_max(2000);
    s.getw().setsiedzenia_B(30);
    s.getw().setsiedzenia_E(120);
    cout<<"Samolot s"<<endl<<s;
    h+=s;
    h+=s;
    cout<<h;
    samolot s2;
    h-=s2;
    cout<<"Samolot s2"<<endl<<s2;
}

void test1(){ //test przeciążania operatorów dlaklasy samolot
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

void test3(){ //test pojemnośći hangaru i pola statycznego
    hangar f;
    samolot g;
    g.getp().setpredkosc_max(99);
    cout<<"Jest tyle obiektów typu samolot "<<g.ileObiektow()<<endl;
    samolot* s = new samolot;
    cout<<"Jest tyle obiektów typu samolot "<<g.ileObiektow()<<endl;
    f+=g;
    f.setl_miejsc(3);
    f+=g;
    f+=g;
    f+=g;
    f+=g;
    f-=(*s);
    cout<<"Samolot s"<<endl<<(*s);
    cout<<"Jest tyle obiektów typu samolot "<<g.ileObiektow()<<endl;
}
void test4(){
    hangar* h = new hangar("H1", 5);
    samolot* s = new samolot("S1", "LOT");
    s->getp().setpredkosc_max(123);
    s->getw().setsiedzenia_E(100);
    (*h)+=(*s);
    samolot s2;
    (*h)-=s2;
    cout<<s2;
}
