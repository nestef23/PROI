#include <iostream>
#include "lotnisko.h"

#define _DEBUG
using namespace std;

lotnisko::lotnisko(string nazwa, int n){ //konstruktor
    #ifdef _DEBUG
    cout<<"Stworzono lotnisko"<<endl;
    #endif // _DEBUG
    nazwa_lotniska = nazwa;
    l_miejsc=n;
    wolne=0;

}

lotnisko::~lotnisko(){ //konstruktor
    #ifdef _DEBUG
    cout<<"Usunieto lotnisko"<<endl;
    #endif // _DEBUG
}

void lotnisko::setnazwa_lotniska(string s){ //setter
    nazwa_lotniska = s;
}
void lotnisko::setl_miejsc(int l){ //setter
        l_miejsc = l;
}
string lotnisko::getnazwa_lotniska() const{ //getter
        return nazwa_lotniska;
}
int lotnisko::getl_miejsc() const{ //getter
     return l_miejsc;
}

lotnisko& lotnisko::operator+=(samolot &s){ //dodawanie samolotu do lotniskou
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

lotnisko& lotnisko::operator-=(samolot &s){ //dodawanie samolotu do lotniskou
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

ostream& operator<< (ostream &os,  lotnisko &h){ // przeciązenie operatora <<
    os<<"---lotnisko----------------------------"<<endl;
    os<<"Nazwa: "<<h.getnazwa_lotniska()<<" L. miejsc: "<<h.getl_miejsc()<<endl<<endl;
    for (int i=0; i<h.wolne; i++){
        cout<<(*h.han[i]);
    }
    return os;
}
