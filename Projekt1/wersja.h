#include <ostream>
class wersja
{
public:
    int siedzenia_B;
    int siedzenia_E;

public:
    wersja(int b=0, int e=0);;
    ~wersja();

    void setsiedzenia_B(int);
    void setsiedzenia_E(int);
    int getsiedzienia_B();
    int getsiedzienia_E();

    bool operator!=(const wersja &w) const;
    wersja& operator=(const wersja &w);

    friend std::ostream& operator<<(std::ostream &os,  wersja &s);
};
