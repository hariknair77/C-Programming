#include <stdio.h>
void main()
{
    int n,a[10],sum=0;
    printf("Enter the Size: ");
    scanf("%d",&n);
    printf("Enter the Array elements:\n");
    for (int i=0;i<n;sum+=a[i],i++)
        scanf("%d",&a[i]);

    printf("Sum of Array elements  = %d ",sum);
}
