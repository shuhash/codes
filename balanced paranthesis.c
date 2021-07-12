/*balanced paranthesis
input:(((()))   a,a,b,b,c,c
output:-1
input:()
output:1
*/
#include<stdio.h>
int main()
{           
  char str[100];
  int i,opencount,count;
  opencount=count=0;
  scanf("%s",str);
  for(i=0;str[i]&&count!=-1;i++)
  {
      if(str[i]=='(')
      {
          count++;
          opencount++;
      }
      else
      count--;
  }
  if(count==0)
  printf("%d",opencount);
  else
  printf("-1");
   return 0;
}

