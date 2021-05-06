#include<stdio.h>
#include<stdlib.h>

int main()
{
int R,C,K,i,j,k,l;
char a[100][100];
scanf("%d %d\n",&R,&C);
for(i=0;i<R;i++,scanf("\n"))
    for(j=0;j<C;j++)
        scanf("%c ",&a[i][j]);
scanf("%d",&K);
for(i=0;i<R;i++)
    for(j=0;j<C;j++){
        if(a[i][j]==a[i][j+K-1]&&a[i][j+K-1]==a[i+K-1][j+K-1]&&a[i+K-1][j+K-1]==a[i+K-1][j]&&a[i+K-1][j]==a[i][j]){
            for(k=i,l=j;k<i+K;k++,l++)
                a[k][l]='*';
            for(k=i,l=j+K-1;l>=j;k++,l--)
                a[k][l]='*';
            for(k=0;k<R;k++,printf("\n"))
                for(l=0;l<C;l++)
                    printf("%c ",a[k][l]);
            return 0;
        }
    }
}
    }
    printing:
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            printf("%c ",mat[i][j]);
        }
        printf("\n");
    }
}
