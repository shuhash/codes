#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,n,l;
    char t[100][100],g[100][100],te[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("\n%[^\-]s",t[i]);
        scanf("%c\t",&te[i]);
        scanf("%[^\n]s",g[i]);
    }
    for(i=0;i<n-1;i++)
    {
        l=strlen(g[i]);
        g[i][l-1]='\0';
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            printf("%svs %s(%s)\n",t[i],t[j],g[i]);
            printf("%svs %s(%s)\n",t[j],t[i],g[j]);
        }
    }
    return 0;
}
