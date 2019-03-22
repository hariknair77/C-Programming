# include <stdio.h>
void main()
{
int i=1, n;
long fact=1;
printf("Enter a number :");
scanf("%d",&n);
while (i<=n){
fact*=i;
i++;
}
printf("The Factorial of the number %d is %li.\n",n,fact);
}
