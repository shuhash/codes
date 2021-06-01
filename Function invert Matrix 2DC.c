void InvertSubmatrix(int R,int C,int matrix[R][C],int Srow,int Scol,int K)
{
  for(int i=sRow-1;i<sRow-1+K;i++)
  {
    for(int j=Scol-1;j=sCol-1+K;j++)
    {
      matrix[i][j]=abs(matrix[i][j]-1);
    }
  }
}
