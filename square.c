#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, n;
	
	printf("This program prints a table of squares.\nEnter number of enteries in table: ");
	scanf("%d", &n);
	i = 1;
	while(i <= n)
	{
		printf("\t%d\t%d\n", i, i * i);
		i++;
	}
	return 0;
}
