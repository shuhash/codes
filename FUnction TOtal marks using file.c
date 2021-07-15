

























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










































