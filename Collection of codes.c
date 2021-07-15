/*
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
int n,ans;
scanf("%d",&n);
ans=fib(n);
printf("%d",ans);
return 0;
}

#include<stdio.h>
int fact(int n);
int fact(int n)
{
if(n==1)
return 1;
else
return n*fact(n-1);
}
int main()
{
int n,ans;
scanf("%d",&n);
ans=fact(n);
printf("%d",ans);
return 0;
}




#include<stdio.h>
int sum(int n);
int sum(int n)
{
if(n==1)
return 1;
else
return n+sum(n-1);
}
int main()
{
int n,ans;
scanf("%d",&n);
ans=sum(n);
printf("%d",ans);
return 0;
}
//1111
//222
//33
#include<stdio.h>
void main()
{
int i, j, n;
scanf("%d", &n);
for(i = 1; i<=n; i++)
{
for(j = i-1; j<=n; j++)
{
printf("%d", i);
}
printf("\n");
}
}

// a 
// a b 
// a b c 
// a b c d
#include<stdio.h>
void patternprint(int n);
void patternprint(int n)
{
    char s;
    for(int i=0;i<n;i++)
    {
        s='a';
        for(int j=0;j<=i;j++)
        {
            printf("%c",s++);
        }printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    patternprint(n);
    return 0;
}

//sum of array
#include<stdio.h>
int getarraysum(int *arr,int len);
int getarraysum(int *arr,int len)
{
int sum = 0;
for(int i=0;i<len;i++)
{
sum += arr[i];
}
return sum;
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
    int ans=getarraysum(arr,n);
    printf("%d",ans);
    return 0;
}
#include<stdio.h>
int rev(int n);
int rev(int n)//3234
{
    int a=0;
    while(n!=0)
    {
        a=a*10+n%10;//4323
        n/=10;
    }
    return a;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",rev(n));
    return 0;
}



#include<stdio.h>
int fact(int n);
int combination(int n,int r);
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int combination(int n,int r)
{
    int t1,t2,t3;//n!/r!*(n-r)!
    t1=fact(n);//5*4*3*2*1=120//4*3*2*1=24
    t2=fact(r);//3*2*1=6//2*1=2
    t3=fact(n-r);//2*1=2//2*1=2
    return t1/(t2*t3);//120/(6*2)=120/12=10////24/(2*2)=24/4=6
}
int main()
{
    int n,r;
    scanf("%d%d",&n,&r);
    int ans=combination(n,r);
    printf("%d",ans);
    return 0;
}

// condition?printf("true"):condition?printf("t"):printf("false");
#include<stdio.h>
int max(int a,int b,int c);
int max(int a,int b,int c)
{
    if(a>b&& a>c)
    printf("%d a",a);
    else if(b>c)
    printf("%d b",b);
    else
    printf("%d c",c);
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    max(a,b,c);
}


#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    (a>b&&a>c)?printf("A"):(b>c)?printf("B"):printf("C");
}

//a=3 b=2 c=1------second largest number-------3
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a>b&&a<c)||(a<b&&a>c))//3>4||(3<4&&3>1)
    printf("%d a",a);
    else if((b>a&&b<c)||(b<a&&b>c))//(2>3)||(2<3&&2>1)
    printf("%d b",b);
    else
    printf("%d c",c);
}

#include<stdio.h>
int exponent(int m,int n);
int exponent(int m,int n){
if(n==0)
return 1;
else
return exponent(m,n-1)*m;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",exponent(m,n));
    return 0;
}


#include<stdio.h>
int isprime(int num);
int isprime(int num)
{
    int flag=1;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
           flag=0;
           break;
        }
    }
    return flag;
}
int main(){
int n;
scanf("%d",&n);
if(isprime(n)){
printf("Yes");
}
else{
printf("No");
}
}


#include<stdio.h>
int main()
{
int x = 1;
switch (x)
{
case 1: printf("Choice is 1");
break;
default: printf("Invalid choice");
break;
}
return 0;
}


//fibonacci series
#include<stdio.h>
int fib(int n);
int fib(int n)
{
    if(n<=1)
    return n; 
    else
    return fib(n-1)+fib(n-2);
}
int main()//0 1 1 2 3 5 8
{
    int n;
    scanf("%d",&n);
    //int ans=fib(n);
    //printf("%d",ans);
    printf("%d",fib(n));
    return 0;
}

//1111
//222
//33
//4

#include<stdio.h>
void main () {
int i, j, n = 5;
for(i=1; i<n; i++)
{
for(j=i;j<n;j++)
{
printf("%d", i);
}
printf("\n");
}
}


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("one");
        break;
        case 2: printf("two");
        break;
        case 3: printf("three");
        break;
        default:printf("Invalid");
        break;
    }
}
#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    switch(n)
    {
        case 'A':
        case 'a':printf("one");
        break;
        case 'b': printf("two");
        break;
        case 'c': printf("three");
        break;
        default:printf("Invalid character");
        break;
}
}
81-100---->A
61-80 ---->B
41-60--->c
0- 40--------fail


#include<stdio.h>
int main()
{
    int c;
    scanf("%d",&c);
    switch((c-1)/10)
    {
        case 9:
        case 8:printf("A");
        break;
        case 7:
        case 6:printf("B");
        break;
        case 5:
        case 4:printf("C");
        break;
        case 3:
        case 2:
        case 1:
        case 0:printf("fail");
        break;
        default:printf("Invalid");
    }
}






#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 81 ... 100 :
        printf("A");
        break;
        case  61 ... 80 :
        printf("B");
        break;
        case 41 ... 60 :
        printf("C");
        break;
        deafult:
        printf("fail");
        break;
        
    }
}











#include<stdio.h>
int main()
{
    int arr[100][100],row,col,i,j;
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for(i=0;i<row;i++,printf("\n"))
    {
        for(j=0;j<col;j++)
        printf("%d ",arr[i][j]);
    }
}


#include<stdio.h>
int main()
{
    int arr[100][100],row,col,i,j,sum=0;
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        sum+=arr[i][j];
    }
    printf("%d",sum);
}

//1 2 34  34 56 56 7
#include<stdio.h>
int count=0;
int a[100],b[100];
void deleteDuplicate(int n){
    
 int c,d;
 for (c = 0; c < n; c++)
 {
 for (d = 0; d < count; d++)
 {
 if(a[c] == b[d])//a[21]==b[21]
 break;
 }
 if (d == count)//21----
 {
 b[count] = a[c];//b[0]=a[21]
 count++;
 }
 }
}
int main(){
    int n,c;
    scanf("%d",&n);
    for(c=0;c<n;c++)
    scanf("%d",&a[c]);
    deleteDuplicate(n);
    for(c=0;c<count;c++)
    printf("%d ",b[c]);
    return 0;
}




#include<stdio.h>   
int *sortarray(int *arr,int len)
{
    int x=0,y=0,n=len;
    for(x=0;x<n;x++)
    {
        int index_of_min=x;
        for(y=x;y<n;y++)
        {
            if(arr[index_of_min]>arr[y])
            {
                index_of_min=y;
            }
        }
        int temp=arr[x];
        arr[x]=arr[index_of_min];
        arr[index_of_min]=temp;
    }
    return arr;
}
void findmaxelement(int arr1[],int arr2[],int len1,int len2)
{
    sortarray(arr1,len1);
    sortarray(arr2,len2);
    int max=0;
    if(arr1[len1-1]>arr2[len2-1])
    max=arr1[len1-1];
    else
    max=arr2[len2-1];
    printf("%d",max);
}

int main()
{
    int len1,len2;
    scanf("%d%d",&len1,&len2);
    int arr1[len1],arr2[len2];
    for(int i=0;i<len1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<len2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    findmaxelement(arr1,arr2,len1,len2);
    return 0;
}



#include<stdio.h>
int sort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr[n-1];
}
int main()
{
    int n,n1,arr[100],b[100],i,j,max;
    scanf("%d%d",&n,&n1);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n1;i++)
    {
        scanf("%d",&b[i]);
    }
    int c=sort(arr,n);
    int d=sort(b,n1);
    if(c>d)
    printf("%d",c);
    else
    printf("%d",d);
}

#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int k=n*n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        printf("%d\t",k--);
    
    printf("\n");
    
}}

1  
11
111  
1111
a  
a b 
a b c  
a b c d  


#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("1");
    
    printf("\n");
    
}}

#include<stdio.h>
int patternprint(int n);
int patternprint(int n)
{
    char s;
    for(int i=1;i<=n;i++,printf("\n"))
    {
        s='a';
        for(int j=1;j<=i;j++)
        printf("%c",s++);
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    patternprint(n);
}
//10  
//0 1 1 2 3 5 8 

#include<stdio.h>
void fib(int n);
void fib(int n)
{
    static int n1=0 ,n2=1 ,n3;
    if(n>0)
    {
        n3=n2+n1;
        n1=n2;
        n2=n3;
        
        printf(" %d ",n3);
        fib(n-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
   
    printf("%d %d",0,1);
     fib(n-2);
    return 0;
}

*/
#include<stdio.h>
int fun(int b);
int main()
{
    int n=3;
    fun(n);
    
}
int fun(int b)
{
    if(b>0)
    { 
        
        printf("%d",b);
        fun(b-1);
        printf("%d",b);
    }
}







