#include<stdio.h>
#include<stdlib.h>
void printAlarmTimings(char startTime[], char endTime[], int X)
{
    int startTimeH,startTimeM,endTimeH,endTimeM,tostart,toend;
    sscanf(startTime,"%d:%d",&startTimeH,&startTimeM);
    sscanf(endTime,"%d:%d",&endTimeH,&endTimeM);
    tostart=(startTimeH*60+startTimeM)+X;
    toend=(endTimeH*60+endTimeM);
    while(tostart<= toend)
    {
        printf("%02d:%02d\n",tostart/60,tostart%60);
        tostart+=X;
    }
    

}
int main()
{
  char startTime[7],endTime[7];
  int x;
  scanf("%s\n%s\n%d",starttime,endTime,&X);
  printAlaramtimings(startTime,endTime,X);
  return 0;
}
