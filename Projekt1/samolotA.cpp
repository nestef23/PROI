
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

        cout<<"Stworzono samolotA"<<endl;
    }

   ~samolotA(){ //destruktor
        cout<<"Usunieto samolotA"<<endl;
    }

 //   virtual void status()const =0;
 //   virtual int ile()const =0;


    void setnazwa(string n){ //setter
        nazwa = n;
    }
    void setwlasciciel(string w){ //setter
        wlasciciel = w;
    }
    void setzasieg(int z){ //setter
        zasieg = z;
    }
    void setpredkosc(int p){ //setter
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


