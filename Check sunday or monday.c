#include<stdio.h>
int main()
{ 
char CH; 
scanf("%c", &CH);
switch(tolower(CH)) 
{
case 's': 
printf("Sunday");
break; case 'm': 
printf("Monday"); 
break; default: 
printf("Invalid"); 
} 
return 0;
}
