#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

const int ROWS = 2;
const int COLS = 3;

void matrixAdd(const int a[ROWS][COLS], const int b[ROWS][COLS], int sum[ROWS][COLS])
{
	for(int i = 0; i < ROWS; ++i)
		for(int j = 0; j < COLS; ++j)
			sum[i][j] = a[i][j] + b[i][j];
}
void displayMatrix(const in sumMatrix[ROWS][COLS])
{
	for(int i = 0; i < ROWS; ++i)
		for(int j = 0; j < COLS; ++j)
			cout << sumMatrix[i][j] << " ";
	cout << endl;
}
void inputMatrix(int matrixInptu[ROWS][COLS])
{
	for(int i = 0; i < ROWS; ++i)
		for(int j = 0; j < COLS; ++j)
			cin >> matrixInput[i][j];
}
int main()
{
	int matrixA[ROWS][COLS] = {0};
	int matrixB[ROWS][COLS] = {0};
	int totalMatrix[ROWS][COLS] = {0};
    
	cout << "Enter Matrix A: ";
	inputMatrix(matrixA);
    
	cout << "Enter Matrix B: ";
	inputMatrix(matrixB);
    
	matrixAdd(matrixA, matrixB, totalMatrix);
	cout << "Result: " << endl;
	displayMatrix(totalMatrix);
    
	return 0;
}
