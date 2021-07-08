The program must accept the name and the marks in maths physics chemistry of 4 students as the input The program must print the output based on the following conditions - The program must print the name and the total marks of the first student,

Then the program must print the name and the total marks of the first 2 students. 8C CC10-360K

Then the program must print the name and the total marks of the first 3 students.

Then the program must print, the name and the total marks of the all 4 students. ECC18160X=LÈECC¹R-50

Please fill in the missing lines of code so that the program runs successfully.

Example Input/Output 1:

Input

Hector 99 80 80

Gavin 75 75 75

Rachel 80 85 79 Oliver 89 81 90

Output:

Hector 259

Hector 259

Gavin 225

Hector 259 Gavin 225 Rachel 244 Hector 259 Gavin 225 Rachel 244 Oliver 260

Explanation:

The total marks of the first student Hector 259 (99-80-80) 
The total marks of the second student Gavin is 225 (75-75-75) 
The total marks of the third student Rachel is 244 (00 B5-79).
The total marks of the fourth student Oliver is 260 (89-81-90)

So the name and the total marks of the four students are printed based on the given conditions.

Example Input/Output 2:

Input:

Rajesh 75 80 77

Deepa 82 93 87

Jhanvi 95 99 100

Pravin 82 90 90

Output:

Rajesh 232 Rajesh 232

Deepa 262

Rajesh 232 Deepa 262

Jhanvi 294

Rajesh 232

Deepa 262

Jhanvi 294

Pravin 262

Max Execution Time Limit: 50 millisecs

Sol:

#include <stdio.h> 
#include <stdlib.h> 
#include <stdarg.h> 
typedef struct student {
char name[31]; 
int maths, physics, chemistry; 
} Student; 
void printStudents(int n,...)
{    
    va_list list;
    va_start(list,n);
    for(int i=0;i<n;i++)
    {        
        Student std=va_arg(list,Student);
        printf("%s %d",std.name,std.maths+std.physics+std.chemistry);    
        
    }    
    va_end(list);
    
}
int main() 
{
  Student stud1, stud2, stud3, stud4; 
  scanf("%s %d%d%d", &stud1.name, &stud1.maths, &stud1.physics, &stud1.chemistry); 
  scanf("%s %d%d%d", &stud2.name, &stud2.maths, &stud2.physics, &stud2.chemistry); 
  scanf("%s %d%d%d", &stud3.name, &stud3.maths, &stud3.physics, &stud3.chemistry); 
  scanf("%s %d%d%d", &stud4.name, &stud4.maths, &stud4.physics, &stud4.chemistry);
  printStudents(1, stud1); printStudents(2, stud1, stud2); 
  printStudents(3, stud1, stud2, stud3);
  printStudents(4, stud1, stud2, stud3, stud4); 
  return 0; 
}
