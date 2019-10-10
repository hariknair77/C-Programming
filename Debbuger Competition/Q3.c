# include <stdio.h>

struct Array
{
  int elements[10];
  int len;
}a;

void main()
{
  a.len = 0;
  int b[10];
  for (int i= 1; i<= 10; i++)
  {
      a.elements [a.len] = i;
      b[a.len++] = i;
  }
  printf("\na=");
  for (int i= 1; i<= 10; i++)
      printf ("%d\t",a.elements[i-1]);
  printf("\nb= ");
  for (int i= 1; i<= 10; i++)
      printf ("%d\t",b[i-1]);
}
