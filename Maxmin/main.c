#include <stdio.h>
#include <stdlib.h>

#define N 10

void max_min(int a[], int n, int * max, int * min);

int main()
{
    int a[N], i, big, small;

    printf("Enter %d numbers: ", N);
    for(i = 0; i < N; i++)
    {
       scanf("%d", &a[i]);
    }
    max_min(a, N, &big, &small);
    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);
    return 0;
}
void max_min(int a[],int n, int * max, int * min)
{
   int i;
   *max = *min = a[0];
   for(i = 1; i < n; i++)
   {
      if(*max < a[i])
      {
         *max = a[i];
      }
      else if(*min > a[i])
      {
         *min = a[i];
      }
   }

}
