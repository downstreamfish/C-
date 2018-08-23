#include <stdio.h>
#include <stdlib.h>
#include "marray.h"

int main()
{
    struct mArray arr;
    init_arr(&arr, 8);
    show_arr(&arr);
    printf("Hello world!\n");
    return 0;
}
