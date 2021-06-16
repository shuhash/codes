#include<stdio.h>
#include<stdlib.h>

int main()
{
    int R,C,N;
    scanf("%d %d",&R,&C);
    int mat[R][C],check[C],output[R][C];
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            scanf("%d ",&mat[i][j]);
            check[j] = 0;
        }
    }
    scanf("%d",&N);
    int curr=N-1,next=N,l=0;
    while(1)
    {
        if(curr>=0 && next<=C-1)
        {
            check[curr]=1;
            check[next]=1;
            for(int i=0;i<R;i++)
            {
                output[i][l] = mat[i][curr]+mat[i][next];
            }
            l++;
        }
        else
        {
            if(curr<0)
            {
                for(int j=0;j<C;j++)
                {
                    if(check[j]==0)
                    {
                        for(int i=0;i<R;i++)
                        {
                            output[i][l] = mat[i][j];
                        }
                        l++;
                    }
                }
            }
            else
            {
                for(int j=C-1;j>=0;j--)
                {
                    if(check[j]==0)
                    {
                        for(int i=0;i<R;i++)
                        {
                            output[i][l] = mat[i][j];
                        }
                        l++;
                    }
                }
            }
            break;
        }
        curr--;
        next++;
    }
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<l;j++)
        {
            printf("%d ",output[i][j]);
        }
        printf("\n");
    }
}
