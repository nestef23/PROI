#include<string>
#include<vector>
using namespace std;
class hostessa
{
    string imie;
    string nazwisko;
    int lata_pracy;
    vector <string> jezyki;

public:
    hostessa(string i ="BRAK", string n="BRAK", int l=0);
    ~hostessa();

    void wypisz();

    void setimie(string);
    void setnazwisko(string);
    void setlata(int);
    void addjezyk(string);
    void deletejezyk(int);

    string getimie()const;
    string getnazwisko()const;
    int getlata()const;
   // int getjezyk(int)const;
    string getjezyki()const;

    friend
    std::ostream& operator<<(std::ostream &os, hostessa &p);
};
