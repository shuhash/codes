#include <stdio.h>
 
int main()
{
    long long t,n,a,i,odd,even;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%lld",&n);
    	even=0;
    	odd=0;
    	for(i=0;i<n;i++)
    	{
    		scanf("%lld",&a);
    		if(a%2==0)
    		{
    			even++;
    		}
    		else
    		odd++;
    	}
    	printf("%lld\n", even*odd);
    }
    return 0;
}
