/*#include <iostream>
#include "lotnisko.h"

#define _DEBUG
using namespace std;

template <class T>
lotnisko<T>::lotnisko(string nazwa, int n){ //konstruktor
    #ifdef _DEBUG
    cout<<"Stworzono lotnisko"<<endl;
    #endif // _DEBUG
    nazwa_lotniska = nazwa;
    l_miejsc=n;
    wolne=0;

}

template <class T>
lotnisko<T>::~lotnisko(){ //konstruktor
    #ifdef _DEBUG
    cout<<"Usunieto lotnisko"<<endl;
    #endif // _DEBUG
}
template <class T>
void lotnisko<T>::setnazwa_lotniska(string s){ //setter
    nazwa_lotniska = s;
}
template <class T>
void lotnisko<T>::setl_miejsc(int l){ //setter
        l_miejsc = l;
}
template <class T>
string lotnisko<T>::getnazwa_lotniska() const{ //getter
        return nazwa_lotniska;
}
template <class T>
int lotnisko<T>::getl_miejsc() const{ //getter
     return l_miejsc;
}

template <class T>
lotnisko<T>& lotnisko<T>::operator+=(T& s){ //dodawanie samolotu do lotniskou
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

template <class T>
void lotnisko<T>::deletesamolot(int i){
    lotnisko::han.erase(han.begin()+i);
    lotnisko::wolne--;
}


ostream& operator<< (ostream& os,  lotnisko<samolotP>& l){ // przeciązenie operatora <<
    os<<"---lotnisko-----samolotP-----------------------"<<endl;
    os<<"Nazwa: "<<l.getnazwa_lotniska()<<" L. miejsc: "<<l.getl_miejsc()<<endl<<endl;
    for (int i=0; i<l.wolne; i++){
        cout<<(*l.han[i]);
    }
    return os;
}

ostream& operator<< (ostream& os,  lotnisko<samolotT>& l){ // przeciązenie operatora <<
    os<<"---lotnisko-----samolotT-----------------------"<<endl;
    os<<"Nazwa: "<<l.getnazwa_lotniska()<<" L. miejsc: "<<l.getl_miejsc()<<endl<<endl;
    for (int i=0; i<l.wolne; i++){
        cout<<(*l.han[i]);
    }
    return os;
}


template class lotnisko<samolotP>;
template class lotnisko<samolotT>;

*/
