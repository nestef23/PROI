#include "samolot.h"
#include <ostream>
#include <vector>
using namespace std;
class lotnisko
{
    string nazwa_lotniska;
    int l_miejsc; //maksymalna liczba elementów wektora
    int wolne;
    vector<samolot*>  han;
public:
    lotnisko(string nazwa = "BRAK", int n=0);
    ~lotnisko();

    void setnazwa_lotniska(string);
    void setl_miejsc(int);

    string getnazwa_lotniska() const;
    int getl_miejsc() const;

    lotnisko& operator+=(samolot &s);
    lotnisko& operator-=(samolot &s);

    friend
    std::ostream& operator<<(std::ostream &os, lotnisko &h);



};
