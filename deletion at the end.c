#include<stdio.h>
#include<malloc.h>
typedef struct node
{
 int data;
 struct node *prev , *next;
}NODE;
void insertAtEnd(NODE**, NODE**, int);
void displayForward(NODE*);
void deleteAtEnd(NODE** start , NODE**end)
{
 if(*start == *end)
 {
 *start = *end = 0;
 }
 else
 {
 (*end)->prev->next = 0;
 (*end) = (*end)->prev;
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
 insertAtEnd(&start , &end , val);
}
deleteAtEnd(&start , &end);
displayForward(start);
 return 0;
}
void displayForward(NODE *start)
{
 NODE *tptr;
 for(tptr = start ; tptr ; tptr = tptr -> next)
 printf("%d " , tptr -> data);
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
