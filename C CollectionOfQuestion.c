/*

#include<stdio.h>
int main()
{
    int i,j,n,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d\t",k++);
        printf("\n");
    }
}

//1  
///2 3  
///4 5 6  

#include<stdio.h>
int fib(int n);
int fib(int n)
{
    if(n<=1)
    return n;
    else
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
}



#include<stdio.h>
int fib(int n);
int fib(int n)
{
    if(n<=1)
    return n;
    else
    return fib(n-1)+fib(n-2);
}
int main()
{
    int i,j,n,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d\t",fib(k++));
        printf("\n");
    }
}




#include<stdio.h>
int onbit(int n);
int onbit(int n)
{
    if(n==0)
    return 0;
    else
    return (n%2)+onbit(n/2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",onbit(n));
}


#include<stdio.h>
int digits(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",digits(n));
}
int digits(int n)
{
    if(n==0)
    return 0;
    else
    return (n%10)+digits(n/10);
}
//binary to decimal
#include<stdio.h>
int binary(int num);
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",binary(num));
}
int binary(int num)
{
    int val=1,rem=0,s;
    while(num>0)//0>0
    {
        s=num%10;//0//0//1//1
        rem=rem+s*val;//0+0*1=0//0+0*2=0//0+1*4=0+4=4////4+1*8=12
        num/=10;//110//11///1//0
        val=val*2;//val=2//4///8/16
    }
    return rem;
}

decimal to binary
12-----1100

#include<stdio.h>
int binary(int n);
int main()
{
    int n;
    scanf("%d",&n);
    binary(n);
}

int binary(int n)
{
 if(n==0)
 return 0;
 else
 {
     binary (n/8);
     printf("%d",n%8);
 }
}


#include<stdio.h>
int binary(int n);
int main()
{
    int n;
    scanf("%d",&n);
    binary(n);
}

int binary(int n)
{
 if(n==0)
 return 0;
 else
 {
     binary (n/2);
     printf("%d",n%2);
 }
}

10---A   11----B

#include<stdio.h>
int binary(int n);
int main()
{
    int n;
    scanf("%d",&n);//10
    binary(n);
}

int binary(int n)//10
{ int rem;
  rem=n%16;//10%16===10
  if(n<=9)//10<=9
  printf("%d",rem);
   else//10
     printf("%c",rem+55);//A=65
 
}

#include<stdio.h>
int countOccurences(int arr[],int val,int n)
{
 int count=0;
 for(int i=0;i<n;i++)
 {
 if(arr[i]==val){
 count++;
 }
 }
 return count;
}
int main(){
 int n;
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++)
 {
 scanf("%d ",&arr[i]);
 }
 int val;
 scanf("%d",&val);
 printf("%d",countOccurences(arr,val,n));
}


#include<stdio.h>
int arrayReverse(int *arr,int len){
int i,temp,originallen=len;
for(i=0;i<originallen/2;i++){
temp=arr[len-1];
arr[len-1]=arr[i];
arr[i]=temp;
len-=1;
}
return arr;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    arrayReverse(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}




*/



