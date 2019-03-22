# include <stdio.h>
void main()
{
char ch;
int asc;
printf("Enter a character : ");
scanf("%c",&ch);
asc=(int)ch;
printf("%d",r);
if (asc<91 && asc>64)
	printf("The character %c is a Upper Case Letter",ch);
else if (asc<123 && asc>96)
	printf("The character %c is a Lower Case Letter",ch);
else if (asc<58 && asc>47)
	printf("The character %c is a Digit",ch);
else if (asc<128 && asc>0)
	printf("The character %c is a Special Character",ch);
}
