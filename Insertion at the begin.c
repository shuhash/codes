#include<stdio.h>
#include<malloc.h>
typedef struct node
{
 int data;
 struct node *prev , *next;
}NODE;
void displayForward(NODE*);
void insertAtFirst(NODE** start , NODE** end , int val)
{
 NODE *newnode;
 newnode = (NODE*)calloc(1 , sizeof(NODE));
 newnode -> data = val;
 if(*start == 0)
 *start = *end = newnode;
 else
 {
 newnode -> next = *start ;
 (*start)->prev = newnode;
 *start = newnode;
 }
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
 insertAtFirst(&start , &end , val);
}
displayForward(start);
 return 0;
}
void displayForward(NODE *start)
{
 NODE *tptr;
 for(tptr = start ; tptr ; tptr = tptr -> next)
 printf("%d " , tptr -> data);
}
