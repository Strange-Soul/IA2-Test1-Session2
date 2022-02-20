#include<stdio.h>

struct _triangle
{
float base,altitude,area;
};

typedef struct _triangle Triangle;

int input_n()
  {
    int n;
    printf("Enter any Number \n");
    scanf("%d",&n);
    return n;
  }
Triangle input_triangle()
{
  Triangle t;
  printf("Enter Sides of Triangle \n");
  scanf("%f %f",&t.base,&t.altitude);
  return t;
}
void input_n_triangles(int n,Triangle t[n])
{
  printf("Enter  the Sides of Triangle\n");
  for(int i=0;i<n;i++)
  t[i]=input_triangle();
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void find_areas_n(int n,Triangle t[n])
{
  for(int i=0;i<n;i++)
  find_area(&t[i]);
}
Triangle find_smallest_triangle(int n,Triangle t[n])
{
  Triangle smallest;
 smallest=t[0];
  for(int i=0;i<n;i++)
    {
      if(smallest.area>=t[i].area)
        smallest=t[i];
    }
  return smallest;
}
void output(int n,Triangle t[n],Triangle smallest)
{
  for(int i=0;i<n-1;i++)
    {
      printf("The smallest Triangle with Base and Altitude \n%f,%f\n",t[i].base,t[i].altitude);
      printf("%f,%f\n is \n",t[n-1].base,t[n-1].altitude);
    }
  printf("Smallest Triangle is Having Base of %f and Altitude %f has Area = %f\n",smallest.base,smallest.altitude,smallest.area);
}
int main()
{
  int n;
  n=input_n();
  Triangle q;
  Triangle p[n];
  input_n_triangles(n,p);
  find_areas_n(n,p);
  q=find_smallest_triangle(n,p);
  output(n,p,q);
  return 0;
}