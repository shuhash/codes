#include <stdio.h>
int main()
{
    int X, Y, Z, ctr;
    scanf("%d %d %d",&X,&Y,&Z);
    for(ctr = Y; ctr>= X; ctr--)
    printf("%d ",ctr);
    printf("\n");
    for(ctr = Z; ctr>= Y; ctr--)
    printf("%d ",ctr);
    return 0;
}
