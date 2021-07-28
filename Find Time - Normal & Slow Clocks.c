#include<stdio.h>
#include<stdlib.h>

void printTime(int seconds)
{
    int hh = seconds/3600;
    int mm = seconds%3600/60;
    int ss = seconds%3600%60;
    if(hh>12) hh = hh%12;
    if(hh==0) hh=12;
    printf("%02d:%02d:%02d\n",hh,mm,ss);
}
int main()
{
    int hh,mm,ss,K,X;
    scanf("%d:%d:%d\n%d %d",&hh,&mm,&ss,&K,&X);
    int timeInSeconds = (hh*3600)+(mm*60)+ss;
    int extraTime = X;
    printTime(timeInSeconds+extraTime);
    extraTime = X/K;
    printTime(timeInSeconds+extraTime);
}
