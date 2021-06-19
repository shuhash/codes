#include<stdio.h>
#include<stdlib.h>

int isPalindrome(char str[])
{
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!=str[strlen(str)-1-i]) return 0;
    }
    return 1;
}
int main()
{
    char strs[1001][50];
    int N=0;
    while(scanf("%s",strs[N])==1)
    {
        N++;
    }
    int flag=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i!=j)
            {
                char str[2001];
                sprintf(str,"%s%s",strs[i],strs[j]);
                if(isPalindrome(str))
                {
                    printf("%s\n",str);
                    flag=1;
                }
            }
        }
    }
    if(flag==0)printf("-1");
}
