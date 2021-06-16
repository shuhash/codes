#include <stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;
int isempty() {
 if(top == -1)
 return 1;
 else
 return 0;
}
int isfull() {
 if(top == MAXSIZE)
 return 1;
 else
 return 0;
}
int peek() {
 return stack[top];
}
int pop() {
 int data;
 if(!isempty()) {
 data = stack[top];
 top = top - 1;
 return data;
 } else {
 printf("Could not Pop, Stack is empty.\n");
 }
}
int push(int data) {
 if(!isfull()) {
 top = top + 1;
 stack[top] = data;
 } 
 else {
 printf("Could not Push, Stack is full.\n");
 }
}
int main() {
 int num;
 while(num!=-1)
 {
 scanf("%d",&num);
 if(num==-1)
 break;
 push(num);
 }
 while(isempty()==0)
 printf("%d ",pop());

 return 0;
}
