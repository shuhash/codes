#include<stdio.h>
#include <stdlib.h>

int main()
{
    int billAmount;
    scanf("%d",&billAmount);
    int payableAmount=billAmount;
    
    if(billAmount > 2000){
        payableAmount = billAmount*0.9;   
    }
    
    printf("%d",payableAmount);

}
