#include<stdio.h>
int main()
{
int arr[100],itr;
int num;
scanf("%d",&num);
for(itr=0;itr<num;itr++)
{
scanf("%d",&arr[itr]);
}

for(itr=0;itr<num;itr++)
{
printf("%d ",arr[itr]);
}
return 0;
}
