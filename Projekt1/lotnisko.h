#include "samolotT.h"
//#include "samolotP.h"
#include <ostream>
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

    friend std::ostream& operator<<(std::ostream& os, lotnisko<samolotP>& l);
    friend std::ostream& operator<<(std::ostream& os, lotnisko<samolotT>& l);



};
