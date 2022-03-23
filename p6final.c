#include <stdio.h>
#include <string.h>

void input_string(char *a);
char str_reverse(char a);
void output(char a,char reversea);

int main()
{
  char a, reversea;
  input_string(&a);
  reversea = str_reverse(a);
  output( a, reversea);
  return 0;
}

void input_string(char *a)
{
  printf("Enter the String :\n");
  scanf("%s", a);
}

char str_reverse(char a)
{
  int n = strlen(a);
  char str, reverse;
  for(int i = 0; i < (n/2); i++)
    {
      str = a[i];
      reverse = a[n-i-1];
    }
  return reverse;
}

void output(char a,char reversea)
{
  printf("%s", reversea);
}

  