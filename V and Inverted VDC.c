#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[100];
    scanf("%s",a);
    int l = (strlen(a)+1)/2;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<strlen(a);j++)
        {
            if(j==i||strlen(a)-j-1==i)
            printf("%c",a[j]);
            else if(j==l-i-1||strlen(a)-j-1==l-i-1)
            printf("%c",a[j]);
            else
            printf("*");
        }
        
        printf("\n");
    }
}
