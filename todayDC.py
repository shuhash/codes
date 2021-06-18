a=input().split()
temp=1
for i in range(len(a)):
    for j in range(len(a)):
        if (i!=j and a[i]+a[j]==a[i]+a[j]):
            print((a[i]+a[j])[::-1])
            temp=0
if temp==0:
    print(-1)

    
    
    
    #include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isPalindrome(char str[])
{
	int i = 0;
	int len = strlen(str) - 1;
	
	while (len > i)
	{
		if(str[i++] != str[len--])
		{
			return 0;
		}
	}
	return 1;
}
int main ()
{
    char strs[111][111];
    int n=0;
    while(scanf("%s",strs[n])==1)
    {
        n++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                char str[1111];
                printf(str,"%s%s",strs[i],strs[j]);
                if(isPalindrome(str))
                {
                    printf("%s",str);
                }
            }
        }
    }
}
