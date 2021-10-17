#include<iostream>
#include "../include/calc.h"
using namespace std;
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b){
    return a-b;
}
double volume(int a, int b, int h, int H)//Pp*H gdzie Pp=0.5*h*(a+b)
{
    return H*0.5*(a+b)*h;
}
void help(){
    cout<<"-------Help--------"<<endl;
    cout<<"Simple calculatur"<<endl<<endl;
    cout<<"Działania: "<<endl<<
          "1.add [a] [b]" <<endl<<
          "     Dodawanie dwóch liczb ([a] i [b]) całkowitych."<<endl<<
          "2. subtract [a] [b]" <<endl<<
          "     Odejmowanie dwóch liczb ([a] i [b]) całkowitych."<<endl<<
          "3. volume [a] [b] [h] [H]"<<endl<<
          "     Obliczanie objętości graniastosłupa prostego o podstawie trapezu."<<endl;


}

void menu(int argc, char *argv[])
{
    int dzialanie=stoi(argv[1]);
    cout<<endl<<endl;
    cout<<"Wykonano działanie nr "<<dzialanie<<endl;

    if(dzialanie==1) {
        int a = stoi(argv[2]), b = stoi(argv[3]);
        if(argc-1!=3){
            error(argc, argv);
            return;
        }
        cout<<"1. Wynik dodawania a="<<a<<" b="<<b<<" wynosi: ";
        cout << add(a, b) << endl;
    }
    else if(dzialanie==2){
        int a = stoi(argv[2]), b = stoi(argv[3]);
        if(argc-1!=3){
            error(argc, argv);
            return;
        }
        cout<<"2. Wynik odejmowania a="<<a<<"-b="<<b<<" wynosi: ";
        cout << subtract(a, b) << endl;
    }
    else if(dzialanie==3){
        int a = stoi(argv[2]), b = stoi(argv[3]), h=stoi(argv[4]), H=stoi(argv[5]);
        if(argc-1!=5){
            error(argc, argv);
            return;
        }
        cout<<"3. Objętość graniastosłupa prostego o podstawie trapezu, gdzie a="<<a<<" b="<<b<<" h="<<h<<" H="<<H<<" wynosi: ";
        cout<<volume(a,b,h,H)<<endl;

    }
    else if(dzialanie==4){
        help();
    }
    else{
        error(argc, argv);
    }



}

void error(int argc, char *argv[]){
    int dzialanie=stoi(argv[1]);
    if(dzialanie>4||dzialanie<1){
        cout<<"Błędna liczba pierwszego argumentu"<<endl;
        help();
        return;
    }
    else{
        cout<<"Błędna liczba argumentów!"<<endl<<endl;
        help();

    }

}