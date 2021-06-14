#include<stdio.h>
#include<malloc.h>
typedef struct node
{
 int data;
 struct node *prev , *next;
}NODE;
void displayForward(NODE*);
 void insertDataIntoDLL(NODE**start , NODE**end , int val)
{
 NODE *newnode;
 newnode = (NODE*)calloc(1 , sizeof(NODE));
 newnode -> data=val;
 if(*start == 0)
 *start = *end = newnode;
 else
 {
 NODE *tptr ;
 for(tptr = *start ; tptr && tptr->data < val ; tptr = tptr->next);
 if(tptr == *start)
 {
 newnode -> next = *start ;
 (*start)->prev = newnode;
 *start = newnode;
 }
 else if(tptr == 0) // insert at end
 {

 newnode -> prev = *end ;
 (*end)->next = newnode ;
 *end = newnode;

 }
 else
 {
 newnode -> next = tptr;
 newnode -> prev = tptr->prev;
 tptr -> prev -> next = newnode;
 tptr -> prev = newnode;
 }
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
 insertDataIntoDLL(&start , &end , val);
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
