#include<stdio.h>
void input_string(char *a)
{
  printf("Enter any String Do U Want to Reverse \n");
  scanf("%s",a);
}
void str_reverse(char *a,char *rev)
{ 
  int i;
  for(i=0;a[i]!='\0';i++)
    {
    
    }
   i--; 
  int j;
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
  char x[20];
  char y[20];
  input_string(x);
  str_reverse(x,y);
  output(x,y);
  return 0;
}