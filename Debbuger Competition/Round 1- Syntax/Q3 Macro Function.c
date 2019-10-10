#include <stdio.h>
#define bar() {
		int var = 10;
    printf("var in bar: %d\n", var);}

void foo()
{
  int var = 5;
  printf("var in foo: %d\n", var);
  bar();
	}

void main(int argc, char *argv[])
{
  foo();
}
