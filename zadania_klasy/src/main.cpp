
#include<iostream>
#include "../include/Prostopadloscian.h"

using namespace std;

int main(){
    Prostopadloscian nowyProstopadlosian;
    nowyProstopadlosian.setValue(1,2,2);
    //cout<<nowyProstopadlosian.getValueC();
    nowyProstopadlosian.printProstopadloscian(nowyProstopadlosian.polePowierzchni());

    return 0;
}
