#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
void delete_last(struct node *head);
int main()
{
	struct node *head=malloc(sizeof(struct node));
	head->data=10;
	head->link=NULL;

	struct node *current=malloc(sizeof(struct node));
	current->data=20;
	current->link=NULL;
	head->link=current;

	current=malloc(sizeof(struct node));
	current->data=30;
	current->link=NULL;
	head->link->link=current;
	delete_last(head);
}
void delete_last(struct node *head)
{
	struct node *temp=head;
	temp=temp->link;
	if(temp==NULL)
	{
		printf("list is empty");
	}
	else if(temp!=NULL)
	{	
		free(temp->link);
		temp->link=NULL;
	}
	temp=head;
	while(temp!=NULL)
	{
	printf("%d",temp->data);
	temp=temp->link;
	}
}
		
