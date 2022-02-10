#include<stdio.h>
int input_side()
{
 int n;
 printf("Enter the Side of  an Triangle \n");
 scanf("%d",&n);
 return n;
}
int check_scalene(int a,int b,int c)
{
 if(a!=b && b!=c && c!=a)
 return 1;
 else
 return 0;
}
void output(int a,int b,int c,int isscalene)
{
 if(isscalene==1)
 printf("Triangle is Scalene \n");
 else
 printf("Triangle is not Scalene \n");
}
int main()
{
 int x,y,z,r;
 x=input_side();
 y=input_side();
 z=input_side();
 r=check_scalene(x,y,z);
 output(x,y,z,r);
 return 0;
}