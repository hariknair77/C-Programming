# include<stdio.h>
void main()
{
int tmp[50],a[50],n,t=0;
printf("Enter the size of the Array :");
scanf("%d",&n);
printf("Enter the Array elements : ");
for (int i=0;i<n;i++)
	scanf("%d",&a[i]);
printf("\nAll Repeated elements of the Array are \n\n");
for (int i=0;i<n;i++)
{
int flag=-1;
for(int j=0;j<t;j++)
	if (a[i]==tmp[j])
    {	flag=0;
		break;
	}
if (flag==-1)
{   int count=1;
    for (int j=i+1;j<n;j++)
        if (a[j]==a[i])     count++;
    if (count!=1)
    {   tmp[t]=a[i];
        t++;
        printf("The Number %d appears %d times.\n",a[i],count);
    }}}
printf("\nAll Unique elements of the Array are \n");
for (int i=0;i<n;i++)
{   int flag=-1;
    for(int j=0;j<t;j++)
        if (a[i]==tmp[j])
        {   flag=0;
            break;
        }
    if (flag==-1)
        printf("\t%d",a[i]);
}
printf("\n");
}
