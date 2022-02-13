#include<stdio.h>
int input()
{
 int n;
 printf("Enter any Number \n");
 scanf("%d",&n);
 return n;
}
int gcd(int a,int b)
{
 int large,small,i,rem;
 large=a>b?a:b;
 small=a<b?a:b;
 i=1;
 rem=1;
 while(rem)
 {
   rem=large-i*small;
   if(rem<small)
   {
     large=small;
     small=rem;
     i=0;
   }
   i++;
 }
 return large;
}
void output(int a,int b,int gcd)
{
 printf("GCD of %d ,%d is: %d\n",a,b,gcd);
}
int main()
{
 int x,y,z;
 x=input();
 y=input();
 z=gcd(x,y);
 output(x,y,z);
 return 0;
}






