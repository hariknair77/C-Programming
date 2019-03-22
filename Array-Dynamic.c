# include <stdio.h>

void main()
{
int n,*num,sum=0,i;
printf("Enter a No of Numbers: ");
scanf("%d",&n);
num=(int*)malloc(n*sizeof(int));
printf("\nEnter the numbers:\n");
for(i=0;i<n;i++)
    {
    scanf("%d",num+i);
    sum+=*(num+i);
    }
printf("\nThe Sum =%d",sum);
}
