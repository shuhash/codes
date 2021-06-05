#include<stdio.h>
#include <stdlib.h>

int main()
{
    int amountInHand, beggarCount;
    scanf("%d%d",&amountInHand,&beggarCount);
    int initialAmount=amountInHand;
    int counter=1;
    while(counter <= beggarCount){
        initialAmount = initialAmount*2;
        counter++;
    }
    
    printf("%d",initialAmount);
}
