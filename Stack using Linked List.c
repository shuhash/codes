//Declare the structure for a stack

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
int pop()
{
 int safe ;
 NODEPTR temp;
 if(!top) return -1;
 safe = top->data;
 temp = top;
 top = top -> next;
 free(temp);
return safe;
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
 while(top)
 printf("%d " , pop());
}
