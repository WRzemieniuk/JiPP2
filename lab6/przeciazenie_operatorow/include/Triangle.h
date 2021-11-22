//
// Created by weronika on 22.11.2021.
//

#ifndef PRZECIAZENIE_OPERATOROW_TRIANGLE_H
#define PRZECIAZENIE_OPERATOROW_TRIANGLE_H

#include "../../funkcje_zaprzyjaznione/include/Node.h"
#include <iostream>
using namespace std;

class Triangle {

private:
    Node a,b,c;
    string triangleName="nazwa";
public:
    Triangle();
    Triangle(Node,Node,Node,string);
    void display();


};


#endif //PRZECIAZENIE_OPERATOROW_TRIANGLE_H
