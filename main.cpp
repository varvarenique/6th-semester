#include "matrix.h"

int main() {	
	Matrix matrix1 = Matrix(200, 200, 6, 6);
	matrix1.createMatrix();
	matrix1.fillMatrix(false);
	Matrix matrix2 = Matrix(200, 200, 6, 6);
	matrix2.createMatrix();
	matrix2.fillMatrix(false);

	Matrix matrix3 = Matrix(200, 200, 6, 6);
	matrix3.createMatrix();
	matrix3.fillMatrix(true);
	matrix3.vec_multiply(matrix1, matrix2);
	//matrix3.print_result();

	Matrix matrix4 = Matrix(200, 200, 6, 6);
	matrix4.createMatrix();
	matrix4.fillMatrix(true);
	matrix4.no_vec_multiply(matrix1, matrix2);
	if (matrix4.checkMatrix(matrix3)) {
		cout << "Result is the same (automaticaly vectorization and without vectorization)" << endl;

	}
	//matrix4.print_result();

	Matrix matrix5 = Matrix(200, 200, 6, 6);
	matrix5.createMatrix();
	matrix5.fillMatrix(true);
	matrix5.manually_multiply(matrix1, matrix2);
	if (matrix5.checkMatrix(matrix4)) {
		cout << "Result is the same (manually vectorization and without vectorization)" << endl;

	}
	
	//matrix5.print_result();

	system("pause");
}