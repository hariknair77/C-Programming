// Find the length and reverse of a string using pointers
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int length(char * s)
{
  int l = 0;
  char * t = s[l];
  while (*t++ != '\0')
     l ++;
  return l;
}

char* reverse(char * s)
{
    int l = length(s);
    char * rev = malloc(strlen(s));
    char * p = rev;
    char * q = s[l];

    while(l  > 0)
    {
        *p++ = *q--;
        l --;
    }

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
