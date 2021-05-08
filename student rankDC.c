#include<stdio.h>
#include<stdlib.h>

int main()
{
int N,K;
scanf("%d",&N);
int arr[N];
for(int i=0;i<N;i++)
scanf("%d",&arr[i]);
scanf("%d",&K);
int rankof=arr[K-1],rank=0,ispresent[101]={0};
for(int i=0;i<N;i++)
{
    for(int j=i+1;j<N;j++)
    {
        if(arr[i]<arr[j])
        {
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
        if(ispresent[arr[i]]==0)
        {
            rank++;
            if(arr[i]==rankof)
            {
                printf("%d",rank);
                return 0;
            }
        }
        ispresent[arr[i]]=1;
    
}
printf("%d",rank);
}
