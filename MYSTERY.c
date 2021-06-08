#include <stdio.h>
int main()
{
	unsigned long long int num=0;
	unsigned int count=0;
	int total=6;
	num=0;
		
	while(scanf("%llu",&num)!=-1)
	{
		count=0;
		if(num<0 || num>(num<<18))
			return -1;
		
		while(num>0)
		{
			num &= (num-1);
			count++;
		}
		printf("%u\n",count);
	}
}
