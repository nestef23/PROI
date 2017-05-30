#include "testy.h"
void test1(){
 //   samolotA s1; //nie da się

    samolotP s2("s2", "LOT", 500, 2000);
    cout<<endl<<s2;
    samolotT s3("s3", "DHL", 400, 2000, 0, 0, 5000);
    cout<<endl<<s3;
    samolotW s4("s4", "SZRP", 400, 2000, 0, 0, 5000, 2, 0);
    cout<<endl<<s4;
}

void test2(){

    samolotP s2("s2", "LOT", 500, 2000);
    s2.status();
    samolotT s3("s3", "DHL", 400, 2000, 0, 0, 5000);
    s3.status();
    samolotW s4("s4", "SZRP", 400, 2000, 0, 0, 5000, 2, 0);
    s4.status();
}

void test3(){

    samolotP p1("p1"), p2("p2");
    samolotT t1("t1"), t2("t2");
    samolotW w1("w1"), w2("w2");

    lotnisko <samolotP> l1("l1", 3);
    lotnisko <samolotT> l2("l2", 3);
    lotnisko <samolotW> l3("l3", 3);

    l1+=p1;
    l1+=p2;
    l2+=t1;
    l2+=t2;
    l3+=w1;
    l3+=w2;

    cout<<l1<<l2<<l3;
}

void test4(){

    samolotP p1("p1");
    samolotT t1("t1");
    samolotW w1("w1");

    p1.setnazwa("nowa1");
    w1.setnazwa("nowa2");
    t1.nazwa = "nowa3";

    //t1.getzwiad();

    cout<<p1<<t1<<w1;


}

void test5(){

samolotT t;
samolotW w;

t.setladownosc(5000);
w.setladownosc(5000);

cout<<w.getladownosc()<<endl;

w.setklasa(2);

cout<<w.getklasa()<<endl;

w.sethaslo();

w.setladownosc(5000);

cout<<w.getladownosc()<<endl;


}

