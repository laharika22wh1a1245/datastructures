#include<stdio.h>
struct self 
{
int a;
char c;
struct self *p;
};
int main()
{
struct self v;
v.a=10;
v.c='d';
v.p=NULL;
struct self s;
s.a=5;
s.c='r';
s.p=NULL;
v.p=&s;
printf("%2d%2c",v.a,v.c);
printf("%2d%2c",v.p->a,v.p->c);
}
