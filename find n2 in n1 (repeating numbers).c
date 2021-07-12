/*find n2 in n1
input1:1001010
input2:0
output:4
*/
#include<stdio.h>
int main(){
    int num1,num2,count=0,po,digit;    1001010,0,1,10000000,
    scanf("%d%d",&num1,&num2);
    count=0;
    po=1;                                                        _10010__________
    while((num1/po)!=0) //1001010/10000000         Q= !=0      10|1001010
    {                                                            10________
        digit=(num1/po)%10; //digit=1%10 = 1              0
        if(digit==num2)               //1==0
        count++;           //count=4
        
        po*=10;//po=po*10    //po=1000000*10=10000000
        
    }
    
printf("%d",count);
return 0;
}

