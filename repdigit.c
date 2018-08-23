#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int Bool;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Bool digit_seen[10] = {0};
	int digit;
	long int n;
	printf("Enter a number: ");
	scanf("%ld", &n);
	while(n > 0)
	{
		digit = n % 10;
		if(digit_seen[digit])
		{
			break;
		}
		digit_seen[digit] = TRUE;
		n /= 10;
	}
	if(n > 0)
	{
		printf("Repeated digit.\n");
	}
	else
	{
		printf("No Repeated digit.\n");
	}
	printf("%d\n", sizeof(digit_seen) / sizeof(digit_seen[0]));
	return 0;
}
