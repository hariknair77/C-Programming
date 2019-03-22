# include <stdio.h>
void main()
{
int i,j,n,c=0;
float A[20],key;
printf("Enter the Size of the Array :");
scanf ("%d",&n);
printf("Enter the Elements of the Array\n");
for (i=0;i<n;i++)
	scanf("%f",&A[i]);

for (i=1;i<n;i++)
{
	for(j=i-1,key=A[i];A[j]>key && j>=0; j--)
		A[j+1]=A[j];
	A[j+1]=key;
	c++;
}
printf("Elements of Sorted Array\n");
for (i=0;i<n;i++)
	printf("%f   ",A[i]);
printf("No of Shifting: %d\n",c);
}
