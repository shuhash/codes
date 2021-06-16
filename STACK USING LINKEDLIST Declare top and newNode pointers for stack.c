#include<stdio.h>
#include<malloc.h>
typedef struct node
{
 int data;
 struct node *next;
}NODE;
typedef NODE* NODEPTR;
NODEPTR top,newNode;
void push(int gd)
{
 newNode = (NODEPTR)malloc(sizeof(NODE));
 newNode -> data = gd;
 newNode -> next = NULL;
 if( top == NULL )
 top = newNode;
 else
 {
 newNode -> next = top;
 top = newNode;
 }
}
void display()
{
 NODEPTR tptr;
 for(tptr = top ; tptr ; tptr = tptr -> next)
 printf("%d ",tptr->data);
}
int main()
{
 int num;
 do
 {
 scanf("%d",&num);
 if( num == -1) break;
 push(num);
 }while(1);
}
 display();
}
