#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print_count(int m)
{
	printf("T minus %d and counting\n", m);
}

int main(int argc, char *argv[]) {
	int i;
	
	for(i = 10; i > 0; --i)
	{

		print_count(i);  

	}
	
	return 0;
	
}
