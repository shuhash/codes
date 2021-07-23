/*Example Input/Output 1: 
Input: 
number one two four five eight eleven 
Output: 
Even Length Words: number four five eleven 
Explanation: 
Here the given string is number one two four five eight eleven. The even length words in the string are given below. 
number four five eleven 
Example Input/Output 2:
Input: 
tiger biscuit water 
Output:
Even Length Words: -1*/












boundedArray* getEvenLengthWords(char str[])
{
    boundedArray* evenArray=(boundedArray*)malloc(sizeof(boundedArray*));
    evenArray->SIZE=0;
    evenArray->words=malloc(sizeof(char *)*strlen(str));
    str[strlen(str)]=' ';
    str[strlen(str)]='\0';
    int counter=0,index=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            if(counter%2==0){
                evenArray->words[evenArray->SIZE]=(char*)malloc(sizeof(char*)*101);
                strncpy(evenArray->words[evenArray->SIZE++],str+index,counter);
            }
            index=i+1;
            counter=0;
        }
        else{counter++;}
    }
    if(evenArray->SIZE==0){
        evenArray->words[evenArray->SIZE++]="-1";
    }
    return evenArray;
    
}
