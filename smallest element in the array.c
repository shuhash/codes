#include<stdio.h>
int main()
{
int array[50], size, i, smallest;
scanf("%d", &size);
for (i = 0; i < size; i++)
scanf("%d", &array[i]);
smallest = array[0];
for (i = 1; i < size; i++)
{
if (smallest > array[i])
smallest = array[i];
}
printf("%d", smallest);
return 0;
}
