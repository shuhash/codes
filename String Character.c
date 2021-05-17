#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
char str1;
int ind,count=0;
scanf("%c \n",&str1);
scanf("%[^\n]s",str);

for(ind=0;str[ind]!='\0';ind++)
{
if(str[ind]==str1)
{
count++;
printf("Present");
break;
}
}
if(count==0)
{
printf("Not Present");
}
return 0;
}
