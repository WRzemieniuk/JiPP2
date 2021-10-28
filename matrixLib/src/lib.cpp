#include "lib.h"
#include<math.h>

using namespace std;


double **addMatrix(double**A, double**B, int rows, int columns ){

    double **C=new double*[rows];
    for (int i = 0; i < rows; ++i) {
        C[i]=new double[columns];
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <columns ; ++j) {
            C[i][j]=A[i][j]+B[i][j];
        }
    }

    return C;
}

int **addMatrix(int**A, int**B, int rows, int columns ){

    int **C=new int*[rows];
    for (int i = 0; i < rows; ++i) {
        C[i]=new int[columns];
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <columns ; ++j) {
            C[i][j]=A[i][j]+B[i][j];
        }
    }

    return C;
}



double** subtractMatrix(double **A, double **B, int rows, int columns){
    double **C=new double*[rows];
    for (int i = 0; i < rows; ++i) {
        C[i]=new double[columns];
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <columns ; ++j) {
            C[i][j]=A[i][j]-B[i][j];
        }
    }

    return C;
}

int** subtractMatrix(int **A, int **B, int rows, int columns){
    int **C=new int*[rows];
    for (int i = 0; i < rows; ++i) {
        C[i]=new int[columns];
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <columns ; ++j) {
            C[i][j]=A[i][j]-B[i][j];
        }
    }

    return C;
}


//aColumns=bRows zeby bylo wykonywalne mnozenie
double**multiplyMatrix(double **A, double **B, int aRows, int aColumns, int bColumns){
    double **C=new double*[aRows];
    for (int i = 0; i < aRows; ++i) {
        C[i]=new double[bColumns];
    }//C wymairu aRowsxbColumns

    for (int i = 0; i < aRows; ++i) {
        for (int j = 0; j < bColumns; ++j) {
            C[i][j]=0;//wyzerowac
            for (int k = 0; k < aColumns; ++k) {
                C[i][j]+=A[i][k]*B[k][j];
            }

        }
    }

    return C;

}


int**multiplyMatrix(int **A, int **B, int aRows, int aColumns, int bColumns){
    int **C=new int*[aRows];
    for (int i = 0; i < aRows; ++i) {
        C[i]=new int[bColumns];
    }//C wymairu aRowsxbColumns

    for (int i = 0; i < aRows; ++i) {
        for (int j = 0; j < bColumns; ++j) {
            C[i][j]=0;//wyzerowac
            for (int k = 0; k < aColumns; ++k) {
                C[i][j]+=A[i][k]*B[k][j];
            }

        }
    }

    return C;

}

double **multiplyByScalar(double **A, int rows, int columns, double scalar){

    for (int i = 0; i <rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            A[i][j]*=scalar;
        }
    }

    return A;
}

int **multiplyByScalar(int **A, int rows, int columns, int scalar){

    for (int i = 0; i <rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            A[i][j]*=scalar;
        }
    }

    return A;
}

double** transpozeMatrix(double **A, int rows, int columns){
    double **transpozeA=new double*[columns];
    for (int i = 0; i < columns; ++i)
        transpozeA[i]=new double[rows];

    for (int i = 0; i < columns; ++i) {
        for (int j = 0; j < rows; ++j) {
            transpozeA[i][j]=A[j][i];
        }
    }

    return transpozeA;

}

int** transpozeMatrix(int **A, int rows, int columns){
    int**transpozeA=new int*[columns];
    for (int i = 0; i < columns; ++i)
        transpozeA[i]=new int[rows];

    for (int i = 0; i < columns; ++i) {
        for (int j = 0; j < rows; ++j) {
            transpozeA[i][j]=A[j][i];
        }
    }

    return transpozeA;

}

double** powerMatrix(double **A, int rows, int columns, unsigned powerDegree){
    double **finalA;

    finalA=A;
    for (int i = 1; i < powerDegree; ++i) {

        finalA=multiplyMatrix(A,finalA,rows, columns, columns);
    }

    return finalA;


}


