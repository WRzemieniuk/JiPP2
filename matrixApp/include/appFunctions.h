

/**
 Plik zawiera deklaracje funkcji:
 *double **getMatrix -funkcja pobierająca od uźytkowanika liczbę kolumn oraz wierszy,sprawdza poprawność wprowadzonych danych, a następnie poszczególych wartości macierzy,którą zwraca
 *int **getMatrixInt-analogiczna funkcja do getMatrix, jedyna różnica to,że przekazywane i zwracane argumenty są typu int
 * void printMatrix-procedura wypisująca na ekran przekazaną macierz
 * void structureOfProgram-procedura odpowiadająca za strukturę całego programu; sprawdzenie poprawności argumentów wywołania oraz odwołanie odpowiedich funkcji z biblioteki lib
 *void help- instrukcje do obsługi programu
 *
 *
 */

using namespace std;

void help();

double **getMatrix(int *rows, int *columns, char nameOfMatrix);

int **getMatrixInt(int *rows, int *columns, char nameOfMatrix);

void printMatrix(double **matrix, int rows, int columns, string nameOfMatrix);

void structureOfProgram(int argc, string argument, string argument2);

