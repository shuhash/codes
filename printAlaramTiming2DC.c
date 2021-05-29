#include<stdio.h>
#include<stdlib.h>

void printAlarmTimings(char startTime[], char endTime[], int X)
{
  int startH,startM,endH,endM,end,start,temp;
  startH=((startTime[0]-'0')*10)+(startTime[1]-'0');
  startM=((starttime[3]-'0')*10)+(starttTime[4]-'0');
  endH=((endTime[0]-'0')*10)+(endTime[1]-'0');
  endM=((endtime[3]-'0')*10)+(endTime[4]-'0');
  start=startH*60+startM;
  end=endH*60+endM;
  temp=start-X;
  for(int i=0;i<(end-start)/X;i++)
  {
    if(temp<=end)
    {
      printf("%02d:%02d\n",temp/60,temp%60);
      temp+=X;
    }
    else
    {
      break;
    }
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
