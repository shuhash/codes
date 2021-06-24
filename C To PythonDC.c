#include<stdio.h>
#include<stdlib.h>
{
  int N,currNum;
  scanf("%d",&N);
  unsigned long long int val, sum = 0;
  char numStr[15]; 
  for(int ctr = 1; ctr <= N; ctr++) 
  {
    scanf("%d", &currNum); 
    sprintf(numStr, "%d%d", sprintf(numStr, "%d", currNum), currNum);
    sscanf(numStr, "%llu", &val); 
    sum += val; 
  } 
  printf("%llu", sum); 
  return 0;
}
