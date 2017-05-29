#ifndef samW
#define samW
#include "samolotT.cpp"
using namespace std;


class samolotW : public samolotT
{
    int klasa_pancerza;
    bool sprzet_zwiadu;

public:


    samolotW(string n="BRAK", string w="BRAK", int p=0, int z=0, int l=0, bool m=0, int ll=0, int k=0, bool s=0) : samolotT( n,  w,  p, z, l, m, ll){ //konstruktor

        klasa_pancerza=k;
        sprzet_zwiadu=s;

        #ifdef _DEBUG
        cout<<"Stworzono samolotW"<<endl;
        #endif // _DEBUG
    }

     ~samolotW(){ //destruktor
        #ifdef _DEBUG
        cout<<"Usunieto samolotW"<<endl;
        #endif // _DEBUG
    }

     void setklasa(int k){ //setter
        klasa_pancerza = k;
     }

     void setzwiad(int z){ //setter
        sprzet_zwiadu = z;
     }

     int getklasa()const{ //getter
        return klasa_pancerza;
     }

     int getzwiad()const{ //getter
        return sprzet_zwiadu;
     }

     samolotW& operator=(samolotW &s){ // przeciązenie operatora =
        predkosc = s.getpredkosc();
        zasieg = s.getzasieg();
        ladownosc = s.getladownosc();
        mrozone = s.getmrozone();
        klasa_pancerza = s.getklasa();
        sprzet_zwiadu = s.getzwiad();

        return *this;
    }

    bool operator==(samolotW &s) {  // przeciązenie operatora ==
        bool kopia = 1;
        if(predkosc!=s.getpredkosc())
            kopia =0;
        if(zasieg!=s.getzasieg())
            kopia =0;
        if(ladownosc!=s.getladownosc())
            kopia =0;
        if(mrozone!=s.getmrozone())
            kopia =0;
        if(klasa_pancerza!=s.getklasa())
            kopia =0;
        if(sprzet_zwiadu!=s.getzwiad())
            kopia =0;
        return kopia;
    }


};

#endif
