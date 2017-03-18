class parametry
{
    int predkosc_max;
    int zasieg_max;

public:
    parametry(int p=0, int z=0);
    ~parametry();

    void setpredkosc_max(int);
    void setzasieg_max(int);
    int getpredkosc_max() const;
    int getzasieg_max() const;

    bool operator!=(const parametry &p) const;
    parametry& operator=(const parametry &p);
};


