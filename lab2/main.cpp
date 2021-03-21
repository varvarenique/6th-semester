#include "matrix.h"

int main() {
	Matrix matrix1 = Matrix(10, 10, 6, 6);
	matrix1.createMatrix();
	matrix1.fillMatrix(false);
	Matrix matrix2 = Matrix(10, 10, 6, 6);
	matrix2.createMatrix();
	matrix2.fillMatrix(false);


	Matrix matrix5 = Matrix(10, 10, 6, 6);
	matrix5.createMatrix();
	matrix5.fillMatrix(true);
	matrix5.manually_multiply(matrix1, matrix2, (matrix1.big_column*matrix1.big_row), matrix2.big_column, 0, 0);

	//matrix5.print_result();

	Matrix matrix3 = Matrix(10, 10, 6, 6);
	matrix3.createMatrix();
	matrix3.fillMatrix(true);
	matrix3.cache_multiply(matrix1, matrix2);

	system("pause");
}

