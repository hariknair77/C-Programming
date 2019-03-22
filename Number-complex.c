# include <stdio.h>
void main()
{
struct complex
{
float a;
float b;
}c1,c2;
printf("Enter the real and imaginary part of 1st complex number:\n");
scanf("%f %f",&c1.a,&c1.b);
printf("Enter the real and imaginary part of 2nd complex number:\n");
scanf("%f %f",&c2.a,&c2.b);
printf("The complex numbers are\n %.2f+i%.2f and %.2f+i%.2f",c1.a,c1.b,c2.a,c2.b);
printf("\nThe Sum of the two complex numbers is %.2f+i%.2f",(c1.a+c2.a),(c2.b+c1.b));
printf("\nThe subtracted value of the two complex numbers is %.2f+i%.2f",(c1.a-c2.a),(c2.b-c1.b));
printf("\nThe product of the two complex numbers is %.2f+i%.2f\n",((c1.a*c2.a)-(c1.b*c2.b)),((c2.b*c1.a)+(c2.b*c1.a)));
}
