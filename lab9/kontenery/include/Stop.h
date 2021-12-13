//
// Created by weronika on 06.12.2021.
//

#ifndef DZIEDZICZENIE_STOP_H
#define DZIEDZICZENIE_STOP_H


#include <iostream>

using namespace std;

class Stop {
private:
    long id;
    string name;
    double latitude;
    double longitude;

public:
    Stop(long id, const string &name, double latitude, double longitude);

    Stop() {};

    void print();
};

#endif //DZIEDZICZENIE_STOP_H
