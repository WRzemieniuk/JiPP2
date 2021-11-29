//
// Created by weronika on 22.11.2021.
//

#include "../include/Figure.h"
Figure::Figure() {}

Figure::Figure(string nazwa, string kolor) {
    this->name=nazwa;
    this->color=kolor;
}



Circle::Circle(double r):promien(r){}

Rectangle::Rectangle(double aa, double bb):a(aa),b(bb){}


double Circle::getArea() {
    return 3.1415*promien*promien;
}

double Rectangle::getArea() {
    return a*b;
}

Square::Square(string nazwa, string kolor) {
    this->name=nazwa;
    this->color=kolor;
}

Triangle::Triangle(string nazwa, string kolor) {
    this->name=nazwa;
    this->color=kolor;
}



void Figure::print() {
    cout<<"name: "<<name<<endl;
    cout<<"color: "<<color<<endl;
    //cout<<"pole: "<<pole();
}

double Triangle::pole(int a, int h) {
    return 0.5*a*h;
}

int Triangle::obwod(int a, int b, int c) {
    return a+b+c;
}


double Square::pole(int a) {
    return a*a;
}

int Square::obwod(int a) {
    return 4*a;
}