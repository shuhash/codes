#include<stdio.h>
int main()
{
int arr[100],itr,num;
scanf("%d",&num);
for(itr=0;itr<num;itr++)
{
scanf("%d",&arr[itr]);
}

for(itr=num-1;itr>=0;itr--)
{
printf("%d ",arr[itr]);
}
return 0;
}
