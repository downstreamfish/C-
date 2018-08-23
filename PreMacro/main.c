#include <stdio.h>
#include <stdlib.h>


#define DEBUG
#define CHECK_ZERO(divisor)  \
   if(divisor == 0)          \
      printf("*** Attempt to divide by zero on line %d " \
             "of file %s ***\n\n", __LINE__, __FILE__) \

int main()
{
    int j = 0;

    CHECK_ZERO(j);
    #if defined DEBUG
    printf("Wacky windows (c) 2018 Wacky Software,Inc.\n");
    printf("Compiled on %s at %s\n", __DATE__, __TIME__);
    #endif
    #if __STDC__
       printf("Standard C support!\n");
    #else
       printf("Not support standard C! \n");
    #endif // __STDC__
    return 0;
}
