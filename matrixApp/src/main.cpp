#include <iostream>
#include "matrixLib.h"
#include "../include/appFunctions.h"

using namespace std;


int main(int argc, char *argv[]) {

    help();
    string argument=argv[1];
    string argument2=argv[2];
    structureOfProgram(argc,argument,argument2);



    return 0;
}
