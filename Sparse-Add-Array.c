# include <stdio.h>
void main()
{
int i,j,p,m,n,k,num,A[10][3],B[10][3],S[20][3];
printf("Enter the Size of the Matrix \n Row :");
scanf("%d",&m);
printf("Col :");
scanf ("%d",&n);
printf("Enter the First Matrix Elements \n");
for (i=0,k=1;i<m;i++)
{
    for (j=0;j<n;j++)
    {
        scanf("%d",&num);
        if (num!=0)
        {
            A[k][0]=i;
            A[k][1]=j;
            A[k][2]=num;
            k++;
        }
    }
}
A[0][0]=m;
A[0][1]=n;
A[0][2]=--k;
printf("Sparse Matrix for First Matrix \n");
for (i=0;i<=A[0][2];i++)
    {for (j=0;j<3;j++)
        printf("%d  ",A[i][j]);
    printf("\n");
    }

printf("\n\nEnter the Second Matrix Elements \n");
for (i=0,k=1;i<m;i++)
{
    for (j=0;j<n;j++)
    {
        scanf("%d",&num);
        if (num!=0)
        {
            B[k][0]=i;
            B[k][1]=j;
            B[k][2]=num;
            k++;
        }
    }
}
B[0][0]=m;
B[0][1]=n;
B[0][2]=--k;
printf("Sparse Matrix for Second Matrix \n");
for (i=0;i<=B[0][2];i++)
    {for (j=0;j<3;j++)
        printf("%d  ",B[i][j]);
    printf("\n");
    }
i=1,j=1,k=1;
while (i<=A[0][2] || j<=B[0][2])
{
    printf("%d %d\n",i,j);
    if (A[i][0]<B[j][0])
    {
        for(p=0;p<3;p++)
            S[k][p]=A[i][p];
        k++,i++;
    }
    else if (A[i][0]>B[j][0])
    {
        for(p=0;p<3;p++)
            S[k][p]=B[j][p];
        k++,j++;
    }
    else
    {
        if (A[i][1]<B[j][1])
        {
            for(p=0;p<3;p++)
                S[k][p]=A[i][p];
            k++,i++;
        }
        else if (A[i][1]>B[j][1])
        {
            for(p=0;p<3;p++)
                S[k][p]=B[j][p];
            k++,j++;
        }
        else
        {
            S[k][0]=A[i][0];
            S[k][1]=A[i][1];
            S[k][2]=A[i][2]+B[j][2];
            k++,i++,j++;
        }
    }
}
S[0][0]=m;
S[0][1]=n;
S[0][2]=--k;
printf("\n\nSparse Matrix for Sum Matrix \n");
for (i=0;i<=S[0][2];i++)
    {for (j=0;j<3;j++)
        printf("%d  ",S[i][j]);
    printf("\n");
    }
}

