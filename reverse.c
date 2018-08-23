#include <stdio.h>
#include <stdlib.h>
#define N 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, a[N];
	printf("Enter %d numbers: ", N);
	for(i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("In reverse order: ");
	for(i = N - 1; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
/*	printf("%d", a[10]); */
	return 0;
}
