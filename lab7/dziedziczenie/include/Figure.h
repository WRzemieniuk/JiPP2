//
// Created by weronika on 22.11.2021.
//invalid casches jesli pasek this file not belong

#ifndef POLIMORFIZM_FIGURE_H
#define POLIMORFIZM_FIGURE_H

#include <iostream>
using namespace std;

class Figure {
protected:
    string name=" ";
    string color=" ";
public:
    Figure();
    Figure(string, string);
    virtual double getArea() = 0; //pozwala na spersonalizowane użycie tej funji w róznych klasach np dla pola teojkata i pola kwadratu
    double pole(){};
    void print();
};

class Circle:public Figure{
protected:
    double promien;
public:
    Circle(double r);
   double getArea();

};

class Rectangle:public Figure{
protected:
    double a,b;
public:
    Rectangle(double, double);
    double getArea();
};
class Triangle: public Figure{
public:
    Triangle(){};
    Triangle(string, string);
    double pole(int a, int h);
    int obwod(int a, int b, int c);
};

class Square: public Figure{
public:
    Square(){};
    Square(string, string);
    double pole(int a);
    int obwod(int a);
};


#endif //POLIMORFIZM_FIGURE_H
