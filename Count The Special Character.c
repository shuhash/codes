#include<stdio.h>
int main()
{
char str[100];
int ind,count=0;
scanf("%[^\n]s",str);

for(ind=0;str[ind]!='\0';ind++)
{
if(!(str[ind]>=65&&str[ind]<=90||str[ind]>=97&&str[ind]<=122||str[ind]>=48&&str[ind]<=57))
{
count++;
}
}
printf("%d",count);
return 0;
}
