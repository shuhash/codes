#include<stdio.h>
#include<stdlib.h>

int main() {
    int M, N;   scanf("%d%d", &M, &N);
    int y, x, i, j;
    
    for(y = 0; y < N; y++)
        for(i = 0; i < M; i += printf("\n"))
            for(x = 0; x < N; x++)
                for(j = 0; j < M; printf("%d ", (y + x) % 2), j++);}
