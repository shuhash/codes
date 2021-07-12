/*The function/method custom Split accepts two arguments - str and delimiter. The character array str represents a string  value and the delimiter represents a character.
The function/method custom Split must split the given string based on the given delimiter. Then the function return an array of string values containing the words after splitting the given string. function must    
Your task is to implement the function custom Split so that the program runs successfully.
 Note: At least one charac other than the delimiter is always presen in the given string.
The following structure is used to represent the boundedArray and is already defined in the default code 
(Do not write this definition again in your code)*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct BoundedArray 
{ 
  int SIZE; 
  char **words; 
} boundedArray; 
boundedArray* customSplit(char *str, char delimiter)
{
    boundedArray *bArr=malloc(sizeof(boundedArray));
    bArr->words=malloc(sizeof(char)*10001);
    char *tok=strtok(str,&delimiter);
    while(tok!='\0')
    {
        bArr->words[bArr->SIZE]=malloc(sizeof(char)*10001);
        strcpy(bArr->words[bArr->SIZE++],tok);
        tok=strtok(NULL,&delimiter);
    }
    return bArr;

}
int main() { 
  char str[1001], delimiter;
  scanf("%s\n%c", str, &delimiter); 
  boundedArray *bArr = customSplit(str, delimiter); 
  printf("Words:\n"); 
  for(int index = 0;index < bArr->SIZE; index++) 
  { 
    printf("%s\n", bArr->words[index]); 
  } 
  return 0; 
}
