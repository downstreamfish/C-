#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int len = 0;
	printf("Enter a message: ");
	while(getchar() != '\n')
	{
		len++;
	}
	printf("Your message was %d character(s) long.\n", len);
	printf("Size of int: %ul\n", (unsigned long)sizeof(int));
	return 0;
}
