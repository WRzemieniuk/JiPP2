//
// Created by weronika on 22.11.2021.
//

#include "../include/Complex.h"
#include <iostream>

using namespace std;
Complex::Complex(double rr, double ii): r(rr), i(ii){}

void Complex::print() {
    cout<<r<<"+"<<i<<"i"<<endl;
}