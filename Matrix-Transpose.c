#include <stdio.h>
void transpose(int a[10][10],int m,int n)
{
int b[10][10];
for (int i=0;i<m;i++)
    for (int j=0;j<n;j++)
        b[j][i]=a[i][j];
printf("The Transpose Matrix is \n");
for (int i=0;i<n;i++)
{   for (int j=0;j<m;j++)
        printf("%d\t",b[i][j]);
	printf("\n");
}}
void main()
{
int a[10][10],m,n;
printf("Enter the Row Width of the Matrix ");
scanf("%d",&m);
printf("Enter the column Width of the Matrix ");
scanf("%d",&n);
printf("Enter the array elements\n");
for (int i=0;i<m;i++)
    for (int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
transpose(a,m,n);
}
