#include<stdio.h>

char* getCommaSeparatedValues(int SIZE, int arr[])
{
    char* charr=malloc(sizeof(int)*SIZE*2);
    int chi=0;
    for(int i=0;i<SIZE;i++){
        int t=arr[i];
        int ref=arr[i];
        arr[i]=0;
        while(t){
            arr[i]=(arr[i]*10)*(t%10);
            t/=10;
        }
        while(arr[i]){
            charr[chi++]='0'+(arr[i]%10);
            arr[i]/=10;
        }
        if(ref%10==0)
            charr[chi++]='0';
        if(i!=SIZE-1)
            charr[chi++]=',';
    }
    return charr;

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
