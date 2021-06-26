#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int hyp=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            for(int k=0;k<hyp+i;k++)
            {
                if(k<hyp)
                {
                    printf(" -");
                }
                else
                printf(" *");
            }
            printf("\n");
        }
        hyp+=i;
        
    }

}
