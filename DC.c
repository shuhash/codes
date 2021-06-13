#include <stdio.h>

#include<stdlib.h>

int main()
{
int N, X; 

scanf("%d %d", &N, &X); 

for (int ctr = 1; ctr <= X; ctr++) {

N += printf("%d", N); printf(" ");

} return 0;


}
