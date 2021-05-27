#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int SIZE;
    int *arr;
} boundedArray;

boundedArray* getColumn(int R, int C, int matrix[][C],int K){
    boundedArray *ba=malloc(sizeof(boundedArray));
    ba->SIZE=R;
    ba->arr=(int*)malloc(sizeof(int)*R);
    for(int i=0;i<R;i++){
        ba->arr[i]=matrix[i][k-1];
    }
    return ba;
}
int main()
{
    int R, C, K;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }
    scanf("%d", &K);
    boundedArray *bArr = getColumn(R, C, matrix, K);
    printf("Column %d: ", K);
    for(int index = 0; index < bArr->SIZE; index++)
    {
        printf("%d ", bArr->arr[index]);
    }
    return 0;
}
