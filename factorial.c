# include <stdio.h>
int fact(int n)
{
    if (n>1)
        return n*fact(n-1);
}
void main()
{
    int n,f=1.0;
    printf("Enter the Number: ");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial of %d = %d ",n,f);
}
