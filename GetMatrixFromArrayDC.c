#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int** getMatrixFromArrays(int M, int arr1[], int N, int arr2[])
{
    int SIZE=sqrt(M+N),a1=0,a2=0;
    int** matrix=(int **)malloc(sizeof(int**)*(SIZE+1));
    for(int i=0;i<SIZE;i++){
        matrix[i]=(int *)malloc(sizeof(int*)*(SIZE+1));
        for(int j=0;j<SIZE;j++){
            if(a1<M)
            {
                matrix[i][j]=arr1[a1++];
            }
            else
            {
                matrix[i][j]=arr2[a2++];
            }
        }
    }
    return matrix;

}

int main() 
{
int M, N;
scanf("%d", &M);
int arr1[M];
for(int index = 0; index < M; index++) 
{ 
scanf("%d", &arr1[index]); 
} 
scanf("%d", &N); 
int arr2[N], SIZE = sqrt(M+N); 
for(int index = 0; index < N; index++) 
{
scanf("%d", &arr2[index]);
} 
int **newMatrix = getMatrixFromArrays(M, arr1, N, arr2); printf("Matrix:\n"); 
for(int row = 0; row < SIZE; row++) {
for(int col = 0; col < SIZE; col++) {
printf("%d ", newMatrix[row][col]); 
} printf("\n"); 
} 
return 0; 
}
