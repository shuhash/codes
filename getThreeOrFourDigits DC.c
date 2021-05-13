#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int SIZE;
    int *arr;
} boundedArray;
boundedArray* getThreeOrFourDigits(int SIZE, int arr[])
{
    boundedArray* ans=(boundedArray *)malloc(sizeof(boundedArray)); 
    ans->arr=(int *)malloc(1000000);
    ans->SIZE=0; 
    for(int i=0;i<SIZE;i++){
        if(arr[i]>99 && arr[i]<=9999)
        ans->arr[ans->SIZE++]=arr[i];
    }
    if(ans->SIZE==0){
        ans->SIZE=1; 
        ans->arr[0]=-1;
    }
    return ans;
    
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
    boundedArray *bArr = getThreeOrFourDigits(N, arr);
    printf("Old Array: ");
    for(int index = 0; index < N; index++)
    {
        printf("%d ", arr[index]);
    }
    printf("\nNew Array: ");
    for(int index = 0; index < bArr->SIZE; index++)
    {
        printf("%d ", bArr->arr[index]);
    }
    return 0;
}
