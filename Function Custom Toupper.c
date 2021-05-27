#include<string.h>
void *customToUpper(char str[], char fromChar, char toChar)
{
    for(int i=0;i<strlen(str);i++){
        if(str[i]>=fromChar && str[i]<=toChar){
            if(str[i]>='a' && str[i]<='z'){
                str[i]-=32;
            }
        }
    }
    return str;
}
