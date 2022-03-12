#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("Enter the String to Reverse \n");
  scanf("%s",a);
}
void reverse_string(char *a)
{
  int i,j,s;
  i=0;
  j=strlen(a)-1;
  while(i<j)
    {
      s=a[i];//s=h,,s=o,l,l,e ,h
      a[i]=a[j];//a[i]=h=a[j]=o,o=l,l=l,e,h,
      a[j]=s;//a[j]=o,l,l,e,h
      i++;
      j--;
    }
}
void output(char *a)
{
  printf("Reverse of string is %s \n",a);
}
int main()
{
  char s1[20];
  input_string(s1);
  reverse_string(s1);
  output(s1);
  return 0;
}