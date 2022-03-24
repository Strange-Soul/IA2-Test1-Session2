#include<stdio.h>

struct _triangle
{
 float base,height,area;
};
typedef struct _triangle Triangle;

int input_n()
{
  int n;
  printf("Enter the number of Triangle \n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base and height of Triangle \n");
  scanf("%f %f",&t.base,&t.height);
  return t;
}
void input_n_triangles(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      t[i]=input_triangle();
    }
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->height;
}
void find_areas_n(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle small;
  small=t[0];
  for(int i=0;i<n;i++)
    {
      if(t[i].area<small.area)
        small=t[i];
    }
  return small;
}
void output(int n, Triangle t[n], Triangle smallest)
{
  for(int i=0;i<n;i++)
    {
      printf("%f %f \n",t[i].base,t[i].height);
    }
  printf("%f %f \n",t[n-1].base,t[n-1].height);
  printf("Samllest triangle is :: that having base %f and height of %f and its area=%f \n",smallest.base,smallest.height,smallest.area);
}
int main()
{
  int n=input_n();
  Triangle x,z;
 // x=input_triangle();
  Triangle p[n];
  input_n_triangles(n,p);
  find_areas_n(n,p);
  z=find_smallest_triangle(n,p);
  output(n,p,z);
  return 0;
}
