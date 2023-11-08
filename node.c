#include<stdio.h>
struct node
{
int data;
struct node *link;
};
int main()
{
struct node *head=NULL;
head=(struct node*)malloc(sizeof(struct node*));
head->data=10;
head->link=NULL;
struct node *head1=NULL;
head1=(struct node*)malloc(sizeof(struct node*));
head1->data=20;
head1->link=NULL;
head->link=head1->data;
printf("%2d",head->data);
printf("%2d",head->link);
}

