#include<stdio.h>
void input_string(char *a)
{
  printf("Enter the String \n");
  scanf("%s",a);
}
void str_reverse(char *a,char *rev)
{
  int i,j;
  for(i=0;a[i]!='\0';i++);
      i--;
      for(j=0;a[j]!='\0';j++)
        {
          rev[j]=a[i];
          i--;
        }
      rev[j]='\0';
}
void output(char *a,char *reverse)
{
  printf("Reverse of String %s is %s \n",a,reverse);
}
int main()
{
  char s1[20],s2[20];
  input_string(s1);
  str_reverse(s1,s2);
  output(s1,s2);
  return 0;
}