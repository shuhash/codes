#include <stdio.h>
int MAXSIZE =6;
int stack[6];
int top = -1;
int isempty() {
 if(top == -1)
 return 1;
 else
 return 0;
}
int isfull() {
 if(top == MAXSIZE-1)
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
 printf("Stack is empty\n");
 }
}
int push(int data) {
 if(!isfull()) {
 top = top + 1;
 stack[top] = data;
}
else {
 printf("%d could not push .. Stack is Full\n" , data);
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
 while(!isempty())
 printf("%d " , pop());
 return 0;
}
