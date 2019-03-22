# include <stdio.h>
void add()
{
int m,n,a[10][10],b[10][10],sum[10][10];
printf("Enter the Row width of the matrices: ");
scanf("%d",&m);
printf("Enter the Column height of the matrices: ");
scanf("%d",&n);

printf("\nEnter the elements of the First Array\n");
for (int i=0;i<m;i++)
	for (int j=0;j<n;j++)
	{      printf("Enter the element: ");
           scanf("%d",&a[i][j]);
	}
printf("\nEnter the elements of the Second Array\n");
for (int i=0;i<m;i++)
	for (int j=0;j<n;j++)
	{   printf("Enter the element: ");
        scanf("%d",&b[i][j]);
	}
printf("\nThe Addition Matrix is\n");
for (int i=0;i<m;i++)
    {
	for (int j=0;j<n;j++)
		{sum[i][j]=a[i][j]+b[i][j];
		 printf("%d  ",sum[i][j]);
		}
	printf("\n");
    }
printf("\n");
}
//---------------------------------
void multiply()
{
int m1,n1,m2,n2,a[10][10],b[10][10],prod[10][10];
printf("Enter the Row width of the first matrix: ");
scanf("%d",&m1);
printf("Enter the Column height of first matrix: ");
scanf("%d",&n1);

printf("Enter the elements of the First Array\n");
for (int i=0;i<m1;i++)
	for (int j=0;j<n1;j++)
	{printf("Enter the element: ");
	 scanf("%d",&a[i][j]);
	}

printf("Enter the Row width of the second matrix: ");
scanf("%d",&m2);
printf("Enter the Column height of second matrix: ");
scanf("%d",&n2);
printf("Enter the elements of the Second Array\n");
for (int i=0;i<m2;i++)
	for (int j=0;j<n2;j++)
	{printf("Enter the element: ");
	 scanf("%d",&b[i][j]);
	}
if (n1==m2)
{
printf("The Product Matrix is\n");
for (int i=0;i<m1;i++)
	{for (int j=0;j<n2;j++)
	{
	prod[i][j]=0;
	for (int k=0;k<n1;k++)
        prod[i][j]+=a[i][k]*b[k][j];
	printf("%d  ",prod[i][j]);
	}
	printf("\n");
	}
}
else
    printf("The matrix are not compatible for multiplication\n");
}
void main()
{
int ch;
printf("Enter a choice\n 1.Addition of two matrices\n2.Multiplication of two matrices\n:");
scanf("%d",&ch);
if (ch==1)  add();
else if (ch==2)     multiply();
else        printf("Wrong Entry...");
}
