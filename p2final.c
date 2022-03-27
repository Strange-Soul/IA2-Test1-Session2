#include<stdio.h>
int input_side()
{
  int n;
  printf("Enter the sides of  Triangle \n");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a,int b,int c)
{
  if(a==b && b==c && c==a)
    return 1;
  else
    return 0;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==1)
  {
    printf("Entered triangle is 'Equilateral triangle'!! \n");
  }
  else
    printf("Entered triangle is 'Scalene triangle'!! \n");
}
int main()
{
  int x,y,z;
  x=input_side();
  y=input_side();
  z=input_side();
  int result=check_scalene(x,y,z);
  output(x,y,z,result);
  return 0;
  
}