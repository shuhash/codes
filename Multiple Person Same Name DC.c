#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n][33];
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
        printf("%s",str[i]);
        int count=0;
        for(int j=0;j<=i;j++)
        {
            if(strcmp(str[j],str[i])==0) 
            count++;
            
        }
        if(count>1)
            printf("%d",count);
        printf("\n");
    }
}
