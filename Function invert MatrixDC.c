#include<stdio.h>
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
