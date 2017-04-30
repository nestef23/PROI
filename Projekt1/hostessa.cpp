#include <iostream>
#include "hostessa.h"

using namespace std;

hostessa::hostessa(string i, string n, int l):imie(i), nazwisko(n), lata_pracy(l){ //konstruktor
}

hostessa::~hostessa(){}

void hostessa::setimie(string s){
    imie=s;
}
void hostessa::setnazwisko(string s){
    nazwisko=s;
}
void hostessa::setlata(int i){
    lata_pracy=i;
}
void hostessa::addjezyk(string s){
    hostessa::jezyki.push_back(s);
}
void hostessa::deletejezyk(int i){
    hostessa::jezyki.erase(jezyki.begin()+i);
}

string hostessa::getimie()const{
    return hostessa::imie;
}
string hostessa::getnazwisko()const{
    return hostessa::nazwisko;
}
int hostessa::getlata()const{
        return hostessa::lata_pracy;
}

string hostessa::getjezyki()const{
    string s="";
    for (int i=0; i<=hostessa::jezyki.size()-1; i++){
        s.append(jezyki[i]);
        s.append(" ");
    }
    return s;
}

ostream& operator<< (ostream &os, hostessa &p){ // przeciązenie operatora <<
    cout<<"Imie: "<<p.getimie()<<" ,Nazwisko: "<<p.getnazwisko()<<endl;
    cout<<"Lata pracy: "<<p.getlata()<<" ,Jezyki: "<<p.getjezyki()<<endl;

    return os;
}
