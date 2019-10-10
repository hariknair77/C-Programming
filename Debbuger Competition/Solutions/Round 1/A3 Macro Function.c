#include <stdio.h>
#define bar() ({\		//change 	//change
		int var = 10;\	//change
    printf("var in bar: %d\n", var);})		//change 	//change

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
