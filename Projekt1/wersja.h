class wersja
{
public:
    int siedzenia_B;
    int siedzenia_E;
    bool salon;
public:
    wersja(int b=0, int e=0);;
    ~wersja();

    bool operator!=(const wersja &w) const;
    wersja& operator=(const wersja &w);
};
