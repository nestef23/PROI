#include "samolot.h"
class hangar
{
    std::string nazwa_lotniska;
    int nr_miejsca;
    samolot lista[10];
public:
    hangar();
    ~hangar();

    samolot operator+(const samolot &s) const;
    samolot operator-(const samolot &s) const;
    samolot operator+=(const samolot &s) const;
    samolot operator-=(const samolot &s) const;
};
