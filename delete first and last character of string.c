#include<stdio.h>

int main()

{

char s[100];

int i,n;

scanf(ā%sā,s);

n=strlen(s)-1;

for(i=1;i<n;i++)

printf(ā%cā,s[i]);

}
