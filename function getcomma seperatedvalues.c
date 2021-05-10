#include<stdio.h>
#include <stdlib.h>
char* getCommaSeparatedValues(int SIZE, int arr[])
{
    char *str=malloc(1001*sizeof(char));
    for(int index=0;index<SIZE;index++){
        char num[101];
        sprintf(num,"%d",arr[index]);
        strcat(str,num);
        if(index<SIZE-1){
            strcat(str,",");
        }
    }
    return str;
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
