#include <stdio.h>
 
int main()
{
	long long int t,a[1000],b[1000],count,cnt,i,j,tmp;
    scanf("%lli",&t);
    while(t--)
    {
    	scanf("%d",&count);
    	for(i=0;i<count;i++)
    		scanf("%lli",&a[i]);
    	for(i=0;i<count;i++)
    	{
    		tmp=a[i];
    		cnt=0;
    		while(tmp)
    		{
    			if(tmp&1)
    				cnt++;
    			tmp=tmp>>1;
    		}
    		b[i]=cnt;
    	}
		for (i = 1 ; i <= count - 1; i++) 
		{
    		j = i;
		    while ( j > 0 && b[j] < b[j-1]) 
		    {
      			tmp=a[j];
        		a[j]=a[j-1];
        		a[j-1]=tmp;
        		tmp=b[j];
        		b[j]=b[j-1];
        		b[j-1]=tmp;
			    j--;
    		}
  		}
    	for(i=0;i<count;i++)
    		printf("%lli ",a[i]);
    	printf("\n");
    }
    return 0;
}
