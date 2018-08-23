#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "marray.h"

void init_arr(struct mArray *pArr, int length)
{
    pArr->pbase = malloc(sizeof(int) * length);
    if(NULL == pArr->pbase){
        printf("mArray inited failed!\n");
        exit(EXIT_FAILURE);
    }
    pArr->len = length;
    pArr->cnt = 0;
    return;
}
Bool is_empty(struct mArray * pArr)
{
    return 0 == pArr->cnt;
}
void show_arr(struct mArray *pArr)
{
    int i;
    if(is_empty(pArr)){
        printf("The array is empty\n");
        exit(EXIT_FAILURE);
    }
    for(i = 0; i < pArr->cnt; i++){
        printf("%d ", pArr->pbase[i]);
    }
    printf("\n\n");
    return;
}
