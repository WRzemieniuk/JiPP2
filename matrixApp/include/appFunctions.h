

/** @file appFunctions.cpp zawiera deklaracje funkcji:
 * getMatrix -funkcja pobierająca od użytkowanika liczbę kolumn oraz wierszy,sprawdza poprawność wprowadzonych danych, a następnie poszczególych wartości macierzy,którą zwraca
 * @param *rows, *columns, nameOfMatrix
 * @return zwraca wskaźnik do macierzy powstałej przez wartości podawane przez użytkownika
 *
 * int **getMatrixInt-analogiczna funkcja do getMatrix, jedyna różnica to,że przekazywane i zwracane argumenty są typu int
 * @param *rows, *columns, nameOfMatrix
 * @return zwraca wskaźnik do macierzy powstałej przez wartości podawane przez użytkownika
 *
 * void printMatrix-procedura wypisująca na ekran przekazaną macierz
 * @param **matrix, rows, columns, nameOfMatrux
 *
 * void structureOfProgram-procedura odpowiadająca za strukturę całego programu; sprawdzenie poprawności argumentów wywołania oraz odwołanie odpowiedich funkcji z biblioteki matrixLib
 * @param argc, argument, argument2
 *
 * void help- instrukcje do obsługi programu
 *
 *
 */


using namespace std;

void help();

double **getMatrix(int *rows, int *columns, char nameOfMatrix);

int **getMatrixInt(int *rows, int *columns, char nameOfMatrix);

void printMatrix(double **matrix, int rows, int columns, string nameOfMatrix);

void structureOfProgram(int argc, string argument, string argument2);

