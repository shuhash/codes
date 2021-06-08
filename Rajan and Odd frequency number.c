#include <stdio.h>
 
int main()
{
	int i = 0;
	int odd = 0;
	unsigned int n = 0;
	scanf("%d", &n);
	int size = 2*n+1;
	int arr[size];
	
	for(i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
 
	for(i = 0; i<size; i++) {
		odd = odd ^ arr[i];
	}
	printf("%d", odd);
	
	return 0;
}
