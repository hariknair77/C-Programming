# include <stdio.h>
# include <math.h>
void main()
{
int a,b,c,val;
printf("Enter a number (0-9):");
scanf("%d",&a);
printf("Enter a number (0-9):");
scanf("%d",&b);
printf("Enter a number (0-9):");
scanf("%d",&c);
printf("The permutations are\n");
for (int i=0;i<3;i++)
{
for (int j=0;j<3;j++)
{
for (int k=0;k<3;k++)
{
	if (i!=j && i!=k && j!=k)
		{
		val=a*pow(10,i)+b*pow(10,j)+c*pow(10,k);
		printf("%d\n",val);
		}
}}}
printf("\n");	
}

