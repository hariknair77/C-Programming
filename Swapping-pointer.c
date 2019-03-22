# include <stdio.h>

void swap(int *a,int *b)
{
int *t=a;
a=b;
b=t;
printf("\nThe values After Swaping are a=%d and b=%d.\n",*a,*b);
}
void main()
{
int a,b;
printf("Enter the first element : ");
scanf("%d",&a);
printf("Enter the second element : ");
scanf("%d",&b);
printf("The values before Swaping are a=%d and b=%d.",a,b);
swap(&a,&b);
}
