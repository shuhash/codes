#include<stdio.h>
#include<stdlib.h>

int main()
{
    int R,C,T;
    scanf("%d %d\n",&R,&C);
    char mat[R][C];
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            scanf("%c ",&mat[i][j]);
        }
    }
    scanf("%d",&T);
    while(T!=0)
    {
        int apples=0,oranges=0;
        for(int j=0;j<C;j++)
        {
            if(mat[R-1][j]=='A') apples++;
            else if(mat[R-1][j]=='O') oranges++;
        }
        char check = apples>=oranges ? 'A' : 'O';
        for(int j=0;j<C;j++)
        {
            if(mat[R-1][j]==check)
            {
                mat[R-1][j] = '*';
                for(int i=R-1;i>=1;i--)
                {
                    char temp = mat[i-1][j];
                    mat[i-1][j] = mat[i][j];
                    mat[i][j] = temp;
                }
            }
        }
        T--;
    }
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            printf("%c ",mat[i][j]);
        }
        printf("\n");
    }
}
