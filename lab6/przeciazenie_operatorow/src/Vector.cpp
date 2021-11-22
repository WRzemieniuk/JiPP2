//
// Created by weronika on 21.11.2021.
//
//
#include <iostream>
#include "../include/Vector.h"
#include <math.h>
using namespace std;
Vector::Vector():x(0), y(0){}

Vector::Vector(double x, double y): x(x), y(y){}

void Vector::print() const{
    cout<<"["<<x<<", "<<y<<"]"<<endl;
}
double Vector::length() {
    return sqrt(x*x + y*y);
}

Vector operator^(const double &lhs, const Vector &rhs)
{
    return {lhs*rhs.x,lhs*rhs.y};
}
ostream &operator<< (ostream &out, const Vector &lhs)
{
    out << "[" << lhs.x << ", " << lhs.y << "]\n";
    return out;
}


