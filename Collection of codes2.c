#include<stdio.h>
int* descendingSortArray(int *arr, int len)
{
int small,pos,i,j,temp;
for(i=0;i<=len-1;i++)
{
for(j=i;j<len;j++)
{
temp=0;
if(arr[i]<arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
return arr;
}
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    descendingSortArray(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
#include<stdio.h>
#include<math.h>
int adam (int n);
int adam(int n)
{
    int a=0;//a=0
    while(n!=0)//144!=0//14///1///0!=0...../////21!=0////2!=0////16////1
    {
        a=a*10+n%10;//0+4=====4///40+4==44///440+1=441/////0*10+1===1////a=10+2======12/////6////61
        n/=10;//14//1///0/////////////2/////0//////////1
    }
    return a;///441///12///61
}

int main()
{
    int n,a;
    scanf("%d",&n);//12//////////////////4
    a=adam(n*n);///12*12======144///////16
    a=sqrt(a);///441  --------21/////////61==========7
    a=adam(a);///21-------12////////7-----7
    if(a==n)/////////////7---------4
    printf("yes");
    else
    printf("no");
    
}
//// 0   4----------- 0 1 2 3   

#include<stdio.h>
#include<math.h>
int adam(int n);
int main()
{
    int n,n1,rev,a;
    scanf("%d%d",&n,&n1);
    while(n<=n1)
    {
        rev=adam(n*n);
        a=sqrt(rev);
        if(n==adam(a))
        printf("%d ",n);
        n++;
    }
}
int adam(int n)
{
    int rev,sum=0;
    while(n>0)
    {
        rev=n%10;
        sum=sum*10+rev;
        n/=10;
    }return sum;
}

*/

#include<stdio.h>
int main()
{
    int n,s=9,a;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;///3245%10===5//4//2
        if(s>a)//////0>5
        s=a;
        n/=10;//3245/10=====324
    }printf("%d",s);
}




