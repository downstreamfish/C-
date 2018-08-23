#include <stdio.h>
#include <stdlib.h>
#include "mstack.h"

int main()
{
	int val;
   STACK s;
	init(&s);
   push(&s, 1);
   push(&s, 2);
   push(&s, 3);
	
	if(pop(&s, &val)){
		printf("stack pop success, value is: %d\n", val);
	}else{
		printf("stack pop failed.\n");
	}
   traverse(&s); 
	clear(&s);
	if(pop(&s, &val)){
		printf("stack pop success, value is: %d\n", val);
	}else{
		printf("stack pop failed.\n");
	}
	traverse(&s); 
   return 0;
}

