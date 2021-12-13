
#include<iostream>
#include<cstdlib>
#include<ctime>
#include "../include/ProstopadloscianLab4.h"
#include "../include/FunkcjaKwadratowa.h"
using namespace std;
int main(){

//    ProstopadloscianLab4 nowyProst;
//    nowyProst.set(2,2,3);
//    cout<<nowyProst.polePowierzchni()<<endl;
//    cout<<"A: "<<nowyProst.getA()<<endl;

    //funkcja kwadratowa
    double a=5, b=2.3, c=3;
    FunkcjaKwadratowa f1;//(4,7,6);
    //f1.set(a,b,c);
    cout<<"a: "<<f1.getA()<<endl;
    f1.print();

    return 0;
}
