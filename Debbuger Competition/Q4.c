#include <stdio.h>

void main(int argc, char *argv[])
{
  char ch ='A';
  int n = 81;
  int *ptr = &n;
  printf ("\n%d",ch);
  printf ("\n%X",ch);
  printf ("\n%o",ch);
  printf ("\n%c",n);
  printf ("\n%d %p",ch,ptr);
}
