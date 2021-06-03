#include <stdio.h>
int main()
{
    int num, N;
    scanf("%d", &N);
    for(int ctr = 1; ctr <= N; ctr++)
    {
        scanf("%d ",&num);
        if(num==1)
        {
            break;
        }
        else{
            printf("%d",num);
        }
    }
    return 0;
}
