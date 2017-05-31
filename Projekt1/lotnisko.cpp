#ifndef lotn
#define lotn

#include <iostream>
#include "samolotT.cpp"
#include "samolotP.cpp"
#include "samolotA.cpp"
#include "samolotW.cpp"
#include <vector>
using namespace std;

template <class T>
class lotnisko
{
    string nazwa_lotniska;
    int l_miejsc; //maksymalna liczba elementów wektora
    int wolne;
    vector<T*>  han;
public:
    lotnisko(string nazwa = "BRAK", int n=0);
    ~lotnisko();

    void setnazwa_lotniska(string);
    void setl_miejsc(int);
    void deletesamolot(int);

    string getnazwa_lotniska() const;
    int getl_miejsc() const;

    lotnisko<T>& operator+=(T& s);

    friend ostream& operator<< (ostream& os,  lotnisko<T>& l){ // przeciązenie operatora <<
        os<<"---lotnisko-----samolotP-----------------------"<<endl;
        os<<"Nazwa: "<<l.getnazwa_lotniska()<<" L. miejsc: "<<l.getl_miejsc()<<endl<<endl;
        for (int i=0; i<l.wolne; i++){
            cout<<(*l.han[i]);
        }
        return os;
    }
};

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
    try{
        if(wolne>=l_miejsc)
            throw l_miejsc;
        han.push_back(&s);
        wolne++;
        cout<<"Dodano samolot"<<endl;
    }
    catch(int e){
        cout<<"Zajeto wszystkie "<<e<<" miejsc"<<endl;
    }
    return *this;
}

template <class T>
void lotnisko<T>::deletesamolot(int i){
    try{
        if(han.begin()+i==NULL)
            throw i;
        lotnisko::han.erase(han.begin()+i);
        lotnisko::wolne--;
    }
    catch (int i){
        cout<<"Nie da sie usunac samolotu o indeksie "<<i<<endl;
    }
}


#endif
