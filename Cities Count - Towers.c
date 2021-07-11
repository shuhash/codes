#include<stdio.h>
#include<stdlib.h>

int main()
{
    char arr[1001][1001],arr1[1001][1001];
    int r,c,co=0;
    scanf("%d %d\n",&r,&c);
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            scanf("%c ",&arr1[i][j]);
            arr[i][j]=arr1[i][j];
        }
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if (arr1[i][j]=='S'){
                for(int n=i-1;n<=i+1;n++){
                    for(int m=j-1;m<=j+1;m++){
                        arr[n][m]='#';
                    }
                }
            }
            if (arr1[i][j]=='L'){
                for(int n=i-2;n<=i+2;n++){
                    for(int m=j-2;m<=j+2;++m){
                        arr[n][m]='#';
                    }
                }
            }
        }
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if (arr[i][j]=='#') co++;
        }
    }
    printf("%d",co);

}
