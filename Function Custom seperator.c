#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* customSeparator(int N, char words[N][101], char sep)
{
    char *newStr=malloc(N*101);
   for(int i=0;i<N;i++)
   {
       strcat(newStr,words[i]);
       if(i!=N-1)
       {
           strncat(newStr,&sep,1);
       }
   }
   return newStr;
    
}



int main()
{ 
    int N; 
    scanf("%d", &N); 
    char words[N][101], sep;
    for(int index = 0; index < N; index++) 
    { 
        scanf("%s", words[index]); 
        
    } 
    scanf("\n%c", &sep); 
    char *newStr = customSeparator(N, words, sep);
    printf("String: %s", newStr); 
    return 0;
    
}
