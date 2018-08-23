#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, n;
	
	printf("This program prints  a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		printf("%10d%10d\n", i, i * i);
	}
	return 0;
}
