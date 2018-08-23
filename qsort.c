#include <stdio.h>
#include <stdlib.h>
#define N 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(int argc, char *argv[]) {
	int a[N], i;
	
	printf("Enter %d number to be sorted: ", N);
	for(i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	quicksort(a, 0, N - 1);
	printf("In sorted order: ");
	for(i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}

void quicksort(int a[], int low, int high)
{
	int middle;
	if(low >= high) return;
	middle = split(a, low, high);
	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high)
{
	int part_element = a[low]; /*把第一个元素作为分割元素，并复制给part_element*/ 
	for(;;)
	{
		while(low < high && part_element <= a[high]);
			high--;
		if(low >= high) break;
		a[low++] = a[high];
		while(low < high && a[low] <= part_element)
			low++;
		if(low >= high) break;
		a[high--] = a[low];
	}
	a[high] = part_element;
	return high;
}
