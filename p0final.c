#include<stdio.h>
void input(float *base,float *height)
{
  printf("Enter the Base and height of Triangle \n");
  scanf("%f %f",base,height);
}
void find_area(float base,float height,float *area)
{
  *area=0.5*base*height;
}
void output(float base,float height,float area)
{
 printf("Area of Triangle is %f \n",area);
}
int main()
{
 float x,y,z;
 input(&x,&y);
 find_area(x,y,&z);
 output(x,y,z);
 return 0;
}