//
// Created by weronika on 22.11.2021.
//

#include "../include/Figure.h"
#include <iostream>
using namespace std;
int main(){
//    Figure f1("square","red");
//    Triangle t1("triangleNumber1","blue");
//    cout<<"f1: "<<endl;
//  f1.print();
//  cout<<"t1: "<<endl;
//  t1.print();
//  cout<<"obw="<<t1.obwod(1,2,3);
//

    Figure *circle = new Circle(5);
    Figure *rectangle = new Rectangle(5, 18);

    cout << "Circle area: " << circle->getArea() << endl;
    cout << "Rectangle area: " << rectangle->getArea() << endl;
    return 0;
}