#include <stdio.h>
#include <stdlib.h>
void customToUpper(char str[], char fromChar, char toChar)
{
    int len = strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]>=fromChar && str[i]<=toChar) 
        {
            str[i] =toupper(str[i]);
        }
    }
    return str;

}
int main()
{
    char str[101], fromChar, toChar;
    scanf("%s\n%c %c", str, &fromChar, &toChar);
    customToUpper(str, fromChar, toChar);
    printf("Modified String: %s", str);
    return 0;
}
