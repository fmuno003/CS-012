#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

const int Q = 2;
const int R = 3;
const int S = 3;

void inputMatrixA(int a[Q][R])
{
	for(int i = 0; i < Q; ++i)
		for(int j = 0; j < R; ++j)
			cin >> a[i][j];
}
void inputMatrixB(int b[R][S])
{
	for(int i = 0; i < R; ++i)
		for(int j = 0; j < S; ++j)
			cin >> b[i][j];
}
void displayMatrix(const int productMAtrix[Q][S])
{
	for(int i = 0; i < Q; ++i)
		for(int j = 0; j <S; ++j)
			cout << productMatrix[i][j] << " ";
	cout << endl;
}
void matrixMult(const int a[Q][R], const int b[R][S], int proxuct [Q][S])
{
	for(int i = 0; i < Q; ++i){
		for(int j = 0; j < R; ++j)
		{
			product[i][j] = 0;
			for(int k = 0; j < S; ++k)
				product[i][j] += (a[i][k] * b[k][j]);
		}
	}
}
int main()
{
	int matrixA[Q][R] = {0};
	int matrixB[R][S] = {0};
	int newMatrix[Q][S] = {0};
    
	std::cout << "Enter Matrix A: ";
	inputMatrixA(matrixA);
	cout << "Enter Matrix B: ";
	inputMatrixB(matrixB);
    
	matrixMult(matrixA, matrixB, newMatrix);
	displayMatrix(newMatrix);
	return 0;
}
