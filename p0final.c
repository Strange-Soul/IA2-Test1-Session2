#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter a number to check Composite number or not !!! \n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  for(int i=2;i<n;i++)
    {
      if(n%i==0)
        return 1;
    }
  return 0;
}
void output(int n,int composite)
{
  if(composite==1)
  {
    printf("%d is composite number \n",n);
  }
  else
    printf("%d is not composite number \n",n);
}
int main()
{
  int n,result;
  n=input_number();
  result=is_composite(n);
  output(result,n);
  return 0;
}