int** powerMatrix(int **A, int rows, int columns, unsigned powerDegree){
    int **finalA;

    finalA=A;
    for (int i = 1; i < powerDegree; ++i) {

        finalA=multiplyMatrix(A,finalA,rows, columns, columns);
    }

    return finalA;


}

//wyznacznik kwadratowej
//Rozwijamy macierz wzgledem wiersza o indeksie 0, k-zmienia sie kolumna
double determinantMatrix(double **A, int rows, int columns){
    double determinant=0;
    int subi, subj;
    double **subA=new double*[rows];
    for (int i = 0; i < rows; ++i) {
        subA[i]=new double[columns];
    }
    if(rows==2){
        determinant=(A[0][0]*A[1][1])-(A[0][1]*A[1][0]);
        return determinant;
    }
    else{
        for (int k = 0; k < rows; ++k) {//wedlug  wiersza bedziemy rozwijac, k przeskakuje po kolejnych wartosciach 0 wiersza

            subi=0;
            for (int i = 1; i <rows ; ++i) {

                subj=0;
                for (int j = 0; j <rows ; ++j) {

                    if(j==k)//jesli indeksy kolumn beda sie rownac indeksom wg ktorych rozwijamy
                        continue;
                    //przypisywanie wartosci podmocierzy
                    subA[subi][subj]=A[i][j];
                    subj++;

                }
                subi++;
            }

            determinant+=pow(-1,k)*A[0][k]* determinantMatrix(subA,rows-1,columns-1);

        }
    }
    return determinant;

}


int determinantMatrix(int **A, int rows, int columns){
    int determinant=0;
    int subi, subj;
    int **subA=new int*[rows];
    for (int i = 0; i < rows; ++i) {
        subA[i]=new int[columns];
    }
    if(rows==2){
        determinant=(A[0][0]*A[1][1])-(A[0][1]*A[1][0]);
        return determinant;
    }
    else{
        for (int k = 0; k < rows; ++k) {//wedlug  wiersza bedziemy rozwijac, k przeskakuje po kolejnych wartosciach 0 wiersza

            subi=0;
            for (int i = 1; i <rows ; ++i) {

                subj=0;
                for (int j = 0; j <rows ; ++j) {

                    if(j==k)//jesli indeksy kolumn beda sie rownac indeksom wg ktorych rozwijamy
                        continue;
                    //przypisywanie wartosci podmocierzy
                    subA[subi][subj]=A[i][j];
                    subj++;

                }
                subi++;
            }

            determinant+=pow(-1,k)*A[0][k]* determinantMatrix(subA,rows-1,columns-1);

        }
    }
    return determinant;

}

//kwadratowa, 0 poza przekztna
bool matrixIsDiagonal(double **A, int rows, int columns){

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if(A[i][j]!=0&&i!=j){
                return false;
            }
        }
    }
    return true;
}

bool matrixIsDiagonal(int **A, int rows, int columns){

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if(A[i][j]!=0&&i!=j){
                return false;
            }
        }
    }
    return true;
}

void swap(double &a, double &b){

    double temp=a;
    a=b;
    b=temp;
}

void swap(int &a, int &b){


    int temp=a;
    a=b;
    b=temp;
}

void sortRow(double *array, int columns){
    for (int i=0; i<columns; ++i)
    {
        for (int j=0; j<columns-1; ++j)
        {
            if (array[j]>array[j+1])
            {
                swap(array[j], array[j+1]);
            }
        }
    }

}

void sortRow(int *array, int columns){
    for (int i=0; i<columns; ++i)
    {
        for (int j=0; j<columns-1; ++j)
        {
            if (array[j]>array[j+1])
            {
                swap(array[j], array[j+1]);
            }
        }
    }

}

double **sortRowsInMatrix(double **A, int rows, int columns){
    for (int i = 0; i <rows ; ++i) {
        sortRow(A[i],columns);
    }

    return A;
}

int **sortRowsInMatrix(int **A, int rows, int columns){
    for (int i = 0; i <rows ; ++i) {
        sortRow(A[i],columns);
    }

    return A;
}


