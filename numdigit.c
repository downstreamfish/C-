#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int digits = 0, n;
	
	printf("Enter a nonegative integer: ");
	scanf("%d", &n);
	
	do{
		n /= 10;
		digits++;
	} while(n > 0);
	
	printf("The number has %d digit(s).", digits);
	
	return 0;
}
