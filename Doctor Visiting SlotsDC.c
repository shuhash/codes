/*Note: The format of the date in the doctor's visiting slot must be DD-MMM-YYYY, where MMM will be like Jan, Feb, Mar,.... till Dec. 
Boundary Condition(s): 
1 <= M, N <= 100 1 <= Y <= 2500 
Input Format:
The first line contains M and N separated by a space. The second line contains Y. 
Output Format: 
The lines containing the doctor's visiting slots as shown in the Example Input/Output section.
Example Input/Output 1: 
Input: 
30 30 2021 
Output:
City A:
01-Jan-2021 to 30-Jan-2021 
02-Mar-2021 to 31-Mar-2021
  01-May-2021 to 30-May-2021 
  30-Jun-2021 to 29-Jul-2021 
  29-Aug-2021 to 27-Sep-2021 
  28-Oct-2021 to 26-Nov-2021 
  27-Dec-2021 to 31-Dec-2021 
City B: 
31-Jan-2021 to 01-Mar-2021
  01-Apr-2021 to 30-Apr-2021 
  31-May-2021 to 29-Jun-2021 
  30-Jul-2021 to 28-Aug-2021 
  28-Sep-2021 to 27-Oct-2021 
  27-Nov-2021 to 26-Dec-2021 
Explanation:
Here M=30, N=30 and Y=2021.
  The doctor visiting slots in the city A for the year 2021 is given below.
    01-Jan-2021 to 30-Jan-2021
    02-Mar-2021 to 31-Mar-2021 
    01-May-2021 to 30-May-2021
    30-Jun-2021 to 29-Jul-2021 
    29-Aug-2021 to 27-Sep-2021
    28-Oct-2021 to 26-Nov-2021
    27-Dec-2021 to 31-Dec-2021
  The doctor visiting slots in the city B for the year 2021 is given below.
    31-Jan-2021 to 01-Mar-2021 
    01-Apr-2021 to 30-Apr-2021 
    31-May-2021 to 29-Jun-2021 
    30-Jul-2021 to 28-Aug-2021 
    28-Sep-2021 to 27-Oct-2021 
    27-Nov-2021 to 26-Dec-2021 
  Example Input/Output 2: 
Input: 
20 17 2019 
O0utput: 
City A: 
01-Jan-2019 to 20-Jan-2019
  07-Feb-2019 to 26-Feb-2019 
  16-Mar-2019 to 04-Apr-2019 
  22-Apr-2019 to 11-May-2019 
  29-May-2019 to 17-Jun-2019 
  05-Jul-2019 to 24-Jul-2019 
  11-Aug-2019 to 30-Aug-2019 
  17-Sep-2019 to 06-Oct-2019 
  24-Oct-2019 to 12-Nov-2019 
  30-Nov-2019 to 19-Dec-2019 
City B:
21-Jan-2019 to 06-Feb-2019 
  27-Feb-2019 to 15-Mar-2019 
  05-Apr-2019 to 21-Apr-2019 
  12-May-2019 to 28-May-2019 
  18-Jun-2019 to 04-Jul-2019 
  25-Jul-2019 to 10-Aug-2019 
  31-Aug-2019 to 16-Sep-2019 
  07-Oct-2019 to 23-Oct-2019 
  13-Nov-2019 to 29-Nov-2019 
  20-Dec-2019 to 31-Dec-2019
Max Execution Time Limit: 50 millisecs*/





#include<stdio.h>
#include<stdlib.h>
int isleap(int year)
{
    return ((year%400==0)||((year%100!=0)&&(year%4==0)));
}
int main()
{
    int m,n,year;
    scanf("%d %d\n%d",&m,&n,&year);
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(isleap(year))
    {
        days[1]++;
    }
    char months[12][5]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int l=0,flag=0,currDay=0,numOfDays=days[l];
    printf("City A:\n");
    while(1)
    {
        for(int i=0;i<m;i++)
        {
            currDay++;
            if(i==0)
                printf("%02d-%s-%04d to ",currDay,months[l],year);
            if(i==m-1)
                printf("%02d-%s-%04d \n",currDay,months[l],year);
            if(currDay==numOfDays)
            {
                if(l==11)
                {
                    if(i!=m-1)printf("%02d-%s-%04d\n",currDay,months[l],year);
                    flag=1;
                    break;
                }
                currDay=0;
                numOfDays=days[++l];
            }
        }
        if(flag==1)break;
        for(int i=0;i<n;i++)
        {
            currDay++;
            if(currDay==numOfDays)
            {
                if(l==11)
                {
                    flag=1;
                    break;
                }
                currDay=0;
                numOfDays=days[++l];
            }
        }
        if(flag==1) break;
    }
    printf("City B:\n");
    l=0;flag=0;currDay=0;numOfDays=days[l];
    while(1)
    {
        for(int i=0;i<m;i++)
        {
            currDay++;
            if(currDay==numOfDays)
            {
                if(l==11)
                {
                    flag=1;
                    break;
                }
                currDay=0;
                numOfDays=days[++l];
            }
        }
        if(flag==1) break;
        for(int i=0;i<n;i++)
        {
            currDay++;
            if(i==0)
                printf("%02d-%s-%04d to ",currDay,months[l],year);
            if(i==n-1)
                printf("%02d-%s-%04d \n",currDay,months[l],year);
            if(currDay==numOfDays)
            {
                if(l==11)
                {
                    if(i!=n-1)printf("%02d-%s-%04d\n",currDay,months[l],year);
                    flag=1;
                    break;
                }
                currDay=0;
                numOfDays=days[++l];
                
            }
        }
        if(flag==1) break;
    }
    

}
