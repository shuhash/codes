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
          sum+=(arr[i]^y);
      }
   }
  printf("%d",sum);
}

#include<stdio.h>
#include<stdlib.h>

int main()
{int n;
scanf("%d",&n);
int a[n],s=0,x;
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&x);x--;
for(int i=0;i<n;i++)
s+=a[i]<1<<x?a[i]:a[i]>>x&1?a[i]-(1<<x):a[i]+(1<<x);
printf("%d ",s);
}
