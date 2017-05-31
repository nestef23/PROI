
#ifndef samA
#define samA

#include <iostream>
#include <string>
using namespace std;


class samolotA
{
public:
    string nazwa;
    string wlasciciel;
    int zasieg;
    int predkosc;


    samolotA(string n="BRAK", string w="BRAK", int p=0, int z=0){ //konstruktor

        nazwa = n;
        wlasciciel=w;
        zasieg =z;
        predkosc =p;

        #ifdef DEBUG
        cout<<"Stworzono samolotA"<<endl;
        #endif // DEBUG
    }

   ~samolotA(){ //destruktor

        #ifdef DEBUG
        cout<<"Usunieto samolotA"<<endl;
        #endif // DEBUG
    }

    virtual void status()const =0;
    virtual string schemat()const{
        string q = "samolotA";
        return q;
    };


    void setnazwa(string n){ //setter
        nazwa = n;
    }
    void setwlasciciel(string w){ //setter
        wlasciciel = w;
    }
    virtual void setzasieg(int z){ //setter
        zasieg = z;
    }
    virtual void setpredkosc(int p){ //setter
        predkosc = p;
    }

    string getnazwa()const{ //getter
        return nazwa;
    }
    string getwlasciciel()const{ //getter
        return wlasciciel;
    }
    int getzasieg()const{ //getter
        return zasieg;
    }
    int getpredkosc()const{ //getter
        return predkosc;
    }

}; //samolotA



#endif


