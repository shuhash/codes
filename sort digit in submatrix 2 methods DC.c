#include<stdio.h>
#include<stdlib.h>

int main()
{
int r,c,i,j,k,l;
scanf("%d%d",&r,&c);
int m[r][c];
for(i=0;i<r;i++)
    for(j=0;j<c;j++)
        scanf("%d",&m[i][j]);
for(i=0;i<=r-3;i+=3)
    for(j=0;j<=c-3;j+=3)
    {
        int arr[10]={0},c=0;
        for(k=i;k<i+3;k++)
            for(l=j;l<j+3;l++)
                if(arr[m[k][l]]==0)
                {
                    c++;
                    arr[m[k][l]]=1;
                }
        if(c==9)
        {
            c=1;
            for(k=i;k<i+3;k++)
                for(l=j;l<j+3;l++)
                    m[k][l]=c++;
        }
    }
for(i=0;i<r;i++,printf("\n"))
    for(j=0;j<c;j++)
        printf("%d ",m[i][j]);
return 0;
}




\\2nd method 
#include<stdio.h>
#include<stdlib.h>

int main() {
    int R, C;   scanf("%d%d", &R, &C);
    int sum[R / 3][C / 3], i, j, mat[R][C];
    memset(sum, 0, 4 * ((R * C) / 9));
    for(i = 0; i < R; i++)
        for(j = 0; j < C; j++)
            scanf("%d", mat[i]+j),
            sum[i / 3][j / 3] += 1 << mat[i][j];
    for(int y = 0, x; y < R / 3; y++)
        for(i = 0; i < 3; i += printf("\n"))
            for(x = 0; x < C / 3; x++)
                for(j = 0; j < 3; j++)
                    printf("%d ", sum[y][x] == 1022 ? 3 * i + j + 1 : mat[y*3+i][x*3+j]);}
