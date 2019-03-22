#include <stdio.h>
void main()
{
    int n,m,sum[10][10],a[10][10],b[10][10],*p1,*p2,i,j;
    printf("Enter the row and column size of elements: \n");
    scanf("%d%d",&m,&n);
    printf("Enter the 1st array elements\n");
    for (i=0;i<m;i++)
        for (j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("Enter the 2nd array elements\n");
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    for (i=0;i<m;i++)
    {
        for (j=0,p1=&a[i][0],p2=&b[i][0];j<n;j++,*p1++,*p2++)
        {
            sum[i][j]=*p1+*p2;
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}

