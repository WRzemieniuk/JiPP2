//
// Created by weronika on 22.11.2021.
//

#include "../include/Triangle.h"




Triangle::Triangle(Node aa, Node bb, Node cc, string nazwa) {
    this->a=aa;
    this->b=bb;
    this->c=cc;
    this->triangleName=nazwa;

}
Triangle::Triangle()
{

}

void Triangle::display() {
    cout<<"Informacje o wierzchołkach:"<<endl;
    cout<<"a= ";
    a.display();
    cout<<"b= ";
    b.display();
    cout<<"c= ";
    c.display();


}