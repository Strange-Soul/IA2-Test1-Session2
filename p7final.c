#include<stdio.h>
struct _triangle
{
float base,height,area;
};
typedef struct _triangle Triangle;


Triangle input_triangle()
{
  Triangle t;
  printf("Enter the triangle \n");
  scanf("%f %f",&t.base,&t.height);
  return t;
}
void find_area(Triangle *t)
{
  (*t).area=0.5*(*t).base*(*t).height;
}
void output(Triangle t)
{
  printf("Area of triangle having base=%f and Height=%f is : %f \n",t.base,t.height,t.area);
}
int main()
{
  Triangle x;
  x=input_triangle();
  find_area(&x);
  output(x);
  return 0;
}