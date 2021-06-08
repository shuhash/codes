#include <stdio.h>
int main(){
	long long int num;
	scanf("%d", &num);
	char b[100000];
	while(num--){
		long long int c=0,n;
		int k=0;
		scanf("%lld",&n);
		scanf("%s",&b);
         for(int i=0;i<n;i++){
			if(b[i]=='0')
			 c++;
		 }
	printf("%lld\n", c);
	}              			
	return 0;      
}
