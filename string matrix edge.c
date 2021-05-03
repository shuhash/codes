#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[100][100],s1[100],p[100],s2[100],s3[100],s4[100],t1[100],t2[100];
    int r,c,n=0;
    scanf("%d %d\n",&r,&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%c ",&s[i][j]);
        }
        scanf("\n");
    }
    scanf("%s",p);
    for(int j=c-1;j>=0;j--){
        t1[n]=s[0][j];
        t2[n++]=s[r-1][j];
    }
    if(strstr(s[0],p)!=0 || strstr(t1,p)!=0){
        printf("Top");
        return 0;
    }n=0;
    for(int i=0;i<r;i++){
        s1[n]=s[r-i-1][c-1];
        s2[n]=s[i][c-1];
        s3[n]=s[r-i-1][0];
        s4[n++]=s[i][0];
    }
    if(strstr(s1,p)!=0 || strstr(s2,p)!=0){
        printf("Right");
        return 0;
    }
    if(strstr(s[r-1],p)!=0 || strstr(t2,p)!=0){
        printf("Bottom");
        return 0;
    }
    if(strstr(s3,p)!=0 || strstr(s4,p)!=0){
        printf("Left");
        return 0;
    }
    printf("-1");
}
