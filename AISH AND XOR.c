#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,one[n],zer[n];
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	one[0]=1;
	zer[0]=0;
	if(a[0]==0)
	 {
        zer[0]=1;
		one[0]=0;
	 }
	for(i=1;i<n;i++)
	 {
		 if(a[i]==1)
		   {
			   zer[i]=zer[i-1];
			   one[i]=one[i-1]+1;
		   }
		 else
		 {
			zer[i]=zer[i-1]+1;
			one[i]=one[i-1];
		 }
	 }
	int q,l,r;
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d %d",&l,&r);
		l-=1;
		r-=1;
		if(l==0)
		   printf("%d %d\n",one[r]%2,zer[r]);
		else 
		    printf("%d %d\n",(one[r]-one[l-1])%2,zer[r]-zer[l-1]);
	}
}
