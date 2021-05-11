#include<stdio.h>
int main()
{
int arr[1000],itr,sum=0;
int num;
scanf("%d",&num);

for(itr=0;itr<num;itr++)
{
scanf("%d",&arr[itr]);
sum=sum+arr[itr];
}
printf("%d",sum);
return 0;
}
