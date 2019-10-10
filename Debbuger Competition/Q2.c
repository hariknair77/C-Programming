# include <stdio.h>

int x=5;
void fn()
{
  auto int x=6;
  printf("\ninside fn, x=%d",x);
}
void main()
{
  extern int x;
  const int b=5;
  fn();
  printf("\ninside main, x=%d",x);

  for (auto int i=0; i<3; )
  {
    static int a=5;
    printf("\ninside LOOP, a=%d b=%d i=%d",a,b,i);
    a++, i++;
  }
}
