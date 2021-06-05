#include<stdio.h>
#include <stdlib.h>

int main()
{
    int startCount,endCount;
    scanf("%d%d",&startCount,&endCount);
    int soldCount = startCount - endCount;
    printf("%d",soldCount);

}
