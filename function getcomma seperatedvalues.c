#include<stdio.h>
#include <stdlib.h>
char* getCommaSeparatedValues(int SIZE, int arr[])
{
    char *a=malloc(100);
    for(int i=0;i<SIZE;i++){
        if(i<SIZE-1){
            sprintf(&a[strlen(a)],"%d,",arr[i]);
        }else{
            sprintf(&a[strlen(a)],"%d",arr[i]);
        }
    }
    return a;

}
int main() 
{ 
 	int N; 
	scanf("%d", &N); 
	int arr[N]; 
	for(int index = 0; index < N; index++) 
	{ 
		scanf("%d", &arr[index]); 
	} 
	char *ptr = getCommaSeparatedValues(N, arr); 
	printf("CSV: %s", ptr); 
	return 0;
}
