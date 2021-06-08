#include<stdio.h>
int main(){
	int n,q;
	scanf("%d%d",&n,&q);
	long long int a[n];
	for(int i=0;i<n;i++)
	scanf("%lld",&a[i]);
	int b[n];
	for(int i=0;i<n;i++)
	b[i]=0;
	for(int i=0;i<n;i++){
		long long int e=a[i];
		int p=0,c=0;
		while(e>0){
			c=e&1;
			if(c==1&&p==1){
				b[i]=1;
				break;
			}
			p=c;
			e/=2;
		}
	}
	int z[n],sn=0;
	for(int i=0;i<n;i++){
		if(b[i]==1)
		sn+=1;
		z[i]=sn;
	}
	for(int i=0;i<q;i++){
		int l,r,co;
		scanf("%d%d",&l,&r);
		co=z[r-1]-z[l-1];
		if(b[l-1]==1)
		co+=1;
		printf("%d\n",co);
	}
}
