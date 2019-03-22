# include <stdio.h>
# include <stdlib.h>
void main()
{
    int a[10][10],b[10][10],sum[10][10];
    printf("Enter no of rows of the Matrix ");
    scanf("%d",&m);
    printf("Enter no of columns of the Matrix ");
    scanf("%d",&n);
    printf("Enter the Matrix A elements ");
    for (int i=0;i<m;i++)
        for (int j=0;i<n;j++)
            scanf("%d",&a[i][j]);
    printf("Enter the Matrix B elements ");
    for (int i=0;i<m;i++)
     {
         for (int j=0;i<n;j++)
           {
             scanf("%d",&b[i][j]);
             sum[i][j]=a[i][j]+b[i][j];
           }
    }
    printf("Sum Matrix elements ");
    for (int i=0;i<m;i++)
        for (int j=0;i<n;j++)
            printf("%d",sum[i][j]);
}
