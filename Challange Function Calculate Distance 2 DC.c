#include <stdio.h>
#include <math.h>
typedef struct point{ 
  int X; 
  int Y;
} Point;
double caculateDistance(Point *point1,Point *point2){
int x1=point1->X;
  int x2=point2->X;
  int y1=point1->Y;
  int y2=point2->Y;
  return sqrt(pow(x2-x1),2)+pow(y2-y1),2));
}
int main()
{ 
  Point P1, P2, P3;
  scanf("%d %d\n", &P1.X, &P1.Y); 
  scanf("%d %d", &P2.X, &P2.Y); 
  printf("%.2lf", calculateDistance(&P1, &P2));
  return 0;
}
