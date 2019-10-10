# include <stdio.h>

int x=5;
void fn()
{
  int auto x=6;
  global int p;
  printf("\ninside fn, x=%d",x);
}
void main()
{
  external int x=5;
  final int b=5;
  fn();
  p=5;
  printf("\ninside main, x=%d",x);

  for (auto int i=0; i<3; )
  {
    int static a=5;
    printf("\ninside LOOP, a=%d b=%d i=%d",a,b,i);
    a++, i++;
  }
}
