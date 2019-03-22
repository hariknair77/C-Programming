# include <stdio.h>
void main()
{
int A[20],i,j,n,s=0,c=0,tmp,pos;
printf("Enter the Size of the Array :");
scanf ("%d",&n);
printf("Enter the Elements of the Array\n");
for (i=0;i<n;i++)
	scanf("%d",&A[i]);
for (i=0;i<n;i++)
{
	for(pos=i,j=i+1;j<n;j++,c++)
		if (A[j]<A[pos])
			pos=j;
	if (pos!=i)
	{
		tmp=A[pos];
		A[pos]=A[i];
		A[i]=tmp;
		s++;
	}
}
printf("The Sorted Array \n");
for (i=0;i<n;i++)
	printf("%d   ",A[i]);
printf("\nNo of Comparison :%d",c);
printf("\nNo of Swappings  :%d\n",s);
}
