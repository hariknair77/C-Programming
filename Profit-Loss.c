# include <stdio.h>
void main()
{
int cp,sp;
float t;
printf("Enter a Cost Price ");
scanf("%d",&cp);
printf("Enter a Selling Price ");
scanf("%d",&sp);
t=(sp-cp)*100/cp;
if ((sp-cp)>0)
	printf("The Transaction has a Profit of %.2f Percent.",t);
else
	printf("The Transaction has a Loss of %.2f Percent.",(-t));
}
