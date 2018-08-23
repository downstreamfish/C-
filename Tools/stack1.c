/*
 *利用数组实现栈内函数
 **/
#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

#define STACK_SIZE 100
/*
 *以下两个带文件作用域的变量声明为static类型，使该变量只能被同一
 * 文件中的其他函数访问
 */
static int contents[STACK_SIZE];
static int top = 0;

void make_empty(void)
{
	top = 0;
}

int is_empty(void)
{
	return top == 0;
}
/*
 * 函数文件作用域声明为static，对于程序的其他文件，它被隐藏了。
 */
static int is_full(void)
{
	return top == STACK_SIZE;
}

void push(int i)
{
	if(is_full()){
		printf("Error in push: stack is full.\n");
		exit(EXIT_FAILURE);
	}
	contents[top++] = i;
}

int pop(void)
{
	if(is_empty()){
		printf("Error in pop: stack is empty.\n");
		exit(EXIT_FAILURE);
	}
	return contents[--top];
}


















