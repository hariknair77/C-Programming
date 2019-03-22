# include "string.h"
# include <stdio.h>
void main()
{
char st1[10],st2[10],rev[10],*p;
int j;
printf("Enter a String : ");
fgets(st1,10,stdin);

printf("The Copied string is %s",st2);
for(p=&st1[0],j=0;j<(strlen(st1)-1);*p++,j++)
    {
	st2[j]=*p;
    printf("%c",st2[j]);
    }
printf("The Reverse String is ");
for(p=&st1[strlen(st1)-2],j=0;j<(strlen(st1)-1);*p--,j++)
    {
	rev[j]=*p;
    printf("%c",rev[j]);
    }
}
