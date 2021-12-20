//
// Created by weronika on 06.12.2021.
//

#ifndef DZIEDZICZENIE_LINE_H
#define DZIEDZICZENIE_LINE_H


#include <iostream>
#include <vector>
#include "Stop.h"

using namespace std;

class Line {
private:
    string number;
    string direction;
    vector<Stop *> stops;

public:
    Line(const string &number, const string &direction);

    void addStop(Stop * stop);

    void print();

};


#endif //DZIEDZICZENIE_LINE_H
