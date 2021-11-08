
#include "../include/Prostopadloscian.h"
#include <iostream>

using namespace std;

Prostopadloscian::Prostopadloscian() {

    a=5;
    b=10;
    c=15;
    polePowierzchni();

}

void Prostopadloscian::setValue(unsigned int a, unsigned int b, unsigned int c) {
    this->a=a;
    this->b=b;
    this->c=c;
}

unsigned int Prostopadloscian::getValueA() {
    return a;
}
unsigned int Prostopadloscian::getValueB() {
    unsigned int tab[3]={a,b,c};
    //return tab;
    return b;
}
unsigned int Prostopadloscian::getValueC() {
    unsigned int tab[3]={a,b,c};
    //return tab;
    return c;
}
unsigned int Prostopadloscian::polePowierzchni(){

    return 2*a*b+2*a*c+2*b*c;
}

void Prostopadloscian::printProstopadloscian(unsigned int polePowierzchni){
    cout<<"Pole powierzchni prostopadloscianu wynosi= "<<polePowierzchni<<endl;
}