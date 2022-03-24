/*#include<stdio.h>

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
}*/






#include<stdio.h>

struct _triangle
{
 float base,height,area;
};
typedef  struct _triangle Triangle;
int input_n()
{
  int n;
  printf("Enter the number of triangle \n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base and height of triangle \n");
  scanf("%f %f",&t.base,&t.height);
  return t;
}
void input_n_triangles(int n, Triangle t[n])
{
  printf("Enter %d triangles \n",n);
  for(int i=0;i<n;i++)
    scanf("%f %f",&t[i].base,&t[i].height);
}
void find_area(Triangle *t)
{
  t->area=0.5*(*t).base * (*t).height;
}
void find_areas_n(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    find_area(&t[i]);
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle small;
  small=t[0];
  for(int i=0;i<n;i++)
    {
      if(small.area>=t[i].area)
      small=t[i];
    }
  return small;
}

void output(int n, Triangle t[n], Triangle smallest)
{
  for(int i=0;i<n;i++)
    {
      printf(" %dth triangle  is having",i);
      printf("Base=%f and Height=%f \n",t[i].base,t[i].height);
    }
  /*printf("%d th triangle is having ",n-1);
  printf("Base=%f and height =%f \n",t[n-1].base,t[n-1].height);*/
  printf("Smallest triangle is  with base=%f and height=%f having area=%f \n",smallest.base,smallest.height,smallest.area);
}
int main()
{
  int n=input_n();
  Triangle p[n];
  input_n_triangles(n,p);
  find_areas_n(n,p);
  Triangle result=find_smallest_triangle(n,p);
  output(n,p,result);
  return 0;
}
