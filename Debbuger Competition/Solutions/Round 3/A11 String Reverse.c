
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int length(char * s)
{
  int l = 0;
  char * t = &s[l];   //change
  while (*t++ != '\0')
     l ++;
  return l;
}

char * reverse(char * s)
{
    int l = length(s) - 1;  //change
    char * rev = malloc(strlen(s) + 1); //change
    char * p = rev;
    char * q = &s[l];   //change

    while(l  > -1)    //change
    {
        *p++ = *q--;
        l --;
    }
    *p++ = '\0';  //change
    return rev;
}

void main()
{
  char *val = (char *) malloc(sizeof(char));
  printf("\nEnter a string: ");
  scanf ("%s",val);
  printf("\nLength of a string :%d",length(val));
  printf("\nReverse of a string :%s",reverse(val));
}
