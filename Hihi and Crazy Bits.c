#include<stdio.h>
 
int main()
{
	int tc;
	scanf("%d",&tc);
 
	while(tc--)
	{
		long long int n;
		scanf("%lli",&n);
		printf("%lli\n",(n | (n+1)));
	}
	
