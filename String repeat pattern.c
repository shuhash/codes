STRING REPEAT PATTERN:
/*
The program must accept two string values S1 and 52 as the input. The string S1 contains only alphabets and the string 52 contains only nonzero digits. The program must print the output based on the following conditions. ECCB For each digit D in 52, the program must print the first P alphabets of the first string D times, where P represents the position of the digit D in S2.

Note: Both S1 and 52 have the same length.

RCE TECH Boundary Condition(s):

1 <= Length of S1, S2 <= 100

Input Format:

The first line contains $1.

The second line contains S2.

Output Format:

The first L lines(where L is the length of S1) contain the alphabets of S1 based on the given conditions.

Example Input/Output 1:

Input:

asdf

4921

Output:
Output:
asdasd
asdf

Explanation:
Here S1 asdf and S2 = 4921.
a> a is printed 4 times.
asasasasasasasasas -> as is printed 9 times.
asdasdasd is printed 2 times.
asdf asdf is printed once.

  
  Example Input/Output 2:
Input:
Skill Rack
132498454
Output:
S
SkSkSk
SkiSki
SkilSkilskilSkil
SkillSkillSkillSkillSkillSkillskillskillSkill
SkillRSkillRSkillRSkillRSkillRSkillRSkillRSkillR
SkillRaSkillRaSkillRaSkillRa
Skill RacSkill RacSkill RacSkill RacSkill Rac
SkillRackSkill RackSkill RackSkill Rack*/



#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[111],s1[111];
    scanf("%s\n%s",s,s1);
    for(int i=0;i<strlen(s1);i++)
    {
        int c=s1[i]-'0';
        for(int j=0;j<c;j++)
        {
            for(int k=0;k<=i;k++)
            {
                printf("%c",s[k]);
            }
        }
        printf("\n");
    }
    

}
