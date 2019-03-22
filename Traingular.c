# include <stdio.h>
void main()
{
int n,val,i,j;
printf("Enter a limit: ");
scanf("%d",&n);

printf("The Triangular Sum till %d are \n",n);
for (i=1;i<=n;i++)
{	val=0;
	for (j=1;j<=i;j++)
		val+=j;
	printf("%d\n",val);
}
}
