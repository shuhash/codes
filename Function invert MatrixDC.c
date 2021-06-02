#include <stdio.h>
#include <stdlib.h>
void InvertSubmatrix(int r,int c,int matrix[r][c],int srow,int scol,int k)
{
  srow--;
  scol--;
  int erow=srow+k;
  int erow=srow+k;
  for(int i=srow;i<erow;i++
      {
        for(int j=scol;j<ecol;j++)
        {
          matrix[i][j]=!matrix[i][j];
        }
      }
}
int main()
{
    int R, C, K, sRow, sCol;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }
    scanf("%d %d\n%d", &sRow, &sCol, &K);
    invertSubmatrix(R, C, matrix, sRow, sCol, K);
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}
