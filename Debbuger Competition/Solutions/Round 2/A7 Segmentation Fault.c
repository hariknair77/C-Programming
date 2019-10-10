# include <stdio.h>
// illustrate the concept of array using primitive and derived datatypes
struct Array
{
  int elements[10];
  int len;
}*a;   //change

a.len = 0;    //change

int main()  //change
{
      //change
  int b[10];
  for (int i= 1; i<= 10; i++)
  {
      a.elements [a.len] = i;
      b[len++] = i;     //change
  }
  printf("\na=");
  for (int i= 1; i<= 10; i++)
      printf ("%d\t",a[i-1]);    //change   //change
  printf("\nb= ");
  for (int i= 1; i<= 10; i++)
      printf ("%d\t",b[i-1]);   //change
}
