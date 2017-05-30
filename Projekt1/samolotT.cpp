#ifndef samT
#define samT
#include "samolotA.cpp"
using namespace std;


class samolotT : public samolotA
{
public:
    int ladownosc;
    bool mrozone;
    double ladunek;


    samolotT(string n="BRAK", string w="BRAK", int p=0, int z=0, int l=0, bool m=0, int ll=0) : samolotA( n,  w,  p, z){ //konstruktor

        ladownosc = l;
        mrozone = m;
        ladunek = ll;
        #ifdef DEBUG
        cout<<"Stworzono samolotT"<<endl;
        #endif // DEBUG
    }

    ~samolotT(){ //destruktor
        #ifdef DEBUG
        cout<<"Usunieto samolotT"<<endl;
        #endif // DEBUG
    }

    void status()const{
        cout<<"Samolot transportowy"<<endl;
    }

     virtual void setladownosc(int l){ //setter
        ladownosc = l;
    }

    virtual void setmrozone(bool m){ //setter
        mrozone = m;
    }



    int getladownosc()const{ //getter
        return ladownosc;
    }

    bool getmrozone()const{ //getter
        return mrozone;
    }



    double getladunek()const{
        return ladunek;
    }

    bool operator==(samolotT &s) {  // przeciązenie operatora ==
        bool kopia = 1;
        if(predkosc!=s.getpredkosc())
            kopia =0;
        if(zasieg!=s.getzasieg())
            kopia =0;
        if(ladownosc!=s.getladownosc())
            kopia =0;
        if(mrozone!=s.getmrozone())
            kopia =0;
        return kopia;
    }

    samolotT& operator=(samolotT &s){ // przeciązenie operatora =
        predkosc = s.getpredkosc();
        zasieg = s.getzasieg();
        ladownosc = s.getladownosc();
        mrozone = s.getmrozone();

        return *this;
    }

    template <class T>
    void addladunek(T l){
        if(ladunek+l<=ladownosc){
            ladunek +=l;
        }
        else{
            cout<<"Brak miejsca"<<endl;
        }
    }

    template <class T>
    void deleteladunek(T l){
        if(ladunek-l>=0){
            ladunek -=l;
        }
        else{
            cout<<"Brak ladunku"<<endl;
        }
    }

   friend ostream& operator<< (ostream &os, samolotT &s){ // przeciązenie operatora <<
    cout<<"Nazwa: "<<s.getnazwa()<<" ,Wlasciciel: "<<s.getwlasciciel()<<endl;
    cout<<"Predkosc: "<<s.getpredkosc()<<" ,Zasieg: "<<s.getzasieg()<<endl;
    cout<<"Ladownosc: "<<s.getladownosc()<<" ,Mrozone: "<<s.getmrozone()<<endl<<endl;

    return os;
}

}; //samolotT





#endif


