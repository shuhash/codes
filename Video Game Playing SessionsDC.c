#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,d,e,f,st,et;
    scanf("%d:%d%d:%d%d%d",&a,&b,&c,&d,&e,&f);
    st=a*60+b;et=c*60+d;a=0;
    while((st+e)<=et)
    {
    printf("%02d:%02d - ",st/60,st%60);
    st+=e;
    printf("%02d:%02d\n",st/60,st%60);a=1;
    st+=f;
    }
    if(a==0)printf("-1");
}
