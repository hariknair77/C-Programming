# include <stdio.h>
int m=0;
int cpm=0;
void merge(float A[],int beg, int mid,int end)
{
	int n1,n2,i,j,k;
	float L[10],R[10];
	n1=mid-beg+1;
	n2=end-mid;
	for (i=0;i<n1;i++)	L[i]=A[i+beg];
	for (i=0;i<n2;i++)	R[i]=A[i+mid+1];
	i=0,j=0,k=beg;
	for(;i<n1&&j<n2;k++,cpm++)
	{
		if (L[i]<=R[j])
		{
			A[k]=L[i];
			i++;
		}
		else
		{
			A[k]=R[j];
			j++;
		}
	}
	for (;i<n1;i++,k++)	A[k]=L[i];
	for (;j<n2;j++,k++)	A[k]=R[j];
	m++;
}
void MergeSortI(float A[],int n)
{
int beg,s;
for(s=1;s<n;s*=2)
	for (beg=0;beg<n;beg+=(2*s))
		merge (A,beg,beg+s-1,(((beg+(2*s)-1)<n)?(beg+(2*s)-1):n));
}

void MergeSortR(float A[],int beg,int end)
{
int mid;
	if(beg<end)
	{
	mid=(beg+end)/2;
	MergeSortR(A,beg,mid);
	MergeSortR(A,mid+1,end);
	merge(A,beg,mid,end);
	}

}

void main()
{
int i,ch,n;
float A[20];
printf("Enter the Size of the Array :");
scanf ("%d",&n);
printf("Enter the Elements of the Array\n");
for (i=0;i<n;i++)
	scanf("%f",&A[i]);
printf("\n1.Recursive Merge Sort\n2.Iterative Merge Sort\nEnter your choice: ");
scanf("%d",&ch);
if (ch==2)
	MergeSortI(A,n);
else MergeSortR(A,0,n-1);
printf("\nThe Elements of the Sorted Array\n");
for (i=0;i<n;i++)
	printf("%f  ",(float)A[i]);
printf("\nNo of Comparison: %d",cpm);
printf("\nNo of Mergings  : %d\n",m);
}

