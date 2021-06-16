#include<stdio.h>
#include<malloc.h>
typedef struct node
{
 int data;
 struct node *prev , *next;
}NODE;
void insertDataIntoCDLL(NODE** , NODE** , int);
void displayCDLLBackward(NODE*);
void displayCDLLBackward(NODE* end)
{
 if(!end) return;
 NODE *tptr ;
 for(tptr = end ; tptr ->prev!=end ; tptr = tptr ->prev)
 printf("%d " , tptr->data);
 printf("%d " , tptr->data);
}
int main()
{
 NODE *start , *end ;
 int N , itr , val ;
 start = end = 0;
 scanf("%d" , &N);
 for(itr = 1 ; itr <= N ; itr++)
 {
 scanf("%d" , &val);
 insertDataIntoCDLL(&start , &end , val);
 }

 displayCDLLBackward(end);
 return 0;
}
void insertDataIntoCDLL(NODE** start, NODE** end , int val)
{
 NODE *newnode , *tptr;
 newnode = (NODE*)calloc(1 , sizeof(NODE));
 newnode -> data = val;
 if(*start == 0)
 {
 *start = *end = newnode ;
 newnode -> next = *start;
 newnode -> prev = *start;
 }
 else
 {
 for(tptr=*start ;tptr->next!=*start&&tptr->data<val;tptr= tptr->next);
 if(tptr == *start && val < tptr ->data)
 {
 (*start)->prev->next = newnode ;
 newnode -> next = *start;
 newnode -> prev = (*start)->prev;
 (*start)->prev = newnode;
 *start = newnode;
 }
 else if(tptr->next ==*start && val > tptr->data)
 {
 tptr -> next = newnode ;
 newnode -> prev = tptr;
 newnode -> next = *start;
 (*start)->prev = newnode;
 *end = newnode;
 }
 else
 {
 newnode -> next = tptr;
 newnode -> prev = tptr -> prev;
 tptr->prev->next = newnode;
 tptr->prev = newnode;
 }
 }
}
