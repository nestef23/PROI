#include<string>
using namespace std;
class pilot
{
    string imie;
    string nazwisko;
    int lata_pracy;
    int stopien_licencji;

public:
    pilot(string i ="BRAK", string n="BRAK", int l=0, int s=0);
    ~pilot();

    void wypisz();

    void setimie(string);
    void setnazwisko(string);
    void setlata(int);
    void setstopien(int);

    string getimie()const;
    string getnazwisko()const;
    int getlata()const;
    int getstopien()const;

    friend
    std::ostream& operator<<(std::ostream &os, pilot &p);
};
