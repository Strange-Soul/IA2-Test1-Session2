#include<stdio.h>
void input(float *b,float *h)
{
  printf("Enter the base of triangle \n");
  scanf("%f",b);
  printf("Enter the height of triangle \n");
  scanf("%f",h);
}
void find_area(float b,float h,float *area)
{
  *area=0.5*b*h;
}
void output(float b,float h,float area)
{
  printf("A triangle having base=%f and height=%f having area =%f\n",b,h,area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}