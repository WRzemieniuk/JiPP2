#include <iostream>
#include <limits>
#include <iomanip>
#include "../include/appFunctions.h"
#include "matrixLib.h"

void help(){

    cout<<"------------------------------------Help------------------------------------"<<endl<<
        "Program do obsługi funkcjonalności biblioteki z działaniami na macierzach."<<endl
        <<"Użytkownik ma podać dokładnie dwa argumenty wyowłania. Najpierw jeden z niżej wymienionych działań:"<<endl
        <<"* addMatrix-funkcja odpowiadająca za dodawanie dwóch macierzy A i B, które wraz z liczbą wierszy i kolumn są przekazywanymi argumentami do funkcji"<<endl
        <<"* subtractMatrix-funkcja odpowiadająca za odejmowanie dwóch macierzy A i B, które wraz z liczbą wierszy i kolumn są przekazywanymi argumentami do funkcji"<<endl
        <<"* multiplyMatrix-funkcja odpowiadająca za mnożenie dwóch macierzy A i B, które wraz z liczbą wierszy, kolumn macierzy A oraz liczbą kolumn macierzy B są przekazywanymi argumentami do funkcji"<<endl
        <<"* multiplyByScalar-funkcja odpowiadająca za mnożenie przez skalar macierzy A, która wraz z liczbą wierszy, kolumn oraz skalarem są przekazywanymi argumentami do funkcji. Skalar w funkcji jest przedstawiony za pomocą macierzy."<<endl
        <<"* transpozeMatrix-funkcja odpowiadająca za transponowanie macierzy A, która wraz z liczbą wierszy i kolumn są przekazywanymi argumentami do funkcji"<<endl
        <<"* powerMatrix-funkcja odpowiadająca za potęgowanie macierzy A, która wraz z liczbą wierszy, kolumn oraz stopniem potęgi są przekazywanymi argumentami do funkcji, funkcja korzysta z funkcji multiplyMatrix"<<endl
        <<"* determinantMatrix-funkcja odpowiadająca za obliczanie wyznacznika macierzy A, która wraz z liczbą wierszy i kolumn są przekazywanymi argumentami do funkcji."<<endl
        <<"Funkcja korzysta z rekurencji, warunkiem jej przerwania jest osiągniecie macierzy 2x2. Macierz jest rozwijana według wiersza o indeksie 0 i sukcesywnie tworzona jest podmacierz powstała z kolejno wykreślanych wartości rozwijanego wiersza."<<endl
        <<"Końcowy wynik to suma uzyskanych wyznaczników podmacierzy 2x2."<<endl
        <<"* swap-procedura odpowiadająca za zamianę dwóch elementów macierzy A, które przez referencję są przekazywanymi argumentami do funkcji"<<endl
        <<"* sortRow-procedura odpowiadająca za posortowanie elementów algorytmem bąbelkowym podanego przez użytkownika wiersza macierzy A, przekazywane argumenty to macierz A i liczba kolumn"<<endl
        <<"* sortRowsInMatrix-funkcja odpowiadająca za posortowanie wszytskich wierszy macierzy A, korzystając z sortRow"<< endl
        <<"Kolejny argument to typ danych:"<<endl
        <<"* double"<<endl
        <<"* int"<<endl
        <<"Użytkownik wpisuje z klawiatury macierz wierszami, liczby oddzielając spacją lub Enterem."<<endl
        <<"Aby uzyskać pomoc, jako pierwszy argument wywołania podaj help, drugi argument jest dowolny."<<endl<<endl;
}

//funkcja pobierajaca od uzytkowanika liczbe kolumn oraz wierszy, a nastepnie poszczegolych wartosci macierzy, poczym przydzielana zostaje dla niej pamiec
double **getMatrix(int *rows, int *columns, char nameOfMatrix){
    double **matrix;
    bool correct=false;
    int counter=0;


    cout<<"Podaj liczbę wierszy macierzy "<<nameOfMatrix<<":";
    while(!(cin>>*rows)){
        cout<<"To nie liczba!"<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Podaj poprawną liczbę wierszy: ";
    }
    cout<<"Podaj liczbę kolumn macierzy "<<nameOfMatrix<<":";
    while(!(cin>>*columns)){
        cout<<"To nie liczba!"<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Podaj poprawną liczbę kolumn: ";
    }


    matrix=new double*[*rows];
    for (int i = 0; i < *rows; ++i) {
        matrix[i]=new double[*columns];
    }
    cout<<"Podaj macierz wierszami: "<<endl;
    for (int i = 0; i < *rows; ++i) {
        for (int j = 0; j < *columns; ++j) {
            while(!(cin>>matrix[i][j])){
                cout<<"Wprowadziłeś niepoprawnie macierz!"<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"Wprowadź poprawnie macierz: ";
            }

            counter++;
            if(counter==*rows*(*columns)){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                break;
            }
        }
        cout<<endl;
    }


    return matrix;
}


