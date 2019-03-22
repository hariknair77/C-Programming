# include <stdio.h>
# include <stdlib.h>
void main()
{
char st1[10],st2[10],new[20],*s1,*s2;
int i=0;
printf("Enter the first string: ");
fgets(st1,10,stdin);
printf("Enter the second string: ");
fgets(st2,10,stdin);
s1=&st1[0],s2=&st2[0];

for(;st1[i]!='\0' && st2[i]!='\0';i++,*s1++,*s2++)
    if (*s1!=*s2)
    {
        printf("The Two strings are not Equal ");
        exit(0);
    }
printf("The Two strings are Equal ");
}

