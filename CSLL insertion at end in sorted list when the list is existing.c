#include<stdio.h>
#include<malloc.h>
typedef struct node
{
 int data;
 struct node * next;
}NODE;
void insertDataIntoCSLL(NODE** , int);
void displayCSLL(NODE*);
void insertDataIntoCSLL(NODE** start , int val)
{
 NODE *newnode , *tptr , *prev;
 newnode = (NODE*)calloc(1 , sizeof(NODE));
 newnode -> data = val ;
 if(*start == 0)
 {
 *start = newnode;
 newnode -> next = *start ;
 }
 else
 {
 for(tptr=*start ;tptr->next!=*start&&tptr->data<val;
 prev = tptr , tptr = tptr -> next);
 if(tptr == *start && val < tptr->data)
 {
 for(tptr = *start ; tptr ->next!=*start ; tptr= tptr->next);
 tptr->next = newnode;
 newnode -> next = *start;
 *start = newnode;
 }
 else if(tptr->next == *start && val > tptr->data)
 {
tptr->next = newnode;
 newnode -> next = *start;

 }
 else
 {
 newnode -> next = tptr ;
 prev -> next = newnode;
 }
 }
}
int main()
{
 NODE *start = 0;
 int N , itr ,val;
 scanf("%d" , &N);
 for(itr= 1 ; itr <= N ; itr++)
 {
 scanf("%d" , &val);
 insertDataIntoCSLL(&start , val);
 }
 displayCSLL(start);
 return 0;
}
void displayCSLL(NODE* start)
{
 NODE *tptr ;
 for(tptr = start ; tptr->next!=start ; tptr = tptr -> next)
 printf("%d " , tptr->data);
 printf("%d" , tptr -> data);
}
