//
// Created by weronika on 21.11.2021.
//
//
#include <iostream>
#include "../include/Vector.h"
#include "../include/Complex.h"
#include "../include/Triangle.h"
#include "../../funkcje_zaprzyjaznione/include/Node.h"
using namespace std;

int main(){
    /*
    Vector v1(1,1);
    Vector v2(5,10);
    Vector v3=v1+v2;
    v3=v1.operator+(v2);//przekazywanie jak zwyklej funkcji z paraetrem v2 jako lewym operandem

    cout<<"v1=";
    v1.print();
    cout<<"v2=";
    v2.print();

    (v1+v2).print();
    (v1 += v2).print();
    v1.print();

    //prceciwny
    //v1.operator~().print();
    cout<<"Przeciwny";
    ~v1;
    v1.print();

    //iloczyn skalarny
    cout<<"Iloczyn skalarny: "<<(v1*v2)<<endl;

    //skalar
    cout<<"Skalar: ";
    (v1^5).print();
    cout<<"Friend";(5^v1).print();

    //porownanie
    cout<<"Porownanie: "<<(v1==v2)<<endl;


    cout<<endl<<"COMPLEX"<<endl;
    Complex c1(2,3), c2(4,5);
    //dodawanie
    cout<<"Dodawanie:";
    (c1+c2).print();

    cout<<"COUT<<: ";
    cout<<v1;
    */

    cout<<"Triangle"<<endl;
    Node a,b(5,8),c(1,16);
    Triangle triangle(a, b, c, "First Triangle");

    triangle.display();
    //cout<<triangle << endl;

    return 0;
}