#include<stdio.h>
int main()
{
	int a,min,i,num;
	scanf("%d",&a);
	num=a;
	min=a^0;
	for(i=0;i<=a;i++)
	{
		a=a|(a>>i);
	}
	a=a-num;
	printf("%d %d",min,a);
	
}
