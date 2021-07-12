/*GCD OR GCF or HCF
input1:12
input2:30
output:6
12            30
12*1=12   30*1=30   
1*12=12
2*6=12
6*2=12
4*3=12                            133 ,11
3*4=12
30---> 30,15,2,1,10,3,6,5
12-->12,1,2,3,4,6
COMMON FACTORS=1,2,3,6
GREATEST COMMON FACTORS=6
*/
#include<stdio.h>
int main()
{   
    int num1,num2,temp,rem;
    scanf("%d%d",&num1,&num2);
    if(num1<num2) //12<30
    {
        temp=num1;//temp=12
        num1=num2;//num1=30
        num2=temp;//num2=12
    }
    while(-1)
    {
       rem=num1%num2; //30%12=6=rem
       if(rem==0)       //6==0
         break;
         num1=num2;     //num1=30
         num2=rem;        //num2=6
    }
    printf("%d",num2);  //6
    return 0;
}


