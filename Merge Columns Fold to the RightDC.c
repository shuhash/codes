#include<stdio.h>
#include<stdlib.h>

int main()
{
    int R, C, N;
    scanf("%d %d\n",&R,&C);
    int mat[R][C], row, col;
    for(row = 0; row < R; row ++){
        for(col = 0; col < C; col ++){
            scanf("%d ",&mat[row][col]);
        }
    }
    scanf("%d",&N);
    int leftCol = N - 1, rightCol = N;
    while(rightCol < C && leftCol >= 0){
        for(row = 0; row < R; row ++){
            mat[row][leftCol] += mat[row][rightCol];
        }
        leftCol --, rightCol ++;
    }
    for(row = 0; row < R; row ++){
        for(col = N - 1; col >= 0; col --){
            printf("%d ",mat[row][col]);
        }
        for(col = rightCol; col < C; col ++){
            printf("%d ",mat[row][col]);
        }
        printf("\n");
    }
}
