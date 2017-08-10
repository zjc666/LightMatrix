#include <stdio.h>
#include "light_matrix.h"

void main(void)
{
	Mat a;
	float val[] = {
		1, 2, 3,
		4, 5, 6,
	};
	Mat b;
	float val2[] = {
		3, 6,
		8, 1,
		9, 2
	};
	Mat c;
	Mat d;
	float val3[] = {
		3, 2, -3,
		10, -3, 2,
		-3, 5, 9,
	};
	float det;

	MatCreate(&a, 2, 3);
	MatDump(MatSetVal(&a, val));
	MatCreate(&b, 3, 2);
	MatDump(MatSetVal(&b, val2));
	MatCreate(&c, 3, 3);
	MatCreate(&d, 3, 3);
	MatDump(MatSetVal(&d, val3));

	MatDump(MatMul(&b, &a, &c));
 	MatDump(MatTrans(&a, &b));
	MatDump(MatInv(&d, &c));
	det = MatDet(&d);
	printf("det(d)=%.2f\n", det);

	MatDelete(&a);
	MatDelete(&b);
	MatDelete(&c);
	MatDelete(&d);
}