#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};

void insert_begin(struct node *head);

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
	insert_begin(head);
}

void insert_begin(struct node *head)
{
	struct node *temp=head;
	struct node *new=malloc(sizeof(struct node));
	new->data=40;
	new->link=NULL;

	new->link=head;
	head=new;

	temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;

	}
}


