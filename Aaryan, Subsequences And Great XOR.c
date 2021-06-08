#include<stdio.h>
int main()
{
	int N, A, ans = 0, i;
	scanf("%d", &N);
	for(i = 0 ; i < N ; i++)
	{
		scanf("%d", &A);
		ans |= A;
	}              		
	printf("%d", ans);  
}
