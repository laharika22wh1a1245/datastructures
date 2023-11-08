#include<stdio.h>
struct node
{
int data;
struct node *link;
};
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
traverse(head);
}
void traverse(struct node *head)
{ 

struct node *temp=head;
int count=0;
if(temp==NULL)
{
printf("SINGLE LINKED LIST IS EMPTY");
}
while(temp!=NULL)
{
count++;
temp=temp->link;

}
printf("\nNO OF NODES=%d",count);
}

