#include<stdio.h>
#include"s.h"

void stack_creat(stck* me,int* arr,int size){
	if(me!=NULL){
	 me->arr=arr;
    me->size=size;
    me->top=0;
    me->count=0;	
	}
}


void stack_push(stck* me,int value)
{
	
	if(!stack_isFull(me))
	{	
	me->arr[me->top]=value;
	if(me->top < me->size)
	{
	me->top++;
	}
	me->count++;
	}	
	
}

int stack_pop(stck* me)
{
	int v=-1;

	if(!stack_isempty(me))
	{
    me->top--;
	v=me->arr[me->top];
	me->count--;
	}
    return v;
}

int stack_peek(stck* me)
{
	int v=-1;
   if(!stack_isempty(me))
	{
	v=me->arr[me->top-1];
	}
    return v;	
}

int stack_isFull(stck* me)
{
	return (me->top==me->size);
}
int stack_isempty(stck* me)
{
	return (me->top==0);
}
void stack_clear(stck* me)
{
	me->top=0;
	me->count=0;
}
void stack_print(stck* me)
{
	printf("top-> %d\n",me->arr[me->count]);

	for(int i=me->count-1;i>=0;i--)
	{
	printf("      %d\n",me->arr[i]);
	}
	
}

void main(void)
{
	stck myStack;
	int s1[2];
	stack_creat(&myStack,s1,10);
	stack_push(&myStack,50);
	stack_push(&myStack,40);
    int x=stack_pop(&myStack);
	printf("%d\n",x);
    stack_print(&myStack);
	
}