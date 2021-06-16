#include<stdio.h>
#include<malloc.h>
typedef struct node
{
 int data;
 struct node *prev , *next;
}NODE;
void insertDataIntoCDLL(NODE** , NODE** , int);
void displayCDLLForward(NODE*);
void deleteAtFirst(NODE** start, NODE** end)
{
 NODE *temp;
 temp = *start;
 if(*start == (*start)->next)
 *start = *end = 0;
 else
 {

 (*start)->next->prev = (*start)->prev;
 (*start)->prev->next = (*start)->next;
 *start = (*start)->next;
 }
 free(temp);
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
 deleteAtFirst(&start , &end);

 displayCDLLForward(start);


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
void displayCDLLForward(NODE* start)
{
 if(!start) return;
 NODE *tptr ;
 for(tptr = start ; tptr->next!=start ; tptr = tptr->next)
 printf("%d " , tptr -> data);
 printf("%d" , tptr->data);
}
