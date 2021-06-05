#include<stdio.h>
#include <stdlib.h>

int main()
{
    int length,breadth;
    scanf("%d%d",&length,&breadth);

    if(length == breadth){
        printf("SQUARE");
    }else
    {
        printf("RECTANGLE");
    }

}
