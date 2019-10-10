# include <stdio.h>
# include <stdlib.h>

enum grade { F, P = 4, E, D, C, B, A, O};

int calculate(char ch)
{
    switch (ch)
    {
      case 'F' : printf ("You Failed");
                 exit(0);
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
                 exit(0);
    }
}
void main()
{
  float cgpa=0.0;
  char ch;
  for (int i=0; i<6; i++)
  {
      scanf("\n%c",&ch);
      cgpa += calculate(ch);
  }
  cgpa/=6;
  printf("\n%f",cgpa);
}
