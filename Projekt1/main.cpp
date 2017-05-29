#include <iostream>
#include "testy.cpp"
#define _DEBUG
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
         //   test2();
        }
        if (s=="test3"){
         //   test3();
        }
        if (s=="test4"){
         //   test4();
        }
        if (s=="test5"){
         //   test5();
        }
        if (s=="test6"){
         //   test1();
        }
    }

    return 0;
}
