#include<stdio.h>
#include<stdlib.h>
struct node 
{
        struct node *prev;
	int data;
	struct node *next;
};
void delete_begin(struct node *head);
int main()
{
	struct node *head=malloc(sizeof(struct node));
	head->prev=NULL;
	head->data=10;
	head->next=NULL;
	struct node *current=malloc(sizeof(struct node));
	current->prev=NULL;
	current->data=20;
	current->next=NULL;
	head->next=current;
	current->prev=head;
	delete_begin(head);
}
void delete_begin(struct node *head)
{
struct node *temp=head;
head=temp->next;
free(temp);

temp=head;
while(temp!=NULL)
{
	printf("%d",temp->data);
	temp=temp->next;
}
}

