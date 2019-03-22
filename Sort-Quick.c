#include <stdio.h>
int c=0,s=0;
int partition(float A[],int beg,int end)
{
	int i,j;
	float pivot,tmp;
	for (i=beg,pivot=A[end],j=beg;j<end;j++,c++)
	{	if (A[j]<=pivot)
		{
			tmp=A[i];
			A[i]=A[j];
			A[j]=tmp;
			i++;
			s++;
		}
	}
	tmp=A[i];
	A[i]=A[end];
	A[end]=tmp;
	s++;
	return i;
}
void QuickSort(float A[],int beg,int end)
{
	if(beg<end)
	{
	int pi=partition(A,beg,end);
	QuickSort(A,beg,pi-1);
	QuickSort(A,pi+1,end);
	}
}
void main()
{
int i,n;
float A[20];
printf("Enter the Size of the Array :");
scanf ("%d",&n);
printf("Enter the Elements of the Array\n");
for (i=0;i<n;i++)
	scanf("%f",&A[i]);
QuickSort(A,0,n-1);
printf("\nThe Elements of the Sorted Array\n");
for (i=0;i<n;i++)
	printf("%f  ",A[i]);
printf("\nNo of Comparison: %d",c);
printf("\nNo of Swappings : %d\n",s);
}
