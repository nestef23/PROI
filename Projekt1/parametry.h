class parametry
{
    public:
    int predkosc_max;
    int zasieg_max;
    parametry(int p=0, int z=0);
    ~parametry();
    bool operator!=(const parametry &p) const;
};


