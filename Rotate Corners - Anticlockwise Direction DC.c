#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    char a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<n/2;i++){
        int t=a[i][i];
        a[i][i]=a[i][n-i-1];
        a[i][n-i-1]=a[n-i-1][n-i-1];
        a[n-i-1][n-i-1]=a[n-i-1][i];
        a[n-i-1][i]=t;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
