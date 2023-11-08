#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *front=NULL;
struct node *rear=NULL;
int isempty()
{
	return rear==NULL;
}
int enqueue(int value)
{
	struct node *new=malloc(sizeof(struct node));
	new->data=value;
	new->link=NULL;
	if(rear==NULL && front==NULL)
	front=rear=new;
	else
	{
		rear->link=new;
		rear=new;
	}
}
int dequeue()
{
	if(isempty())
		printf("queue is empty");
	else
	{
	       struct node *temp=front;
	       front=temp->link;
               free(temp);
	       return front->data-1;
        }
}
int frontvalue()
{
	if(isempty())
		printf("queue is empty");
	else
		return front->data;
}
void display()
{
	if(isempty())
		printf("empty");
	else
	{
		struct node *temp=front;
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->data;
		}		
	}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	printf("initial values");
	display();
	printf("\n front value :%d",frontvalue);
	dequeue();
	printf("after dequeue operation");
	display();
}
