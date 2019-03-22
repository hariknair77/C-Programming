# include <stdio.h>
# include <stdlib.h>
void main()
{
int m,n,a[10][10],t=-1;
printf("Enter the width of the square matrix: ");
scanf("%d",&n);
printf("Enter the elements of the Matrix\n");
for (int i=0;i<n;i++)
	for (int j=0;j<n;j++)
	{   printf("Enter the element: ");
        scanf("%d",&a[i][j]);
	}
printf("The Matrix is \n");
for (int i=0;i<n;i++)
{   for (int j=0;j<n;j++)
	printf("%d\t",a[i][j]);
	printf("\n");
}
for (int i=0;i<n;i++)
	for (int j=0;j<n;j++)
		if (a[i][j]!=a[j][i])
		{	t=1;
			break;
		}
if (t=-1)   printf("\nThe Matrix is Symmetrical ");
else    printf("\nThe Matrix is not Symmetrical ");
}
