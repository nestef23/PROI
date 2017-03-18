#include "samolot.h"
#include <ostream>
class hangar
{
    std::string nazwa_lotniska;
    int l_miejsc;
    int wolne;
    samolot *lista;
public:
    hangar(std::string nazwa = "BRAK", int n=0);
    ~hangar();

    hangar operator+=(const samolot &s);

    friend
    std::ostream& operator<<(std::ostream &os, const hangar &h);



};
