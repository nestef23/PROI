#include <iostream>
//#include "parametry.h"
//#include "wersja.h"
//#include "samolot.h"
#include "hangar.h"

#define _DEBUG
using namespace std;

int samolot::licznik = 0;

int main()
{

#ifdef _DEBUG
    cout<<"Wersja do debugowania"<<endl;
#else
    cout<<"Wersja relase"<<endl;
#endif // _DEBUG

    cout<<"Jest "<<samolot::ileObiektow()<<" obiektów typu samolot"<<endl;
    samolot a;
    cout<<"Jest "<<samolot::ileObiektow()<<" obiektów typu samolot"<<endl;
    samolot *b = new samolot;
    cout<<"Jest "<<samolot::ileObiektow()<<" obiektów typu samolot"<<endl;
    delete b;
    cout<<"Jest "<<samolot::ileObiektow()<<" obiektów typu samolot"<<endl;
    return 0;
}
