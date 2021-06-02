#include <stdio.h>
#include <math.h>
typedef struct point{ 
  int X; 
  int Y;
} Point;
double caculateDistance(Point *point1,Point *point2){
  
return pow(pow(point2->X-poin1->X,2)+pow(point2->Y-point1->Y,2),.5);
}
int main()
{ 
  Point P1, P2, P3;
  scanf("%d %d\n", &P1.X, &P1.Y); 
  scanf("%d %d", &P2.X, &P2.Y); 
  printf("%.2lf", calculateDistance(&P1, &P2));
  return 0;
}




























