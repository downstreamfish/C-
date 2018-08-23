#include <stdio.h>
#include "concat.h"

int main()
{
   char *p;
   p = concat("abc", "def");
   printf("concat result: %s\n", p);
   return 0;
}

