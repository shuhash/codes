#include<stdio.h>
#include<malloc.h>
typedef struct node
{
 int data;
 struct node *prev , *next;
}NODE;
void insertAtEnd(NODE**, NODE**, int);
void displayBackward(NODE *end)
{
 NODE *tptr;

 for(tptr = end ; tptr ; tptr = tptr -> prev)
printf("%d " , tptr -> data);
}

int main()
{
NODE *start , *end ;
start = end = 0;
int N , val , itr ;
scanf("%d" , &N);
for(itr = 1 ; itr <= N ; itr++)
{
 scanf("%d" , &val);
 insertAtEnd(&start , &end , val);
}
displayBackward(end);
 return 0;
}
void insertAtEnd(NODE** start , NODE** end , int val)
{
 NODE *newnode;
 newnode = (NODE*)calloc(1 , sizeof(NODE));
 newnode -> data = val;
 if(*start == 0)
 *start = *end = newnode;
 else
 {
 newnode -> prev = *end ;
 (*end)->next = newnode;
 *end = newnode;
 }
}
