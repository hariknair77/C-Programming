# include <stdio.h>
void main()
{
int tmp,i,j,p,m,n,k,num,pos,A[10][3],T[10][3] ;
printf("Enter the Size of the Matrix \n Row :");
scanf("%d",&m);
printf("Col :");
scanf ("%d",&n);
printf("Enter the Matrix Elements \n");
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
printf("Sparse Matrix for Matrix \n");
for (i=0;i<=A[0][2];i++)
    {for (j=0;j<3;j++)
        printf("%d  ",A[i][j]);
    printf("\n");
    }
for (i=0;i<=A[0][2];i++)
{
        T[i][0]=A[i][1];
        T[i][1]=A[i][0];
        T[i][2]=A[i][2];
}

for (i=1;i<T[0][2];i++)
{
    for (j=i+1,pos=i;j<=T[0][2];j++)
        if((A[j][1]*10+A[j][0])<(A[i][1]*10+A[i][0]))
            pos=j;
    if (pos!=i)
    {
        for (k=0;k<3;k++)
        {
        tmp=T[i][k];
        T[i][k]=T[pos][k];
        T[pos][k]=tmp;
        }
    }
}
printf("Transpose of the Sparse Matrix\n");
for (i=0;i<=T[0][2];i++)
    {for (j=0;j<3;j++)
        printf("%d  ",T[i][j]);
    printf("\n");
    }
}
