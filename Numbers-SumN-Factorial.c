# include<stdio.h>
int sumN(int n)
{
	while(n>0)
		return n+sumN(n-1);
}
int f(int n)
{	while (n>1)
		return n*f(n-1);
}
void main()
{
int n,ch;
printf("Enter a number : ");
scanf("%d",&n);
printf("The sum to %d natural numbers is %d",n,sumN(n));
printf("\nThe factorial of %d is %d\n",n,f(n));
}

