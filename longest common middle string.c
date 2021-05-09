#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s1[100],s2[100];
    scanf("%s\n%s",&s1,&s2);
    int m1 = strlen(s1)/2, m2 = strlen(s2)/2, i = -1;
    while(m1-i-1>=0 && m1+i+1<strlen(s1) && m2-i-1>=0 && m2+i+1<strlen(s2) && s1[m1-i-1]==s2[m2-i-1] && s1[m1+i+1]==s2[m2+i+1]){
        i+=1; 
    }
    if(i==-1){
        printf("-1");
    }
    else{
        for(int j=m1-i;j<=m1+i;j++){
            printf("%c",s1[j]);
        }
    }
}  
