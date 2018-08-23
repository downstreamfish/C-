#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, big;
	float m, n, small; 
	i = 123;
	j = 260;
	m = 3.1415926;
	n = 6.0;
	big = 32765;
	small = 0.000123;
	printf("integer i = %d, j = %d\n", i, j); 
	printf("float m = %f, n = %f\n", m, n);
	printf("WRONG! integer m = %d, float j = %f\n", m, j);
	printf("worning!  i = %d, n = %f\n",i);
	printf("worning!  i = %d\n", i, j, m);
	printf("i = %1dz\ni = %2dz\ni = %3dz\ni = %4dz\n",i,i,i,i);
	printf("i = %-1dz\ni = %-2dz\ni = %-3dz\ni = %-4dz\n",i,i,i,i);
	printf("i = %.1d\ni = %.2d\ni = %.3d\ni = %.4d\n",i,i,i,i);
	printf("m = %.1f\nm = %.2f\nm = %.3f\nm = %.4f\n",m,m,m,m);
	printf("m = %.1e\nm = %.2e\nm = %.3e\nm = %.4e\nm = %.5e\nm = %e\nm = %.7e\nm = %.8e\n",m,m,m,m,m,m,m,m);
	printf("big = %g\nsmall = %g\n",big,small);
	return 0;
}
