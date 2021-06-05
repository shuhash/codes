#include<stdio.h>
#include <stdlib.h>

int main()
{
    int hours,minutes;
    scanf("%d%d",&hours,&minutes);
    int seconds = hours*60*60 + minutes*60;
    printf("%d",seconds);
}
