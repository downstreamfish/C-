#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	int len = 0;
	printf("Enter a message: ");
	ch = getchar();
	while(ch != '\n')
	{
		len++;
		ch = getchar();
	}
	printf("Your message was %d character(s) long.\n", len);
	
	return 0;
}
