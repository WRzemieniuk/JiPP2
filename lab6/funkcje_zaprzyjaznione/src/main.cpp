//
// Created by weronika on 19.11.2021.
//
#include <iostream>
#include "../include/Node.h"
using namespace std;
int main(){
    Node obiekt1=Node(1,1);
    Node obiekt2=Node(2,2);

    cout<<"Odległość: "<<pointsDistance(obiekt1,obiekt2)<<endl;
    return 0;
}