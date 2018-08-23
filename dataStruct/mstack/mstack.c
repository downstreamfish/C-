#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "mstack.h"

void init(PSTACK ps)
{
   
   PNODE node = malloc(sizeof(NODE));
   if(NULL == node){
      printf("Init stack failed.\n");
      exit(EXIT_FAILURE);
   }
   ps->ptop = node;
   ps->pbuttom = node;
   node->next = NULL;

   return;
}

void push(PSTACK ps, int val)
{
   PNODE new = malloc(sizeof(NODE));
   if(NULL == new){
      printf("push stack failed.\n");
      exit(EXIT_FAILURE);
   }
   new->data = val;
   new->next = ps->ptop;
   ps->ptop = new;

   return;
}

BOOL is_empty(PSTACK ps)
{
   if(ps->ptop == ps->pbuttom){
      return TRUE;  
   }else{
      return FALSE;
   }
}
BOOL pop(PSTACK ps, int *pval)
{
   PNODE r;
   if(is_empty(ps)){
      printf("This stack is empty.\n");
      return FALSE;
   }   
   r = ps->ptop;
   *pval = r->data;
   ps->ptop = r->next;
   free(r);
   r = NULL;
	
   return TRUE; 
}

void traverse(PSTACK ps)
{
   PNODE p;
   p = ps->ptop;
   while(p != ps->pbuttom){
      printf("%d ", p->data);
      p = p->next;
   }
   printf("\n\n");

   return;
}

void clear(PSTACK ps)
{
   PNODE p, q;
   p = ps->ptop;
   while(ps->pbuttom != p){
      q = p->next;
      free(p);
      p = q;  
   }
   ps->ptop = ps->pbuttom;
}































