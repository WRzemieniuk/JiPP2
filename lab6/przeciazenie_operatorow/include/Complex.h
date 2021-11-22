//
// Created by weronika on 22.11.2021.
//

#ifndef PRZECIAZENIE_OPERATOROW_COMPLEX_H
#define PRZECIAZENIE_OPERATOROW_COMPLEX_H


class Complex {
private:
    double r,i;

public:
    Complex(double,double);
    void print();
    Complex operator+(const Complex &v2){
        return {r+v2.r,i+v2.i};
    }

};


#endif //PRZECIAZENIE_OPERATOROW_COMPLEX_H
