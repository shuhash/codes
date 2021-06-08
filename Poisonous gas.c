#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	scanf("%d", &num);            
	for(int i=0;i<num;i++)
	{
		int len;
		scanf("%d",&len);
		int *a=(int*)malloc(sizeof(int)*len);
		for(int i=0;i<len;i++)
		{
			scanf("%d",&a[i]);
		}
		int sum=0;
		for(int i=0;i<len;i++)
		{
			if(a[i]>0)
			{
				sum += a[i];
			}
		}
		if(sum==0)
		{
			printf("No\n");
		}
		else if((sum & (sum-1)) == 0)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
}
