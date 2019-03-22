# include <stdio.h>
void main()
{
int n,a=0,b=1,i=3,sum;
printf("Enter the No of terms ");
scanf("%d",&n);
if (n>=2)
{
printf("0,1");
while (i<=n)
{
	sum=a+b;
	printf(",%d",sum);
	a=b;
	b=sum;
	i++;
}
}
else if (n==1)  printf("0");
else printf("Non Valid Entry...");
}
