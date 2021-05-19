#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int SIZE;
    int *arr;
} boundedArray;
boundedArray* integerToArray(int N)
{
    boundedArray *bArray=malloc(sizeof(boundedArray));
    char s[20];
    N=abs(N);
    sprintf(s,"%d",N);
    bArray->SIZE=strlen(s);
    bArray->arr=(int*)malloc(sizeof(int)*100);
    for(int i=0;i<bArray->SIZE;i++)
    {
        bArray->arr[i]=s[i]-'0';
    }
    return bArray;
}
int main()
{
    int N;
    scanf("%d", &N);
    boundedArray *bArr = integerToArray(N);
    printf("Array: ");
    for(int index = 0; index < bArr->SIZE; index++)
    {
        printf("%d ", bArr->arr[index]);
    }
    return 0;
}
