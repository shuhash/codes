#include<stdio.h>
#include<malloc.h>
typedef struct node
{
 int data;
 struct node * next;
}NODE;
typedef NODE* NODEPTR;
NODEPTR newNode , tptr , shadow,start;
void insertNode( int givenData)
{
 newNode = (NODEPTR)malloc(sizeof(NODE));
 newNode -> data = givenData;
 newNode -> next = NULL;
 if( start == NULL )
 start = newNode;
 else
 {
 for( tptr = start ; tptr && tptr -> data < givenData; shadow = tptr , tptr = tptr -> next);
if( tptr == start)
 {
 newNode -> next = tptr;
 start = newNode;
 }
 else if( tptr == NULL )
 shadow -> next = newNode;
 else
 {
 newNode -> next = tptr;
 shadow -> next = newNode;
 }
 }

}
void display( )
{
 for( tptr = start ; tptr ; tptr = tptr -> next )
 printf("%d ",tptr -> data);
}
int main()
{
 int num;
 do
 {
 scanf("%d",&num);
 if( num == -1 ) break;
 insertNode(num);
 }while(1);
 display();
}
