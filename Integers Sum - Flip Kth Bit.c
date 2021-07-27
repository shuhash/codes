#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n,x,sum=0,y;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  scanf("%d",&x);
  y=(1<<x- 1);
  for(int i=0;i<n;i++)
  {
      if(arr[i]<y)
      {
          sum+=arr[i];
      }
      else
      {
          sum+=(arr[i]^y#include<stdio.h>
#include<stdlib.h>

int flipK(int N,int K) 
{
    int bitNum=0,output=0;
    while(N!=0)
    {
        int bit = N%2;
        if(bitNum==K-1)
        {
            bit = !bit;
        }
        if(bit==1)
        {
            output += pow(2,bitNum);
        }
        N/=2;
        bitNum++;
    }
    return output;
}
int main()
{
    int N,K,sum=0;
    scanf("%d ",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&K);
    for(int i=0;i<N;i++)
    {
        sum += flipK(arr[i],K);
    }
    printf("%d",sum);
}
      }
   }
  printf("%d",sum);
}

#include<stdio.h>
#include<stdlib.h>

int flipK(int N,int K) 
{
    int bitNum=0,output=0;
    while(N!=0)
    {
        int bit = N%2;
        if(bitNum==K-1)
        {
            bit = !bit;
        }
        if(bit==1)
        {
            output += pow(2,bitNum);
        }
        N/=2;
        bitNum++;
    }
    return output;
}
int main()
{
    int N,K,sum=0;
    scanf("%d ",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&K);
    for(int i=0;i<N;i++)
    {
        sum += flipK(arr[i],K);
    }
    printf("%d",sum);
}
