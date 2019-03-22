# include <stdio.h>
void Linear(int A[],int n,int el)
{	int j=0,pos=-1;
	for (j=0;j<n;j++)
	{	if (A[j]==el)
		{	printf("%d\n",(j+1));
			pos=j;
	}	}
if (pos==-1)
	printf("Element not Found ");
else printf("Element found at above locations.");
printf("\n\n No of Comparisons: %d\n",--j);
}
void Binary(int A[],int n,int el)
{
	int beg,mid,c=0,end,pos;
	beg=0;
	end=n-1;
	while(beg<=end)
	{	c++;
		mid=beg+(end-beg)/2;
		if (A[mid]>el)
			end=mid-1;
		else if (A[mid]<el)
			beg=mid+1;
		else
		{
			pos=mid;
			printf("%d\n",(pos+1));
			for (pos-=1;A[pos]==el && pos>0;pos--)
				printf("%d\n",(pos+1));
			for (pos=mid+1;A[pos]==el && pos<n;pos++)
				printf("%d\n",(pos+1));
			break;
		}
	}
if (pos==-1)
	printf("Element not Found ");
else printf("Element found at Above locations.");
printf("\n\n No of Comparisons: %d\n",c);
}

void main()
{
int A[20],i,n,el,ch,pos;
printf("Enter the Size of the Array :");
scanf ("%d",&n);
printf("Enter the Elements of the Array\n");
for (i=0;i<n;i++)
	scanf("%d",&A[i]);
printf("Enter the Search Element: ");
scanf ("%d",&el);
printf("1. Linear Search\n2.Binary Search\nEnter the Choice: ");
scanf("%d",&ch);
if (ch==1)
	Linear(A,n,el);
else if (ch==2)
	Binary(A,n,el);
else printf("Wrong Choice : ");

}

