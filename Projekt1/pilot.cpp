#include <iostream>
#include "pilot.h"

using namespace std;

pilot::pilot(string i, string n, int l, int s):imie(i), nazwisko(n), stopien_licencji(s), lata_pracy(l){ //konstruktor
}

pilot::~pilot(){}

void pilot::setimie(string s){
    imie=s;
}
void pilot::setnazwisko(string s){
    nazwisko=s;
}
void pilot::setlata(int i){
    lata_pracy=i;
}
void pilot::setstopien(int i){
    stopien_licencji = i;
}

string pilot::getimie()const{
    return pilot::imie;
}
string pilot::getnazwisko()const{
    return pilot::nazwisko;
}
int pilot::getlata()const{
        return pilot::lata_pracy;
}
int pilot::getstopien()const{
    return pilot::stopien_licencji;
}

ostream& operator<< (ostream &os, pilot &p){ // przeciązenie operatora <<
    cout<<"Imie: "<<p.getimie()<<" ,Nazwisko: "<<p.getnazwisko()<<endl;
    cout<<"Lata pracy: "<<p.getlata()<<" ,Numer licencji: "<<p.getstopien()<<endl;

    return os;
}
