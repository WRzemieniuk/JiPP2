#include <iostream>


using namespace std;

template<typename T>
T addS(T a, T b){
    return a+b;
}

template<typename T>
T minAB(T a, T b){
    return (a<b)?a:b;
}

template<typename T>
T maxAB(T a, T b){
    return (a>b)?a:b;
}

template<typename T>
void printArray(T *a, int n){
    std::cout<<"Tablica a: ";
    for (int i = 0; i <n ; ++i) {
        std:: cout<<*a<<" ";
        a++;
    }
}

template<typename T>
void printMatrix(T **a, int rows, int columns){
    std::cout<<"Macierz a: "<<std::endl;
    for (int i = 0; i <rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std:: cout<<**a<<" ";
            *a++;
        }
        std::cout<<std::endl;
        a++;
    }
}
int main() {

    double tablica[]={3.5,1.3, 5.7, 7.7, 8.2};
    int n=sizeof(tablica)/sizeof(tablica[0]);

    double macierz[2][3]={{3.5,1.3, 5.7}, {7.7, 8.2, 9.9}};
        addS<int>(5,5);
        addS(5.1, 5.2);

        std::cout<<"Min: "<<minAB<int>(4,6)<<std::endl;
        std::cout<<"Max: "<<maxAB<int>(9,6)<<std::endl;
    printArray<double>(tablica, n);
    printMatrix<double>(*macierz[3], 2, 3);

    return 0;
}