
/**Plik zawiera deklaracje funkcji:
 * addMatrix-funkcja odpowiadająca za dodawanie dwóch macierzy A i B, które wraz z liczbą wierszy i kolumn są przekazywanymi argumentami do funkcji
 * subtractMatrix-funkcja odpowiadająca za odejmowanie dwóch macierzy A i B, które wraz z liczbą wierszy i kolumn są przekazywanymi argumentami do funkcji
 * multiplyMatrix-funkcja odpowiadająca za mnożenie dwóch macierzy A i B, które wraz z liczbą wierszy, kolumn macierzy A oraz liczbą kolumn macierzy B są przekazywanymi argumentami do funkcji
 * multiplyByScalar-funkcja odpowiadająca za mnożenie przez skalar macierzy A, która wraz z liczbą wierszy, kolumn oraz skalarem są przekazywanymi argumentami do funkcji. Skalar w funkcji jest przedstawiony za pomocą macierzy.
 * transpozeMatrix-funkcja odpowiadająca za transponowanie macierzy A, która wraz z liczbą wierszy i kolumn są przekazywanymi argumentami do funkcji
 * powerMatrix-funkcja odpowiadająca za potęgowanie macierzy A, która wraz z liczbą wierszy, kolumn oraz stopniem potęgi są przekazywanymi argumentami do funkcji, funkcja korzysta z funkcji multiplyMatrix
 * determinantMatrix-funkcja odpowiadająca za obliczanie wyznacznika macierzy A, która wraz z liczbą wierszy i kolumn są przekazywanymi argumentami do funkcji.
 Funkcja korzysta z rekurencji, warynkiem jej przerwania jest osiągniecię macierzy 2x2. Macierz jest rozwijane według wiersza o indeksie 0 i sukcesywnie tworzona jest podmacierz powstała z kolejno wykreślanych wartości rozwijanego wiersza.
 Końcowa wynik to suma uzyskanych wyznaczników podmacierzy 2x2.
 * swap-procedura odpowiadająca za zamianę dwóch elementów macierzy A, które przez referencję są przekazywanymi argumentami do funkcji
 * sortRow-procedura odpowiadająca za posortowanie elementów algorytmem bąbelkowym podanego przez użytkownika wiersza macierzy A, przekazywane argumenty to macierz A i liczba kolumn
 * sortRowsInMatrix-funkcja odpowiadająca za posortowanie wszytskich wierszy macierzy A, korzystając z sortRow
 */


double **addMatrix(double **A, double**B, int rows, int columns);


double** subtractMatrix(double **A, double **B, int rows, int columns);

double** multiplyMatrix(double **A, double **B, int aRows, int aColumns, int bColumns);

double **multiplyByScalar(double **A, int rows, int columns, double scalar);

double** transpozeMatrix(double **A, int rows, int columns);

double**powerMatrix(double **A, int rows, int columns, unsigned powerDegree);

double determinantMatrix(double **A, int rows, int columns);

bool matrixIsDiagonal(double **A, int rows, int columns);

void swap(double &a, double &b);

void sortRow(double *array, int columns);

double** sortRowsInMatrix(double **A, int rows, int columns);



int **addMatrix(int **A, int**B, int rows, int columns);

int **subtractMatrix(int **A, int **B, int rows, int columns);

int** multiplyMatrix(int **A, int **B, int aRows, int aColumns, int bColumns);

int **multiplyByScalar(int **A, int rows, int columns, int scalar);

int** transpozeMatrix(int **A, int rows, int columns);

int**powerMatrix(int **A, int rows, int columns, unsigned powerDegree);

int determinantMatrix(int **A, int rows, int columns);

bool matrixIsDiagonal(int **A, int rows, int columns);

void swap(int &a, int &b);

void sortRow(int *array, int columns);

int** sortRowsInMatrix(int **A, int rows, int columns);