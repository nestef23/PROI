#ifndef samW
#define samW
#include "samolotT.cpp"
using namespace std;


class samolotW : public samolotT
{
    int klasa_pancerza;
    bool sprzet_zwiadu;
    string haslo;

public:


    samolotW(string n="BRAK", string w="BRAK", int p=0, int z=0, int l=0, bool m=0, int ll=0, int k=0, bool s=0, string h ="123") : samolotT( n,  w,  p, z, l, m, ll){ //konstruktor

        klasa_pancerza=k;
        sprzet_zwiadu=s;
        haslo = h;
        #ifdef DEBUG
        cout<<"Stworzono samolotW"<<endl;
        #endif // DEBUG
    }

     ~samolotW(){ //destruktor
         #ifdef DEBUG
        cout<<"Usunieto samolotW"<<endl;
        #endif // DEBUG
    }

    void status()const{
        cout<<"Samolot transportowy wojskowy"<<endl;
    }

     void setklasa(int k){ //setter
        string s;
        cout<<"Podaj haslo dostepu"<<endl;
        cin>>s;
        if (s==haslo)
            klasa_pancerza = k;
        else
            cout<<"Brak dostępu"<<endl;
     }

     void sethaslo(){ //setter
        string s;
        cout<<"Podaj stare haslo dostepu"<<endl;
        cin>>s;
        if (s==haslo){
            cout<<"Podaj stare haslo dostepu"<<endl;
            cin>>s;
            haslo=s;
        }
        else
            cout<<"Brak dostępu"<<endl;
     }

     void setzwiad(int z){ //setter
        sprzet_zwiadu = z;
        string s;
        cout<<"Podaj haslo dostepu"<<endl;
        cin>>s;
        if (s==haslo)
            sprzet_zwiadu = z;
        else
            cout<<"Brak dostępu"<<endl;
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

    friend ostream& operator<< (ostream &os, samolotW &s){ // przeciązenie operatora <<
    cout<<"Nazwa: "<<s.getnazwa()<<" ,Wlasciciel: "<<s.getwlasciciel()<<endl;
    cout<<"Predkosc: "<<s.getpredkosc()<<" ,Zasieg: "<<s.getzasieg()<<endl;
    cout<<"Ladownosc: "<<s.getladownosc()<<" ,Mrozone: "<<s.getmrozone()<<endl;
    cout<<"klasa pancerza: "<<s.getklasa()<<" ,Sprzet zwiadowczy: "<<s.getzwiad()<<endl<<endl;

    return os;
}
    void setladownosc(int l){ //setter
        string s;
        cout<<"Podaj haslo dostepu"<<endl;
        cin>>s;
        if (s==haslo)
            ladownosc = l;
        else
            cout<<"Brak dostępu"<<endl;
    }

    void setmrozone(bool m){ //setter
        string s;
        cout<<"Podaj haslo dostepu"<<endl;
        cin>>s;
        if (s==haslo)
            mrozone = m;
        else
            cout<<"Brak dostępu"<<endl;
    }

    void setzasieg(int z){ //setter
         string s;
        cout<<"Podaj haslo dostepu"<<endl;
        cin>>s;
        if (s==haslo)
            zasieg = z;
        else
            cout<<"Brak dostępu"<<endl;
    }
    void setpredkosc(int p){ //setter
         string s;
        cout<<"Podaj haslo dostepu"<<endl;
        cin>>s;
        if (s==haslo)
            predkosc = p;
        else
            cout<<"Brak dostępu"<<endl;
    }

};

#endif
