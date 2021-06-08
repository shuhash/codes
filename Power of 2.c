#include <stdio.h>
 
int main(){
	int num;
	int count=0;
	scanf("%d", &num);              
	int *a = (int*)malloc(sizeof(int)*num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
		int val = a[i];
		if((val & (val-1))==0)
		{
			count++;
		}
	}
	printf("%d",count);
}
