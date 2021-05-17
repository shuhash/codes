#include<stdio.h>
int main()
{
int ind;
char str[100],str1[100];
scanf("%[^\n]s",str);

for(ind=0;str[ind]!='\0';ind++)
{
printf("*");
}
return 0;
}
