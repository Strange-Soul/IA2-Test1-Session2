#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter the number to check whether it is composite or not \n");
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
  if(n==0 || n==1)
    return 0;
}
void output(int n,int composite)
{
  if(composite==1)
    printf("%d is composite number \n",n);
  else if(composite==0)
    printf("%d is neither composite nor prime \n",n);
  else
    printf("%d is not a composite number \n",n);
}
int main()
{
  int n=input_number();
  int result=is_composite(n);
  output(n,result);
  return 0;
}











