#include<stdio.h>
#include<stdlib.h>
int vowel(char ch)
{
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        return 1;
    }
    return 0;
}
int main()
{
    char str[1001];
    scanf("%s",str);
    int l=strlen(str);
    for(int i=0;i<l;i++)
    {
        if(vowel(str[i]))
        {
            for(int j=i+1;j<l;j++)
            {
                if(vowel(str[j]))
                {
                    char t=str[i];
                    str[i]=str[j];
                    str[j]=t;
                    i=j;
                    break;
                }
            }
        }
    }
    printf("%s",str);
  return 0;
    

}
