#include <stdio.h>
void main()
{
    int n,sum=0,a[50],*p;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the array Elements\n");
    for (p=&a,i=0;i<n;i++,*p++)
    {
        scanf("%d",p);
        sum+=*p;
    }
    printf ("The Mean of the numbers are %.2f\n",((float)sum/n));
}
