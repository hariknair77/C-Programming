# include <stdio.h>
// to print first 10 negative numbers in descending order
int main(int argc, char const *argv[]) {

  int a,b,c,d;    //change
  a = 1,2,3;
  b = (1,2,3);
  c,d = 0;

  printf("a= %d\n",a);
  printf("b= %d\n",b);
  printf("c= %d\n",c);
  printf("d= %d\n",d);

  for (int i= 0 ; i<10; i++)
    printf("\t%d",~i);
  return 0;
}
