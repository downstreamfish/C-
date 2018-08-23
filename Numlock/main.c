#include <dos.h>

typedef unsigned char BYTE;

int main()
{
    BYTE far *p = MK_FP(0x0040, 0x0017);
    *p |= 0x20;
    return 0;
}
