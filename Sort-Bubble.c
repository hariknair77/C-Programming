# include <stdio.h>
void BubbleMod(int A[],int n)
{
int i,j,tmp,s=0,flg=0,c=0;
for (i=0;i<n && flg==0;i++)
	{
	flg=-1;
	for (j=0;j<n-i-1;j++)
	{ if (A[j]>A[j+1])
		{
		tmp=A[j];
		A[j]=A[j+1];
		A[j+1]=tmp;
		flg=0;
		s++;
		}
	c++;
	}
	}
printf("\nThe Elements of the Sorted Array\n");
for (i=0;i<n;i++)
	printf("%d  ",A[i]);
printf("\nNo of Comparison: %d",c);
printf("\nNo of Swappings : %d\n",s);
}
void BubbleUn(int A[],int n)
{
int i,j,tmp,s=0,c=0;
for (i=0;i<n;i++)
	{
	for (j=0;j<n-i-1;j++)
	{ if (A[j]>A[j+1])
		{
		tmp=A[j];
		A[j]=A[j+1];
		A[j+1]=tmp;
		s++;
		}
	c++;
	}
	}
printf("\nThe Elements of the Sorted Array\n");
for (i=0;i<n;i++)
	printf("%d  ",A[i]);
printf("\nNo of Comparison: %d",c);
printf("\nNo of Swappings : %d\n",s);
}
void main()
{
int A[20],i,n;
printf("Enter the Size of the Array :");
scanf ("%d",&n);
printf("Enter the Elements of the Array\n");
for (i=0;i<n;i++)
	scanf("%d",&A[i]);
//BubbleMod (A,n);
BubbleUn (A,n);
}

