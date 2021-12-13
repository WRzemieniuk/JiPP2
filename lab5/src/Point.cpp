//
// Created by weronika on 08.11.2021.
//

#include "../include/Point.h"


Point::Point(double x, double y, string name) : name(name) {
   this->x=new double;//!!!!
   this->y=new double;//!!!!
    *this->x = x;
    *this->y = y;
}
Point::Point(Point &point){//lonstruktor kopiujący
    name=point.name;
    x=new double;//!!!!
    y=new double;
    *x=*point.x;//kopiowanie wartosci
    *y=*point.y;
}
Point::~Point(){
    delete x;
    delete y;
}

Point::Point(string name) : name(name) {
    *x = *y = 0;
}

double Point::getX() {
    return *x;
}

void Point::setX(double x) {
    *this->x = x;
}

double Point::getY() {
    return *y;
}

void Point::setY(double y) {
    *this->y = y;
}

void Point::printData() const {
    cout << "Point " << name << " (x = " << *x << ", y = " << *y << ")\n";
}

void Point::setName(string name) {
    this->name = name;
}

bool Point::operator==(const Point &rhs) const {
    return x == rhs.x &&
           y == rhs.y &&
           name == rhs.name;
}

bool Point::operator!=(const Point &rhs) const {
    return !(rhs == *this);
}

const string &Point::getName() const {
    return name;
}