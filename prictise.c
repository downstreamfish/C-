
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j;
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if(i == j)
			{
				printf("%d ", 1);
			}
			else
			{
				printf("%d ", 0);
			}
		}
		printf("\n");
		
	}
	return 0;
}
