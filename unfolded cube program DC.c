#include<stdlib.h>

int main()
{
char a,b,c,d,e,f;
int i=0,n;
scanf("%c %c %c %c %c %c",&a,&b,&c,&d,&e,&f);
scanf("%d",&n);
for(int k=0;k<n*3;k++){
    for(int j=0;j<n*4;j++){
        if(k<n && j>=n &&  j<n*2){
            printf("%c ",f);
        }
        else if(k>=n &&  k<2*n && j<n ){
            printf("%c ",d);
        }
        else if(k>=n && k<2*n &&  j<2*n){
            printf("%c ",a);
        }
        else if(k>=n && k<2*n && j<3*n){
            printf("%c ",b);
        }
        else if(k>=n && k<2*n ){
            printf("%c ",c);
        }
        else if(k>=2*n && j>=n && j<n*2){
            printf("%c ",e);
        }
        else{
            printf("* ");
        }
    }
    printf("\n");
}

}
