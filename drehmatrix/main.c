#include <stdio.h>
#include <math.h>
#include "matrix.h"

int main() {
	matrix_t m1;
	matrix_t m2;
	matrix_t a;
	double winkel = M_PI/2;
	
	m1.zeilen = 1;
	m1.spalten = 2;
	m2.zeilen = 2;
	m2.spalten = 2;
	
	m1.matrix[0][0] = 1;
	m1.matrix[1][0] = 0;
	m2.matrix[0][0] = cos(winkel);
	m2.matrix[0][1] = -sin(winkel);
	m2.matrix[1][0] = sin(winkel);
	m2.matrix[1][1] = cos(winkel);


}
