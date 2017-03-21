#include "samolot.h"
#include <ostream>
#include <vector>
using namespace std;
class hangar
{
    string nazwa_lotniska;
    int l_miejsc; //maksymalna liczba elementów wektora
    int wolne;
    vector<samolot*>  han;
public:
    hangar(string nazwa = "BRAK", int n=0);
    ~hangar();

    void setnazwa_lotniska(string);
    void setl_miejsc(int);
    string getnazwa_lotniska() const;
    int getl_miejsc() const;

    hangar& operator+=(samolot &s);
    hangar& operator-=(samolot &s);

    friend
    std::ostream& operator<<(std::ostream &os, hangar &h);



};
