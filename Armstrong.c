# include <stdio.h>
# include <math.h>
void main()
{
int num,sum=0,tmp,d=0;
printf("Enter a number: ");
scanf("%d",&num);
tmp=num;

while (tmp>0)
{
	d++;
	tmp/=10;
}
tmp=num;
while (tmp>0)
{	
	sum=sum+pow(tmp%10,d);
	tmp/=10;
}
if (num==sum)
printf("The Number %d is a Armstrong Number.\n",num);
else
printf("The Number %d is not Armstrong Number.\n",num);

}
