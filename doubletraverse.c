#include<stdio.h>
#include<stdlib.h>

struct node
{
  struct node *prev;
  int data;
  struct node *next;
};
void traversing(struct node *head);
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
  traversing(head);
}
void traversing(struct node *head)
{
struct node *temp=head;
while(temp!=NULL)
{
  printf("%d",temp->data);
  temp=temp->next;
}
}
