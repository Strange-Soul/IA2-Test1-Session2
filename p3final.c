#include<stdio.h>
int input_number()
{
 int n;
 printf("Enter any number \n");
 scanf("%d",&n);
 return n;
}
int is_composite(int n)
{
 int i,c;
 for(i=2;i<n;i++)
 {
   if((n%i)==0)
   {
    return 1;
   }
 }
 return 0;
}
void output(int n,int composite)
{
 if(composite==1)
   printf("%d is Composite Number\n",n);
 else
   printf("%d is not Composite Number \n",n);
}
int main()
{
 int x,y,z;
 x=input_number();
 y=is_composite(x);
 output(x,y);
 return 0;
}