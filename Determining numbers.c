#include<stdio.h>
 
int main()
{
	int size , num , res = 0;
	scanf("%d",&size);
	int arr[size];
	
	for(int i=0 ; i<size ; i++)
	{
		scanf("%d",&arr[i]);
		res ^= arr[i];
	}
 
	int temp_res = res , index = 0 ;
	while(temp_res > 0)
	{
		if(temp_res & 1)
			break;
		index++;
		temp_res >>= 1 ;
	}
 
	int mask = 1 << index ;
	temp_res = 0 ;
	for(int i=0 ; i<size ; i++)
	{
		if(arr[i] & mask)
			temp_res ^= arr[i] ;
	}
 
	int a = temp_res^res;
	int b = res^a;
 
	if(a<b)
		printf("%d %d",a,b);
	else
		printf("%d %d",b,a);
 
	return 0;
}
