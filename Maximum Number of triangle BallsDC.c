#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,i,j;
    scanf("%d\n",&x);
    int a[x+1][x+1];
    for(i=0;i<x;i++,scanf("\m"))
    {
        for(j=0;j<x-i-1;j++)
        scanf("*");
        for(j=0;j<=i;j++)
        scanf("%d ",&a[i][j]);
    }
for(i=x-2;i>=0;i--)
{
    for(j=0;j<=i;j++)
    { 
        a[i][j]+=(a[i+1][j]>a[i+1][j+1])?a[i+1][j]:a[i+1][j+1];
    }
}
printf("%d ",a[0][0]);


}
