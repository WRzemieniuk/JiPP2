//
// Created by weronika on 12.12.2021.
//
#include<iostream>
#include<cstdlib>
#include<ctime>

//wskazniki referencje rand wyjatki

int randomNumberAB(int a, int b);
int maxValue(int *tab, int dim);
int* inverseArray(int *tab, int dim);
void averagePointer(int *wsk1, int *wsk2, double *average);
void zmien(int &liczba);
void FunkcjaWczytujaca();
double divideByZero(int a, int b);

int main(){

    int a=5, b=0;
    std::cout<<"Dzielenie:  "<< divideByZero(a,b);

    //FunkcjaWczytujaca();

    //OBSUGA WYJATKU

//    try{
//        int n;
//        std::cout<<"Podaj liczbe: ";
//        std::cin>>n;
//
//        if(n<0) throw 1;
//        if(n==0) throw 2;
//        if(n>100) throw 3;
//
//        std::cout<<"W przeciwnym razie wszytk dobrze. "<<std::endl;
//        //dalszy kod ...
//    }
//    catch(int x){//złap to co jest po throw czyli liczby int 1, 2, 3;
//        std::cout<<"Wyjątek nr "<<x<<std::endl;
//        if(x==1)
//            std::cout<<"Nie możesz podac ujemnej liczby! "<<std::endl;
//        if(x==2)
//            std::cout<<"Nie możesz podac zera! "<<std::endl;
//    }


//wyjatek z string



//    int test=1;
//    zmien(test);
//    std:: cout<<"Po zamianie: "<<test<<std::endl;
//
//    srand( time( NULL ) );
//    //std::cout<< randomNumberAB(2,3);
//
//    int dim=5;
//    int *tab=new int[dim];
//    for (int i = 0; i <dim ; ++i) {
//        tab[i]= randomNumberAB(1,100);
//    }
//
//    //wypisywanie tablicy
//    std::cout<<"Tablica nr 1"<<std::endl;
//    for (int i = 0; i < dim; ++i) {
//        std::cout<<tab[i]<<" ";
//    }
//
//    std::cout<<"Max: "<<maxValue(tab, dim)<<std::endl;
//
//
//   tab=inverseArray(tab, dim);
//    std::cout<<"Tablica po odwróceniu"<<std::endl;
//    for (int i = 0; i < dim; ++i) {
//        std::cout<<tab[i]<<" ";
//    }
//
//
//
//    //ZAD WSK
//    int first, second;
//    double srednia;
//    std::cout<<std::endl;
//    std:: cout<<"Podaj dwie liczby: ";
//    std::cin>>first>>second;
//    std:: cout<<first <<"  "<<second<<std::endl;
//
//    int *wsk_first=&first;
//    int *wsk_second=&second;
//    averagePointer(wsk_first, wsk_second, &srednia);//tu bedzie adresem
//    std::cout<<"Srednia: "<<srednia<<std::endl;
//    return 0;
}

//losuje z przedziału a b
int randomNumberAB(int a, int b){
    return rand()%(b-a+1)+a;
}

int maxValue(int *tab, int dim){//lub tab[]

    int max=tab[0];
    for (int i = 1; i <dim; ++i) {
        if(tab[i]>max)
            max=tab[i];
    }
    return max;
}

int* inverseArray(int *tab, int dim){
    int *invArray=new int[dim];
    int counter=0;
    for (int i = dim-1; i>=0; i--) {
        invArray[counter]=tab[i];
        counter++;
    }

    return invArray;
    //delete [] inverseArray;
}

void averagePointer(int *wsk1, int *wsk2, double *average){

    *wsk1*=2;
    std::cout<<"Wsk1: "<<*wsk1<<std::endl;
   *average=(float)(*wsk1+*wsk2)/2.;
}

void zmien(int &liczba)
{
    // modyfikując referencję modyfikujemy też zmienną oryginalną

    liczba = 123456;
}

void FunkcjaWczytujaca(){
    try{
        int a, b;
        std::cout<<"Podaj dwie liczby: ";
        std::cin>>a>>b;

        if(a<0) throw "Liczba a jest ujemna";
        if(b<0) throw "Liczba b jest ujemna";

    }
    catch(const char *s){
        std::cout<<"WYJATEK: "<<s;
    }
}

double divideByZero(int a, int b){
    try{
        if(b==0) throw "Nastąpiła próba dzielenia przez zero";

        return (double)a/b;
    }
    catch(const char* s){
        std::cout<<"WYJATEK: "<<s;
        exit(1);
    }
}