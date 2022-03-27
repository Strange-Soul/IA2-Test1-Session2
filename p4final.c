#include<stdio.h>

int input_array_size()
{
  int n;
  printf("Enter the size of Array \n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("Enter the array elements \n");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int composite(int n)
{
  for(int i=2;i<n;i++)
    {
      if(n%i==0)
        return 1;
    }
  return 0;
}
int sum_composite(int n,int a[n])
{
  int i,sum=0;
  for(i=0;i<n;i++)
    {
      if(composite(a[i]))
        sum=sum+a[i];
    }
  return sum;
}
void output(int sum)
{
  printf("Sum of n composite Number is : %d \n",sum);
}
int main()
{
  int n=input_array_size();
  int p[n];
  input_array(n,p);
  int x=sum_composite(n,p);
  output(x);
  return 0;
}