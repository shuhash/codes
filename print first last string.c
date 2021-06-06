#include<stdio.h>
#include<stdlib.h>

int main()
{
    char arr[101];
    int len;
    scanf("%s%n",arr,&len);
    int i=0;
    while(i<=len-1)
    {
        for(int j=i;j>=0;j--) printf("%c",arr[j]);
        for(int j=len-1;j>=len-i-1;j--) printf("%c",arr[j]);
        i++;
        printf("\n");
    }
    
    

}
