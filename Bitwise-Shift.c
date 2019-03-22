# include <stdio.h>

void main()
{
int a,b,n;
printf("Enter first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
printf("Resultant of BITWISE AND is %d\n",(a&b));
printf("Resultant of BITWISE OR is %d\n",(a|b));
printf("Resultant of BITWISE XOR is %d\n",(a^b));
printf("Resultant of BITWISE COMPLIMENT of a is %d\n",(~a));
printf("Resultant of BITWISE COMPLIMENT of b is %d\n",(~b));
printf("\nEnter shift position ");
scanf("%d",&n);
printf("Resultant of LEFT SHIFT by %d on %d is %d\n",n,a,(a<<n));
printf("Resultant of RIGHT SHIFT by %d on %d is %d\n",n,a,(a>>n));
printf("Resultant of LEFT SHIFT by %d on %d is %d\n",n,b,(b<<n));
printf("Resultant of RIGHT SHIFT by %d on %d is %d\n",n,b,(b>>n));
}
