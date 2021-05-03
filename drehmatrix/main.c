#include <stdio.h>
#include <math.h>
#include "matrix.h"

int main() {
	matrix_t m1, m2;
	
	double winkel = M_PI/180;
	
	m1.zeilen = 2;
	m1.spalten = 2;
	m2.zeilen = 2;
	m2.spalten = 1;
	
	m1.matrix[0][0] = cos(winkel);
	m1.matrix[0][1] = -sin(winkel);
	m1.matrix[1][0] = sin(winkel);
	m1.matrix[1][1] = cos(winkel);

	m2.matrix[0][0] = 1;

	m2.matrix[1][0] = 0;

	for (int i = 0; i < 360; i++) {
		printmatrix(m2);
		m2 = matrixmult(m1, m2);
	}
	return(0);
}
