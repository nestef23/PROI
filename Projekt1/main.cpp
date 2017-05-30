#include <iostream>
#include "testy.h"
#define _DEBUG
#include <unistd.h>
using namespace std;


int main()
{
    cout<<"Krzysztof Cąderek - symulator samolotu"<<endl<<endl;


    string s;
    while (s!="q"){
        cout<<"Wpisz nazwę testu, który chcesz wykonać"<<endl;
        cin>>s;
        if (s=="test1"){
            test1();
        }
        if (s=="test2"){
            test2();
        }
        if (s=="test3"){
            test3();
        }
        if (s=="test4"){
            test4();
        }
        if (s=="test5"){
            test5();
        }
        if (s=="test6"){
         //   test1();
        }
    }

    cout << '-' << flush;
    for (int i =0; i<=3 ;i++) {
        usleep(100000);
        cout << "\b\\" << flush;
        usleep(100000);
        cout << "\b|" << flush;
        usleep(100000);
        cout << "\b/" << flush;
        usleep(100000);;
        cout << "\b-" << flush;
    }

    return 0;
}
