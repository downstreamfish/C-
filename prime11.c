#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int Bool;

Bool is_prime(int n)
{
	int divisor;
	if(n <= 1)
	{
		return FALSE;
	}
	for(divisor = 2; divisor * divisor <= n; divisor++)
	{
		if(n % divisor == 0)
		{
			return FALSE;
		}
		else
		{
			return TRUE;
		}
	}
}

int main(int argc, char *argv[]) {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(is_prime(n))
	{
		printf("prime\n");
	}
	else
	{
		printf("not prime\n");
	}
	return 0;
}
