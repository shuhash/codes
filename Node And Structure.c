#include<stdio.h>
#include<stdlib.h>
// structure creation //
typedef struct node
{
int data;
struct node *next;
}N;
N *start=NULL,*newnode,*end;
void insertnode(int gd)// node creation and inserting node //
{
newnode=(N*)malloc(sizeof(N));
newnode->data=gd;
newnode->next=NULL;
if(start==NULL)
{
start=newnode;
end=newnode;
}
else
{
end->next=newnode;
end=newnode;
}
}
void display()// print the nodes // display your values 
{
N *tptr;
for(tptr=start;tptr!=NULL;tptr=tptr->next)
printf("%d ",tptr->data);
}
int main()
{
int num;
while(1)
{
scanf("%d",&num);
if(num==-1)
break;
insertnode(num);
}
display();
}
