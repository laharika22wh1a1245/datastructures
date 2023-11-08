#include<stdio.h>
#define MAX_SIZE 5
int stack[MAX_SIZE];

int top=-1;

int isempty()
{
  return top==-1;	
}

int isfull()
{
  return top==MAX_SIZE-1;
}

int peek()
{
if(isempty())
 printf("list is empty");
else
return stack[top];
}

int push(int value)
{
if(isfull())
 printf("list is full");
else
return stack[++top]=value;
}

int pop()
{
if(isempty())
 printf("list is empty");
else
return stack[top--];
}

int display_stack()
{
if(isempty())
printf("list is empty");
else
{
	for(int i=0;i<=top;i++)
	printf("%d",stack[i]);
}
}

int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	printf("initial values");
	display_stack();
	pop();
	pop();
	printf("after pop opertions");
	display_stack();
}


























 
