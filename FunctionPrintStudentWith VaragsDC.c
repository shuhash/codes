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
