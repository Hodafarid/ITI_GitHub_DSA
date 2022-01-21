#ifndef _S_H
#define _S_H
#define s 5
typedef struct stck
{
	int top;
	int *arr;
	int size;
	int count;
}stck;

void stack_creat(stck* me,int* arr,int size);
void stack_push(stck* me,int value);
int stack_isFull(stck* me);
int stack_pop(stck* me);
int stack_isempty(stck* me);
int stack_peek(stck* me);
void stack_clear(stck* me);
void stack_print(stck* me);










#endif


