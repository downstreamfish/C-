#include <stdio.h>
#include <stdlib.h>
#define NAME_LEN 20
int main()
{
    struct part{
        int number;
        char name[NAME_LEN + 1];
        int on_hand;
    };
    struct part part1 = {123, "Jackson", 255};
    struct part part2 = part1;
    printf("part2's number is: %d, name is: %s, on_hand is: %d\n",
           part2.number, part2.name, part2.on_hand);
    return 0;
}
