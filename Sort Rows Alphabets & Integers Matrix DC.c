#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,i,j;
scanf("%d %d",&a,&b);
char c[a][b][5],d[a],e[27]="abcdefghijklmnopqrstuvwxyz";
int f[a],t;
for(i=0;i<a;i++)
{
    for(j=0;j<b;j++)
    {
        scanf(" %s",&c[i][j]);
        if(strlen(c[i][j])==1&&isalpha(c[i][j][0]))
        d[i]=c[i][j][0];
    }
}
for(t=0,j=0;j<strlen(e);j++)
for(i=a-1;i>=0;i--)
if(e[j]==d[i])
f[t++]=i;t=0;
for(i=0,t=f[i];i<a;i++,t=f[i])
{
    for(j=0;j<b;j++)
    printf("%s ",c[t][j]);
    printf("\n");
}
}
