#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[15],i,H,M,h,m;
scanf("* %d %d %d *\n%d * * * %d\n%d * * * %d\n%d * * * %d\n* %d %d %d *",&a[11],&a[12],&a[1],&a[10],&a[2],&a[9],&a[3],&a[8],&a[4],&a[7],&a[6],&a[5]);
scanf("\n%d %d",&H,&M);
for(i=1;i<=12;i++){
    if(a[i]==H)
        h=i;
    if(a[i]==M){
        m=i*5;
        if(m==60){
            m=0;
            // if(h==13)
            //     h=1;
        }
    }
}
printf("%02d:%02d",h,m);
}
