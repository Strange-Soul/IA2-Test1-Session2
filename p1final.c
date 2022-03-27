#include<stdio.h>
void input(float *base,float *height)
{
  printf("Enter the base and height of Triangle \n");
  scanf("%f %f",base,height);
}
void find_area(float base,float height ,float *area)
{
  *area=0.5*base*height;
}
void output(float base,float height,float area)
{
  printf("Area of triangle is :%f  and it's base=%f and height=%f \n",area,base,height);
}
int main()
{
  float  x,y,result;
  input(&x,&y);
  find_area(x,y,&result);
  output(x,y,result);
}