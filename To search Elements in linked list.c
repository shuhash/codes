
#include <stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
void sum(struct node *head)
{
    int s=0;
    struct node *t;
    t=head;
    while(t!=NULL)
    {
        s+=t->data;
        t=t->next;
    }
    printf("\n the sum is %d",s);
}
void count(struct node *head)
{
    int c=0;
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
      c=c+1;
      temp=temp->next;
    }
    printf(" \nthe no of nodes are :%d",c);
}


int main()
{
  int n,i,item;
  struct node *p,*head,*q;
  printf("enter the number of nodes:");
  scanf("%d",&n);
  printf("enter head node value:");
  scanf("%d",&item);
  p=(struct node *)malloc(sizeof(struct node));
  p->data=item;
  p->next=NULL;
  head=p;
  q=p;
  for(i=1;i<n;i++)
  {
  printf("enter node value:");
  scanf("%d",&item);
  p=(struct node *)malloc(sizeof(struct node));
  p->data=item;
  p->next=NULL; 
  q->next=p;
  q=q->next;
  }
  printf("\n");
  p=head;
  while(p!=NULL)
  {
      printf("\t %d",p->data);
      p=p->next;
  }
  sum(head);
    return 0;
}