int **getMatrixInt(int *rows, int *columns, char nameOfMatrix){
    int **matrix;
    bool correct=false;
    int counter=0;


    cout<<"Podaj liczbę wierszy macierzy "<<nameOfMatrix<<":";
    while(!(cin>>*rows)){
        cout<<"To nie jest poprawna liczba!"<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Podaj poprawną liczbę wierszy: ";
    }
    cout<<"Podaj liczbę kolumn macierzy "<<nameOfMatrix<<":";
    while(!(cin>>*columns)){
        cout<<"To nie jest poprawna liczba!"<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Podaj poprawną liczbę kolumn: ";
    }


    matrix=new int *[*rows];
    for (int i = 0; i < *rows; ++i) {
        matrix[i]=new int [*columns];
    }
    cout<<"Podaj macierz wierszami: "<<endl;
    for (int i = 0; i < *rows; ++i) {
        for (int j = 0; j < *columns; ++j) {
            while(!(cin>>matrix[i][j])){
                cout<<"Wprowadziłeś niepoprawnie macierz!"<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"Wprowadź poprawnie macierz: ";
            }

            counter++;
            if(counter==*rows*(*columns)){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                break;
            }
        }
        cout<<endl;
    }


    return matrix;
}


void printMatrix(double **matrix, int rows, int columns, string nameOfMatrix){
    cout<<"Macierz "<<nameOfMatrix<<":"<<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout<<right<<setw(3)<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void printMatrix(int **matrix, int rows, int columns, string nameOfMatrix){
    cout<<"Macierz "<<nameOfMatrix<<":"<<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout<<right<<setw(3)<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void structureOfProgram(int argc, string argument, string argument2) {

    if(argument=="help"){
        help();
    }
    if(argc!=3){
        cout<<"Nieprawidłowa liczba argumentów."<<endl;
        help();
        exit(1);
    }
    int aRows, aColumns;
    int bRows, bColumns;
    unsigned int powerDegree, nFirstIndex, mFirstIndex, nSecondIndex, mSecondIndex, indexRow;



    if(argument2=="double"){
        double **A, **B, scalar;
        cout << "Wybrane działanie: " << argument << endl;
        cout << "Wybrany typ danych: " << argument2 << endl;

        A = getMatrix(&aRows, &aColumns, 'A');
        printMatrix(A, aRows, aColumns, "A");


        if(argument == "addMatrix") {
            B = getMatrix(&bRows, &bColumns, 'B');
            printMatrix(B, bRows, bColumns, "B");
            if (aRows == bRows && aColumns == bColumns) {
                printMatrix(addMatrix(A, B, aRows, aColumns), aRows, aColumns, "A+B");

            }
            else{
                cout<<"Nie można wykonać dodawania macierzy!"<<endl;
            }
        }
        else if (argument == "subtractMatrix") {
            B = getMatrix(&bRows, &bColumns, 'B');
            printMatrix(B, bRows, bColumns, "B");
            if (aRows == bRows && aColumns == bColumns) {
                printMatrix(subtractMatrix(A, B, aRows, aColumns), aRows, aColumns, "A-B");
            }
            else{
                cout<<"Nie można wykonać odejmowania macierzy!"<<endl;
            }
        }
        else if(argument=="multiplyMatrix") {
            B = getMatrix(&bRows, &bColumns, 'B');
            printMatrix(B, bRows, bColumns, "B");
            if (aRows == bColumns && aColumns == bRows) {
                printMatrix(multiplyMatrix(A, B, aRows, aColumns, bColumns), aRows, bColumns, "AxB");
            }
            else{
                cout<<"Nie można wykonać mnożenia macierzy!"<<endl;
            }
        }
        else if(argument=="multiplyByScalar"){

            cout<<"Podaj skalar: "<<endl;
            while(!(cin>>scalar)){
                cout<<"To nie liczba!"<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"Podaj poprawny skalar: ";
            }

            printMatrix(multiplyByScalar(A, aRows, aColumns,scalar),aRows,aColumns,"skalar x A");

        }
        else if(argument=="transpozeMatrix"){
            printMatrix(transpozeMatrix(A,aRows,aColumns),aColumns,aRows,"transponowana");
        }
        else if(argument=="powerMatrix"){

            cout<<"Podaj stopień potęgi: "<<endl;
            while(!(cin>>powerDegree)){
                cout<<"To nie liczba!"<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"Podaj poprawny stopień potęgi: ";
            }

            if(aRows==aColumns){

                printMatrix(powerMatrix(A, aRows, aColumns,powerDegree),aRows,aColumns,"wynikowa potęgowania A");
            }
            else{
                cout<<"Macierz nie jest kwadratowa, nie można wykonać potęgowania!"<<endl;
            }


        }
        else if(argument=="matrixIsDiagonal"){
            if(aRows==aColumns){

                if(matrixIsDiagonal(A,aRows,aColumns)== true)
                    cout<<"Macierz jest diagonalna."<<endl;
                else
                    cout<<"Macierz nie jest diagonalna."<<endl;
            }
            else{
                cout<<"Macierz nie jest kwadratowa, nie może być diagonalna!"<<endl;
            }
        }
        else if(argument=="swap"){

            cout<<"Podaj indeksy m i n PIERWSZEJ liczby do zamiany A[n][m]: ";
            while(!(cin>>nFirstIndex)||!(cin>>mFirstIndex)||(nFirstIndex<0||nFirstIndex>aRows-1)||(mFirstIndex<0||mFirstIndex>aColumns-1)){
                cout<<"Złe wejście! Spróbuj jeszcze raz."<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"Podaj poprawne indeksy m i n PIERWSZEJ liczby do zamiany A[n][m]: ";
            }


            cout<<"Podaj indeksy m i n DRUGIEJ liczby do zamiany A[n][m]: ";
            while(!(cin>>nSecondIndex)||!(cin>>mSecondIndex)||(nSecondIndex<0||nSecondIndex>aRows-1)||(mSecondIndex<0||mSecondIndex>aColumns-1)){
                cout<<"Złe wejście! Spróbuj jeszcze raz."<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"Podaj poprawne indeksy m i n DRUGIEJ liczby do zamiany A[n][m]: ";
            }


            swap(A[nFirstIndex][mFirstIndex], A[nSecondIndex][mSecondIndex]);
            printMatrix(A,aRows,aColumns,"A po zamienie");

        }
        else if(argument=="sortRow"){

            cout<<"Podaj indeks wiersza: ";
            while(!(cin>>indexRow)||(indexRow<0||indexRow>aRows-1)){
                cout<<"Złe wejście! Spróbuj jeszcze raz."<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"Podaj poprawny indeks wiersza: ";
            }


            sortRow(A[indexRow],aColumns);
            printMatrix(A,aRows,aColumns,"A po sortowaniu wiersza");

        }
        else if(argument=="sortRowsInMatrix"){
            printMatrix(sortRowsInMatrix(A,aRows,aColumns),aRows,aColumns,"po sortowaniu wierszy");
        }
        else if(argument=="determinantMatrix"){

            if(aRows==aColumns){
                cout<<"Wyznacznik macierzy detA= "<<determinantMatrix(A,aRows,aColumns)<<endl;
            }
            else{
                cout<<"Do obliczenia wyznacznika macierz musi być kwadratowa!"<<endl;
            }
        }
        else{
            cout<<"Błędnie wprowadzony argument wyboru działania."<<endl;
            help();
        }
    }
    else if(argument2=="int"){
        int **A, **B, scalar;
        cout << "Wybrane działanie: " << argument << endl;
        cout << "Wybrany typ danych: " << argument2 << endl;

        A = getMatrixInt(&aRows, &aColumns, 'A');
        printMatrix(A, aRows, aColumns, "A");


        if(argument == "addMatrix") {
            B = getMatrixInt(&bRows, &bColumns, 'B');
            printMatrix(B, bRows, bColumns, "B");
            if (aRows == bRows && aColumns == bColumns) {
                printMatrix(addMatrix(A, B, aRows, aColumns), aRows, aColumns, "A+B");

            }
            else{
                cout<<"Nie można wykonać dodawania macierzy!"<<endl;
            }
        }
        else if (argument == "subtractMatrix") {
            B = getMatrixInt(&bRows, &bColumns, 'B');
            printMatrix(B, bRows, bColumns, "B");
            if (aRows == bRows && aColumns == bColumns) {
                printMatrix(subtractMatrix(A, B, aRows, aColumns), aRows, aColumns, "A-B");
            }
            else{
                cout<<"Nie można wykonać odejmowania macierzy!"<<endl;
            }
        }
        else if(argument=="multiplyMatrix") {
            B = getMatrixInt(&bRows, &bColumns, 'B');
            printMatrix(B, bRows, bColumns, "B");
            if (aRows == bColumns && aColumns == bRows) {
                printMatrix(multiplyMatrix(A, B, aRows, aColumns, bColumns), aRows, bColumns, "AxB");
            }
            else{
                cout<<"Nie można wykonać mnożenia macierzy!"<<endl;
            }
        }
        else if(argument=="multiplyByScalar"){

            cout<<"Podaj skalar: "<<endl;
            while(!(cin>>scalar)){
                cout<<"To nie liczba!"<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"Podaj poprawny skalar: ";
            }

            printMatrix(multiplyByScalar(A, aRows, aColumns,scalar),aRows,aColumns,"skalar x A");

        }
        else if(argument=="transpozeMatrix"){
            printMatrix(transpozeMatrix(A,aRows,aColumns),aColumns,aRows,"transponowana");
        }
        else if(argument=="powerMatrix"){

            cout<<"Podaj stopień potęgi: "<<endl;
            while(!(cin>>powerDegree)){
                cout<<"To nie liczba!"<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"Podaj poprawny stopień potęgi: ";
            }

            if(aRows==aColumns){

                printMatrix(powerMatrix(A, aRows, aColumns,powerDegree),aRows,aColumns,"wynikowa potęgowania A");
            }
            else{
                cout<<"Macierz nie jest kwadratowa, nie można wykonać potęgowania!"<<endl;
            }

        }
        else if(argument=="matrixIsDiagonal"){
            if(aRows==aColumns){

                if(matrixIsDiagonal(A,aRows,aColumns)== true)
                    cout<<"Macierz jest diagonalna."<<endl;
                else
                    cout<<"Macierz nie jest diagonalna."<<endl;
            }
            else{
                cout<<"Macierz nie jest kwadratowa, nie może być diagonalna!"<<endl;
            }
        }
        else if(argument=="swap"){

            cout<<"Podaj indeksy m i n PIERWSZEJ liczby do zamiany A[n][m]: ";
            while(!(cin>>nFirstIndex)||!(cin>>mFirstIndex)||(nFirstIndex<0||nFirstIndex>aRows-1)||(mFirstIndex<0||mFirstIndex>aColumns-1)){
                cout<<"Złe wejście! Spróbuj jeszcze raz."<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"Podaj poprawne indeksy m i n PIERWSZEJ liczby do zamiany A[n][m]: ";
            }


            cout<<"Podaj indeksy m i n DRUGIEJ liczby do zamiany A[n][m]: ";
            while(!(cin>>nSecondIndex)||!(cin>>mSecondIndex)||(nSecondIndex<0||nSecondIndex>aRows-1)||(mSecondIndex<0||mSecondIndex>aColumns-1)){
                cout<<"Złe wejście! Spróbuj jeszcze raz."<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"Podaj poprawne indeksy m i n DRUGIEJ liczby do zamiany A[n][m]: ";
            }


            swap(A[nFirstIndex][mFirstIndex], A[nSecondIndex][mSecondIndex]);
            printMatrix(A,aRows,aColumns,"A po zamienie");

        }
        else if(argument=="sortRow"){

            cout<<"Podaj indeks wiersza: ";
            while(!(cin>>indexRow)||(indexRow<0||indexRow>aRows-1)){
                cout<<"Złe wejście! Spróbuj jeszcze raz."<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"Podaj poprawny indeks wiersza: ";
            }


            sortRow(A[indexRow],aColumns);
            printMatrix(A,aRows,aColumns,"A po sortowaniu wiersza");

        }
        else if(argument=="sortRowsInMatrix"){
            printMatrix(sortRowsInMatrix(A,aRows,aColumns),aRows,aColumns,"po sortowaniu wierszy");
        }
        else if(argument=="determinantMatrix"){

            if(aRows==aColumns){
                cout<<"Wyznacznik macierzy detA= "<<determinantMatrix(A,aRows,aColumns)<<endl;
            }
            else{
                cout<<"Do obliczenia wyznacznika macierz musi być kwadratowa!"<<endl;
            }
        }
        else{
            cout<<"Błędnie wprowadzony argument wyboru działania."<<endl;
            help();
            exit(0);
        }
    }
    else{
        if(argument=="help"){
            exit(0);
        }
        cout<<"Błędnie wprowadzony argument typu danych."<<endl;
        help();
        exit(0);

    }
}


