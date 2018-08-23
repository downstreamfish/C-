#ifndef MSTACK_H
#define MSTACK_H

#define BOOL int
#define TRUE  1
#define FALSE 0

typedef struct Node{
   int data;
   struct Node * next;
}NODE, *PNODE;

typedef struct Stack{
   PNODE ptop;
   PNODE pbuttom;
}STACK, *PSTACK;

void init(PSTACK ps);
void push(PSTACK ps, int val);
BOOL pop(PSTACK ps, int *pval);
void traverse(PSTACK ps);
void clear(PSTACK ps);
BOOL is_empty(PSTACK ps);

#endif
