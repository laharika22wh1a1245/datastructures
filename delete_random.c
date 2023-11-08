#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
void delete_random(struct node *head);
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
	delete_random(head);
}
void delete_random(struct node *head)
{	
	struct node *temp=head;
	struct node *new=malloc(sizeof(struct node));
	int position=2;
	
	if(head==NULL)
	{
		printf("list is empty");
	}
	else if(position==1)
	{
		head=temp->link;
		free(temp);
		temp=NULL;
	}
	else
	{
	
		while(position!=1)
		{
			new=temp;
			temp=temp->link;
			position--;
		}
		new->link=temp->link;
		temp=NULL;
		
		temp=head;
		while(temp!=NULL)
		{
		printf("%d",temp->data);
		temp=temp->link;
		}
        }
}
	
	
