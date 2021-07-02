#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void printdayname(int Day)
{
    char daynames[7][10]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    printf("%s ",daynames[Day-1]);
}
int main()
{
    char days[50][50][5];
    char row[101];
    int flag=0;
    int k=0,l=0;
    while(scanf("%[^\n]\n",&row)==1)
    {
        char *tok=strtok(row," ");
        while(tok!=NULL)
        {
            strcpy(days[k][l++],tok);
            tok=strtok(NULL," ");
        }
        k++;
        l=0;
    }
    if(k==6)
    {
        int date=0;
        for(int i=0;i<6;i++)
        {
            int Day=1;
            for(int j=0;j<7;j++)
            {
                if(days[i][j][0]!='*')
                {
                    date++;
                }
                if(days[i][j][0]=='#')
                {
                    printf("%d ",date);
                    printdayname(Day);
                    printf("\n");
                    flag=1;
                }
                Day++;
            }
        }
    }
    else
    {
        int date=0;
        for(int i=0;i<6;i++)
        {
            int Day=1;
            for(int j=0;j<7;j++)
            {
                if(days[j][i][0]!='*')
                {
                    date++;
                }
                if(days[j][i][0]=='#')
                {
                    printf("%d ",date);
                    printdayname(Day);
                    printf("\n");
                    flag=1;
                }
                Day++;
            }
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}
