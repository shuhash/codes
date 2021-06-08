#include <stdio.h>
int main()
{
	long long int arr[1024],n=1;
	int i,j,k=0,t;
	for(i=0;i<10;i++)
	{
		arr[k]=n;
		for(j=0;j<k;j++)
		{
			arr[k+j+1]=arr[k]+arr[j];
		}
		k=k+j+1;
		n=n*4;
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lli",&n);
		for(i=0;;i++)
		{
			if(arr[i]>=n)
			{
				break;
			}
		}
		printf("%lli\n",arr[i]);
	}
    return 0;
}
