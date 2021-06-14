#include <stdio.h>
#include <math.h> 
typedef struct point { 
  int X; 
  int Y; 
} Point; 
int dis(int X1,int Y1, int Y2, int X2)
{
return sqrt(pow(X2-X1,2)*pow(Y2-Y1);
}
int getRectangleArea(Point *point1, Point *point2) {
  int xx=point1->X;
  int yy=point2->Y;
  int l=dis(point1->X,point1->Y,xx,yy);
  int b=dis(point2->X,point2->Y,xx,yy);
  return l*b;
} 
int main() {
  Point P1, P2, P3;
  scanf("%d %d\n", &P1.X, &P1.Y); 
  scanf("%d %d", &P2.X, &P2.Y);
  printf("%d", getRectangleArea(&P1, &P2));
  return 0; 
}
