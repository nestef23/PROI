#include "testy.h"
#include <iostream>
void test1(){
pilot p;
hostessa h;

p.setimie("Andrzej");
p.setnazwisko("Kowalski");
p.setlata(15);
p.setstopien(4163);

h.setimie("Anna");
h.setnazwisko("Nowak");
h.setlata(7);
h.addjezyk("polski");
h.addjezyk("angielski");
h.addjezyk("francuski");
h.addjezyk("niemiecki");
cout<<p<<endl<<h<<endl;
//Usuwamy 2 język
h.deletejezyk(1);

cout<<h<<endl;
}

void test2(){
samolotP s1,s2,s3;
s1.setnazwa("s1");
s2.setnazwa("s2");
s3.setnazwa("s3");
lotnisko <samolotP> l;
l.setl_miejsc(5);
l+=s1;
l+=s2;
l+=s3;
cout<<l<<endl;
l.deletesamolot(0);
cout<<l<<endl;
}

void test3(){
hostessa h1("Anna", "Kowalska", 5);
hostessa h2("Bożena", "Nowak", 7);
samolotP s1;
s1.addzaloga(h1);
s1.addzaloga(h2);
cout<<s1.ilezaloga()<<endl;
s1.deletezaloga(1);
cout<<s1.ilezaloga()<<endl;
}

void test4(){
lotnisko<samolotP> l1("l1", 5);
lotnisko<samolotT> l2("l2", 5);
samolotP s1("s1");
samolotT s2("s2");

l1+=s1;
l2+=s2;

cout<<l1<<l2;

l1.deletesamolot(0);
l2.deletesamolot(0);

cout<<l1<<l2;
}

void test5(){
    samolotT s1("A156", "LOT", 300, 2000, 1000, 1, 0);
    int ladunek1 = 20;
    float ladunek2 = 5.6;
    double ladunek3 = 0.0001;
    s1.addladunek(ladunek1);
    s1.addladunek(ladunek2);
    s1.addladunek(ladunek3);
    cout<<"Ladunek samolotu: "<<s1.getladunek()<<endl;
    s1.deleteladunek(30);
    s1.deleteladunek(10);
     cout<<"Ladunek samolotu: "<<s1.getladunek()<<endl;

}
