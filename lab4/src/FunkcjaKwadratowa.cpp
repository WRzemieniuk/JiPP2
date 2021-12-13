//
// Created by weronika on 12.12.2021.
//
#include<iostream>
#include "FunkcjaKwadratowa.h"

FunkcjaKwadratowa::FunkcjaKwadratowa(): a(1.0), b(1.3), c(2.3) {
}
FunkcjaKwadratowa::FunkcjaKwadratowa(double ak, double bk, double ck) {
    //a=b=c=1;
    a=ak;
    b=bk;
    c=ck;
}
void FunkcjaKwadratowa::set(double aa, double bb, double cc) {
//    this->a=a;
//    this->b=b;
//    this->c=c;
    a=aa;
    b=bb;
    c=cc;
}

double FunkcjaKwadratowa::getA() {
    return a;
}

void FunkcjaKwadratowa::print() {
    std::cout<<a<<"x^2 + "<<b<<"x + "<<c<<std::endl;
}