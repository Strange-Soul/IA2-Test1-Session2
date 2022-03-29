/*#include<stdio.h>

void input_string(char *a)
{
  printf("Enter  any string  to reverse \n");
  scanf("%s",a);
}
char str_reverse(char *a)
{
  int i,c;
  for(i=0;a[i]!='\0';i++)
    {
     c=i;
   }
  return c;
}
void  output(char *a,char reverse)
{
  int i;
  for(i=reverse;i>=0;i--)
    {
      printf("%c \n",a[i]);
    }
}
int main()
{
  char  v[200];
  input_string(v);
  char result=str_reverse(v);
  output(v,result);
  return 0;
}*/


#include<stdio.h>
#include<string.h>

void input_string(char *a)
{
  printf("Enter any string \n");
  scanf("%s",a);
}
void str_reverse(char *a)
{
  char s;
  int i,j;
  i=0;
  j=strlen(a)-1;
  while(i<j && a[i]!='\0')
    {
      s=a[i];
      a[i]=a[j];
      a[j]=s;
      i++;
      j--;
      
    }
}
void output(char *a)
{
  printf("Reverse of String is %s \n",a);
}
int main()
{
  char s[40];
c;  input_string(s);
  str_reverse(s);
  output(s);
  return 0;
}




