#ifndef samP
#define samP

#include "hostessa.h"
#include "samolotA.cpp"
using namespace std;

class samolotP : public samolotA
{

public:

    vector<hostessa> zaloga;
    static int licznikP;

    samolotP(string n="BRAK", string w="BRAK", int p=0, int z=0): samolotA(n,w,p,z){ //konstruktor
        #ifdef DEBUG
        cout<<"Stworzono samolotP"<<endl;
        #endif // DEBUG
    }

    ~samolotP(){ //destruktor
        #ifdef DEBUG
        cout<<"Usunieto samolotP"<<endl;
        #endif // DEBUG
    }

 /*   string schemat()const{
        string sss;
        sss =" samolotP -> "+samolotA::schemat();
    } */

    void addzaloga(hostessa h){
        zaloga.push_back(h);
    }
    void deletezaloga(int i){
        zaloga.erase(zaloga.begin()+i);
    }

    int ile()const{
        return zaloga.size();
    }

    bool operator==(samolotP &s) {  // przeciązenie operatora ==
        bool kopia = 1;
        if(predkosc!=s.getpredkosc())
            kopia =0;
        if(zasieg!=s.getzasieg())
            kopia =0;
        return kopia;
    }

    samolotP& operator=(samolotP &s){ // przeciązenie operatora =
        predkosc = s.getpredkosc();
        zasieg = s.getzasieg();

        return *this;
    }

    void status()const{
        cout<<"Samolot pasazerski"<<endl;
    }

    friend ostream& operator<< (ostream &os, samolotP &s){ // przeciązenie operatora <<
    cout<<"Nazwa: "<<s.getnazwa()<<" ,Wlasciciel: "<<s.getwlasciciel()<<endl;
    cout<<"Predkosc: "<<s.getpredkosc()<<" ,Zasieg: "<<s.getzasieg()<<endl;
    cout<<"Liczba hostess: "<<s.ile()<<endl<<endl;


    return os;
}

}; //samolotP


#endif

