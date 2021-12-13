//
// Created by weronika on 12.12.2021.
//

#ifndef DZIEDZICZENIE_PROSTOPADLOSCIANLAB4_H
#define DZIEDZICZENIE_PROSTOPADLOSCIANLAB4_H


class ProstopadloscianLab4 {
private:
    double a, b, c;

public:
    double polePowierzchni();//(double a, double b, double c);
    void set(double a, double b, double c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    double getA(){
        return a;
    }

    double getB(){
        return b;
    }

    double getC(){
        return c;
    }
};


#endif //DZIEDZICZENIE_PROSTOPADLOSCIANLAB4_H
