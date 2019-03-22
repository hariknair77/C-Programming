# include <stdio.h>
# include <stdlib.h>
void main()
{
int a[50],n,tmp,beg=0;
printf("Enter the Size of the Array ");
scanf("%d",&n);
printf("Enter the Array elements ");
for (int i=0;i<n;i++)
	scanf("%d",&a[i]);
int end=n-1;
for (int i=0;i<=end;i++)
{
if (a[i]==0)
    {   tmp=a[i];
        a[i]=a[beg];
        a[beg]=tmp;
        beg++;
    }
else if (a[i]==1)
    {   tmp=a[i];
        a[i]=a[end];
        a[end]=tmp;
        end--;
    }
else
    {   printf("Invalid Entry ....");
        exit(0);
}}
printf("The Array elements are ");
for (int i=0;i<n;i++)
	printf("%d\n",a[i]);
printf("\n");
}
