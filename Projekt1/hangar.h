#include "samolot.h"
#include <ostream>
#include <vector>
using namespace std;
class hangar
{
    std::string nazwa_lotniska;
    int l_miejsc;
    int wolne;
    vector<samolot>  han;
public:
    hangar(string nazwa = "BRAK", int n=0);
    ~hangar();

    void setnazwa_lotniska(string);
    void setl_miejsc(int);
    std::string getnazwa_lotniska();
    int getl_miejsc();

    hangar& operator+(samolot &s);

    friend
    std::ostream& operator<<(std::ostream &os, const hangar &h);



};
