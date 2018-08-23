#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 40;
	float x = 839.21;
	
	printf(" |%d|%5d|%-5d|%5.3d|\n",i,i,i,i);
	printf(" |%10.3f|%10.3e|%-10g|\n", x,x,x);
	
	return 0;
}
