//
// Created by weronika on 12.12.2021.
//

#ifndef DZIEDZICZENIE_FUNKCJAKWADRATOWA_H
#define DZIEDZICZENIE_FUNKCJAKWADRATOWA_H


class FunkcjaKwadratowa {
private:
    double a, b, c;
public:
    FunkcjaKwadratowa();
    FunkcjaKwadratowa(double ak, double bk, double ck);//konstruktor parametryczny
    void set(double a, double b, double c);
    double getA();
    double getB();
    double getC();
    void print();
};


#endif //DZIEDZICZENIE_FUNKCJAKWADRATOWA_H
