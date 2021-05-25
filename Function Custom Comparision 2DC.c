#include <stdio.h>
#include <stdlib.h>
char* getUpperCase(char str[]){
    char* ret = (char*)malloc(sizeof(char)*strlen(str));
    int i=0,j;
    for(j=0;j<strlen(str);j++){
        if(isupper(str[j]))
            ret[i++]=str[j];
    }
    return ret; 
} 
int customCompare(char str1[], char str2[])
{
    char* s1 = getUpperCase(str1);
    char* s2 = getUpperCase(str2);
    if(strcmp(s1,s2)==0)
        return 1;
    return 0;

}

int main()
{
    char str1[101], str2[101];
    scanf("%s\n%s", str1, str2);
    printf("%d", customCompare(str1, str2));
    return 0;
}
