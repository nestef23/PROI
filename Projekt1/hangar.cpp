#include <iostream>
#include "hangar.h"

#define _DEBUG
using namespace std;

hangar::hangar(string nazwa, int n){ //konstruktor
    #ifdef _DEBUG
    cout<<"Stworzono obiekt hangar"<<endl;
    #endif // _DEBUG
    nazwa_lotniska = nazwa;
    l_miejsc=n;
    wolne=0;

}

hangar::~hangar(){ //konstruktor
    #ifdef _DEBUG
    cout<<"Usunieto obiekt hangar"<<endl;
    #endif // _DEBUG
}

void hangar::setnazwa_lotniska(string s){
    nazwa_lotniska = s;
}
void hangar::setl_miejsc(int l){
        l_miejsc = l;
}
string hangar::getnazwa_lotniska() const{
        return nazwa_lotniska;
}
int hangar::getl_miejsc() const{
     return l_miejsc;
}

hangar& hangar::operator+=(samolot &s){ //dodawanie samolotu do hangaru
    if(wolne<l_miejsc){
        han.push_back(&s);
        wolne++;
        cout<<"Dodano samolot"<<endl;
    }
    else{
        cout<<"Brak miejsc"<<endl;
    }
    return *this;
}

hangar& hangar::operator-=(samolot &s){ //dodawanie samolotu do hangaru
    if(wolne>0){
        s=(*han.back());
        han.pop_back();
        wolne--;
    }
    else{
        cout<<"Brak elementów"<<endl;
    }
    return *this;
}

ostream& operator<< (ostream &os,  hangar &h){
    os<<"---HANGAR----------------------------"<<endl;
    os<<"Nazwa: "<<h.getnazwa_lotniska()<<" L. miejsc: "<<h.getl_miejsc()<<endl<<endl;
    for (int i=0; i<h.wolne; i++){
        cout<<(*h.han[i]);
    }
    return os;
}
