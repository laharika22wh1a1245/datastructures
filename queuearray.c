#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
int front=-1;
int rear=-1;
int queue[MAX_SIZE];

int isempty()
{
	return rear==-1;
}
int isfull()
{
	return rear==MAX_SIZE-1;
}
int enqueue(int data)
{	
	if(isfull())
		printf("queue is full");
	else
		front=0;
		return queue[++rear]=data;
}
int dequeue()
{
	if(isempty())
		printf("queue is empty");
	if(front==rear)
	{
		front=-1;
	}
	else
	{
		front++;
		return(rear-1);
	}
}

int frontvalue()
{
	if(isempty())
		printf("queue is empty");
	else
		return queue[front];
}
int display()
{
	int i;
	if(isempty())
		printf("queue is empty");
	else
	{
		for(i=front;i<=rear;i++)
		printf("%d ",queue[i]);
	}
}


int main()
{
enqueue(10);
enqueue(20);
enqueue(30);
printf("intial values");
display();
printf("front value:%d",frontvalue());

dequeue();
printf("after dequeue");
display();

}












