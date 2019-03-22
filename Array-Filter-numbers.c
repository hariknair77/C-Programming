# include <stdio.h>
void main()
{
int a[50],even[50],odd[50],n,o=0,e=0;
printf("Enter the size of the Array :");
scanf("%d",&n);
printf("Enter the Array elements : ");
for (int i=0;i<n;i++)
	scanf("%d",&a[i]);
printf(" Array elements are \n");
for (int i=0;i<n;i++)
	printf("%d\t",a[i]);
for (int i=0;i<n;i++)
{   if (a[i]%2==0)
	{   even[e]=a[i];
		a[i]=0;
		e++;
	}
	else
	{	odd[o]=a[i];
		a[i]=1;
		o++;
	}
}
printf("\n\nArray elements of original array are \n");
for (int i=0;i<n;i++)
	printf("%d\t",a[i]);
printf(" \nArray elements are of Even Array are \n");
for (int i=0;i<e;i++)
	printf("%d\t",even[i]);
printf(" \nArray elements are of Odd Array are \n");
for (int i=0;i<o;i++)
	printf("%d\t",odd[i]);
}
