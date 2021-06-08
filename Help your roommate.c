#include <stdio.h>
 
int main(){
	int num;
	scanf("%d", &num);              
	for(int i=0;i<num;i++)
	{
		int val,count=0;
		scanf("%d",&val);
		while(val)
		{
			if(val & 1)
			{
				count++;
			}
			val = val/2;
		}
		printf("%d\n",count);
	}
}
