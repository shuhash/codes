#include<stdio.h>
#include<stdlib.h>
int min(int x,int y)
{
  return min(x,y)
}
int max(int x,int y)
{
  return max(x,y)
}
int main()
{
  int r,c,,X1,X2,Y1,Y2;
  scanf("%d %d\n",&r,&c);
  char mat[r][c];
   {
        for(int j=0;j<C;j++)
        {
            scanf("%c ",&mat[i][j]);
        }
   }
  scanf("\n%d %d\n%d %d",&X1,&Y1,&X2,&Y2);
  X1--; Y1--;
  X2--; Y2--;
  int mindis=10000000;
  if(X1==X2)
  {
    int sum=0;
    for(int j=min(Y1,Y2);j<=max(Y1,Y2);j++)
    {
      sum+=tolower(mat[X1][j])-'a'+1;
    }
    if(sum<mindis) mindis=sum;
  }
 else if(Y1=Y2)
 {
   int sum=0;
   for(int i=min(X1,X2);i<=max(X1,X2);i++)
   {
     sum+=tolower(mat[i][Y1])-'a'+1;
   }
   if(sum<mindis) mindis=sum;
 }
else
{
  int sum=0;
  if(X1>X2)
  {
    for(int i=X1;i>=X2;i--)
    {
      sum+=tolower(mat[i][Y1])-'a'+1;
    }
  }
  else
  {
    for(int i=X1;i<=X2;i++)
    {
      sum+=tolower(mat[i][Y1])-'a'+1;
    }
  }
  if(Y1>Y2)
  {
    for(int i=Y1-1;i>=Y2;i++)
    {
      sum+=tolower(mat[X2][i])-'a'+1;
    }
  }
  else
  {
    for(int i=Y1+1;i<=Y2;i++)
    {
      sum+=tolower(mat[X2][i])-'a'+1;
    }
  }
  if(sum<mindis) mindis=sum;
  sum=0;
if(Y1>Y2)
        {
            for(int i=Y1;i>=Y2;i--)
            {
                sum += tolower(mat[X1][i])-'a'+1;
            }
        }
        else
        {
            for(int i=Y1;i<=Y2;i++)
            {
                sum += tolower(mat[X1][i])-'a'+1;
            }
        }
        if(X1>X2)
        {
            for(int i=X1-1;i>=X2;i--)
            {
                sum += tolower(mat[i][Y2])-'a'+1;
            }
        }
        else
        {
            for(int i=X1+1;i<=X2;i++)
            {
                sum += tolower(mat[i][Y2])-'a'+1;
            }
        }
        if(sum<minDistance) minDistance = sum;
    }
 printf("%d",mindis);
}
      
  
