Function find TotalMarks
The function/method find TotalMarks accepts two-arguments file1name and file2name representing the names of two text files. The first file contains a list of student names. The second file contains the marks in three subjects of the

students.

The function/method find TotalMarks must find the total marks of each student and then modify the content of the first file by adding the total marks after the name of each student CE CORCE ECTFERACE ECCIS PARECE

Your task is to implement the function findTotalMarks so that it passes all the test cases. CE VOCHERCE ECCIER

Note:

-Both the files have the same number of lines

-The length of each student's name must be less than or equal 30.

IMPORTANT: Do not write the main() function as it is already defined.

Example Input/Output 1:

Input:

students2021.txt

marks2021.txt

Output: Students and Total Marks:

Hector 190

Catherine 209

Anitha 262

Pravin 255

Explanation:

Here students2021.txt is present in the same folder where the program executes and the file contains the following 4
  

lines.

Hector
Catherine

Anitha

Pravin

Here marks2021.txt is present in the same folder where the program executes and the file contains the following 4 lines

40 90 60

54 60 95

90 85 87

87 99 69

Example Input/Output 2:

Input:

namelist.txt

marklist.txt

Output:

Students and Total Marks:

Pravin 205

thanvi 189

Deepa 250

Krishna 159

Catherine 265

Hector 215

Mambo 209

Explanation: Here namelist.txt is present in the same folder where the program executes and the file contains the following 7 lines

Pravin

Jhanvi

Deepa

Krishna

Catherine

Hector

Mambo
Explanation:

Here namelist.txt is present in the same folder where the program executes and the file contains the following 7 lines.

Pravin

Jhanvi

Deepa

Krishna

Catherine

Hector Mambo

Here marklist.txt is present in the same folder where the program executes and the file contains the following 7 lines.

50 85 70

65 60 64

92 88 70

54 50 55

88 85 92

70 90 55

55 89 65

Max Execution Time Limit: 50 millises






















#include <stdio.h>
#include <stdlib.h>
void findTotalMarks(char *file1name, char *file2name) {
  FILE *f1p=fopen(file1name,"r"); 
  FILE *f1w=fopen(file1name,"r+");
  FILE *f2p=fopen(file2name,"r"); 
  int a,b,c; char name[100]; 
  while(fscanf(f2p,"%d %d %d",&a,&b,&c)==3){
    fscanf(f1p,"%s",name); 
    fprintf(f1w,"%s %d\n",name,a+b+c); 
  }
  fclose(f1p);
  fclose(f1w);
  fclose(f2p); 
} // end of findTotalMarksfunction
void printFileContent(char *filename) {
  FILE *fp = fopen(filename,"r");
  char ch; 
  while((ch = fgetc(fp)) != EOF) {
    printf("%c", ch); 
  }
  fclose(fp); 
} // end of printFileContent function
int main() 
{
  char file1name[31], file2name[31]; 
  scanf("%s\n%s", file1name, file2name); 
  findTotalMarks(file1name, file2name);
  printf("Students and Total Marks:\n"); 
  printFileContent(file1name); 
  return 0; 
} // end of main function










































