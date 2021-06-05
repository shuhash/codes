#include<stdio.h>
#include <stdlib.h>

int main()
{
    int startAmount,dayCount;
    scanf("%d%d",&startAmount,&dayCount);
    int payableAmount=0;
    int counter=0;
    while(counter < dayCount){
        payableAmount+= (startAmount + counter*200);
        counter++;
    }
    
    printf("%d",payableAmount);

}
