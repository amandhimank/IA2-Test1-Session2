 #include <stdio.h>

struct _triangle
{
  float base, altitude, area;
};

typedef struct _triangle Triangle;

int input()
{
  int n;
  printf("Enter no. of triangles");
  return n;
}

Triangle input_triangle()
{
  Triangle t;
  printf("Enter...");
  scanf("%f %f", &t.base, &t.altitude);
  return t;
}

void input_n_triangles(int n, Triangle t[n])
{
  for(int i = 0; i < n; i++)
  {
    t[i] = input_triangle();
  }
}
void find_area(Triangle *t)
{
  t->area = 0.5 * t->base * t->altitude; 
}

void find_areas_n(int n, Triangle t[n])
{
  for(int i = 0; i < n; i++)
  {

  }
}
Triangle find_smallest_triangle(int n, Triangle t[n]);

int main()
{
  int a;
  a = input();
  Triangle t;
  t = input_triangle();
  input_n_triangles(a, &t);
  find_area(&t);


}