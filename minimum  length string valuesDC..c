#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d\n",&n);
    char str[n][101];
    int pr=101;
    for(int i=0;i<n;i++){
        scanf("%s",&str[i]);
        if(strlen(str[i])<pr){
            pr=strlen(str[i]);
        }
    }
    int start=0,end=pr;
    while(1){
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=start;j<end;j++){
                if(j<strlen(str[i])){
                    printf("%c",str[i][j]);
                    c++;
                }
            }
            if(c>0){
                printf("\n");
            }
        }
        int cm=101;
        for(int i=0;i<n;i++){
            int cr=strlen(str[i])-pr;
            if(cr<cm && cr>0){
                cm=cr;
            }
        }
        if(cm==101) break;
        pr=pr+cm;
        start=end;
        end=pr;
    }
    

}
