#include<stdio.h>
int main()
{
int len,fir,last;
char str[100],temp;
scanf("%[^\n]s",str);
for(len=0;str[len]!='\0';len++);
for(fir=0,last=len-1;fir<last;fir++,last--)
{
temp=str[fir];
str[fir]=str[last];
str[last]=temp;
}
printf("%s",str);
return 0;
}
