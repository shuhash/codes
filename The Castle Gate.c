#include<stdio.h>
void xor(int n)
{
	int count = 0;
	for(int i=1 ; i<n ; i++)
	{
		for(int j=i+1 ; j<=n ; j++)
		{
			if( (i^j) <= n )
				count++;
		}
	}
	printf("%d\n",count);
}
 
int main()
{
	int tc;
	scanf("%d",&tc);
 
	while(tc--)
	{
		int n;
		scanf("%d",&n);
 
		xor(n);
	}
 
	return 0;
}
