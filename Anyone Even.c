#include<stdio.h>
int main()
{ 
  int num1, num2;
  scanf("%d %d", &num1, &num2);
  if(num1%2==0||num2%2==0)
  { 
    printf("yes"); 
  } 
  else 
  { 
    printf("no"); 
  }
}
