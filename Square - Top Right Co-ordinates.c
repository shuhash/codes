#include<stdio.h>

int main()
{
    int bottomLeftX, bottomLeftY, length;
    scanf("%d%d%d",&bottomLeftX,&bottomLeftY,&length);
    int topRightX = bottomLeftX+length;
    int topRightY = bottomLeftY+length;
    printf("%d\n%d",topRightX,topRightY);
}
