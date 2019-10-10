# include <stdio.h>
# include <string.h>
//create a string matrix of 1 to 9
void main()
{
  char str[3][3][10];
  int i,j;

  strcpy(str[0][0],"ONE");
  strcpy(str[0][1],"TWO");
  strcpy(str[0][2],"THREE");
  strcpy(str[1][0],"FOUR");
  strcpy(str[1][1],"FIVE");
  strcpy(str[1][2],"SIX");
  strcpy(str[2][0],"SEVEN");
  strcpy(str[2][1],"EIGHT");
  strcpy(str[2][2],"NINE");

  for (i=0;i<3;i++)
  {
     for (i=0;i<3;i++)
        printf("%s\t",str[i][j]);
      printf("\n");
  }
}
