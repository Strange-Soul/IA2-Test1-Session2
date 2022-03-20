#include<stdio.h>
int main()
{
  char a[40];
  printf("Enter the string \n");
  scanf("%s",a);
  for(int i=0;a[i]!='\0';i++)
    {
      if(a[i]>'a' && a[i]<'z')
        a[i]=a[i]-32;
    }
  printf("Upper case of string is %s \n",a);
 return 0;
}