#include<stdio.h>

int input_array_size()
{
 int n;
 printf("Enter size of Array \n");
 scanf("%d",&n);
 return n;
}
void input_array(int n,int a[n])
{
 printf("Enter Array Elements \n");
 for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
}
int is_composite(int n)
{
 for(int i=2;i<n/2;i++)
 {
   if((n%i)==0)
   return 1;
 }
 return 0;
}
int sum_composite_numbers(int n,int a[n])
{
  int i,sum=0;
 for(i=0;i<n;i++)
 {
   if(is_composite(a[i])==1)
   {
   sum+=a[i];
   }
 }
 return sum;
}
void out_put(int sum)
{
 printf("Sum of n Composite numbers is : %d \n",sum);
}
int main()
{
 int x,z;
 x=input_array_size();
 int y[x];
 input_array(x,y);
 z=sum_composite_numbers(x,y);
 out_put(z);
 return 0;;
}
