# include <stdio.h>
# include <stdlib.h>

void main()
{
char st1[10],st2[10],new[20],*s1,*s2;
int i,j;
printf("Enter the first string: ");
fgets(st1,10,stdin);
printf("Enter the second string: ");
fgets(st2,10,stdin);
s1=&st1[0],s2=&st2[0];
for(i=0;st1[i]!='\0';i++,*s1++)
    new[i]=*s1;
for(j=0;st2[j]!='\0';i++,j++,*s2++);
    new[i]=*s2;
printf("The new string is %s\n",new);
}

