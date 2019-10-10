# include <stdio.h>
# include <stdlib.h>

enum grade { F, P = 4, E, D, C, B, A, O};   // change

int calculate(char ch)   // change
{
    switch (ch)
    {
      case 'F' : printf ("You Failed");
                 exit(0); // change
      case 'e' :
      case 'E' : return E;
      case 'p' :
      case 'P' : return P;
      case 'd' :
      case 'D' : return D;
      case 'c' :
      case 'C' : return C;
      case 'b' :
      case 'B' : return B;
      case 'a' :
      case 'A' : return A;
      case 'o' :
      case 'O' : return O;
      default  : printf("Invalid grade entered");
                 exit(0);   //Change
    }
}
void main()
{
  float cgpa=0;
  char ch;   // change
  for (int i=0; i<6; i++)
  {
      scanf("\n%c",&ch); // change
      cgpa += calculate(ch);
  }
  cgpa/=6;
  printf("\n%f",cgpa); // change
}
