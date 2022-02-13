#include<stdio.h>

struct _triangle
{
  float base,altitude,area;
};

typedef struct _triangle Triangle;

Triangle input_triangle()
{
 Triangle t1;
 printf("Enter Base and Altitude of Triangle \n");
 scanf("%f %f",&t1.base,&t1.altitude);
 return t1;
}
void find_area(Triangle *t)
{
 (*t).area=0.5*(*t).base*(*t).altitude;
}
void output(Triangle t)
{
 printf("The Area of Triangle with Base = %f and Altitude = %f is %f \n",t.base,t.altitude,t.area);
}
int main()
{
  Triangle p,q;
  p=input_triangle();
  find_area(&p);
  output(p);
  return 0;
}