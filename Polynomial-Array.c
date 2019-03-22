# include <stdio.h>
# define MAX(m,n) (m>n?m:n)
void multiply(int A[],int B[],int m,int n)
{
int i,j,o,prod[10];
o=m+n;
for(i=0;i<=o;i++)
        prod[i]=0;

printf("\nEnter the First Polynomial details\n");
printf("Enter Constant Coefficient :");
scanf ("%d",&A[0]);
for(i=1;i<=m;i++)
{
    printf("Enter Coefficient of (x^%d):",i);
    scanf ("%d",&A[i]);
}
printf("\n\nEnter the Second Polynomial details\n");
printf("Enter Constant Coefficient :");
scanf ("%d",&B[0]);
for(i=1;i<=n;i++)
{
    printf("Enter Coefficient of (x^%d):",i);
    scanf ("%d",&B[i]);
}
for(i=0;i<=m;i++)
    for (j=0;j<=n;j++)
            prod[i+j]+=(A[i]*B[j]);

for(i=o;i>0;i--)
    printf (" %d(x^%d) +",prod[i],i);
printf(" %d", prod[0]);
}

void add(int A[],int B[],int m,int n)
{
int i,j,o,Sum[10];
o=MAX(m,n);
for(i=0;i<=o;i++)
        A[i]=0,B[i]=0,Sum[i]=0;

printf("\nEnter the First Polynomial details\n");
printf("Enter Constant Coefficient :");
scanf ("%d",&A[0]);
for(i=1;i<=m;i++)
{
    printf("Enter Coefficient of (x^%d):",i);
    scanf ("%d",&A[i]);
}
printf("\n\nEnter the Second Polynomial details\n");
printf("Enter Constant Coefficient :");
scanf ("%d",&B[0]);
for(i=1;i<=n;i++)
{
    printf("Enter Coefficient of (x^%d):",i);
    scanf ("%d",&B[i]);
}
for(i=0;i<=o;i++)
    Sum[i]=A[i]+B[i];
for(i=o;i>0;i--)
    printf (" %d(x^%d) +",Sum[i],i);
printf(" %d", Sum[0]);
}
void main()
{
    int m,n,A[10],B[10];
    printf("Enter the Order of first polynomial : ");
    scanf ("%d",&m);
    printf("Enter the Order of Second polynomial : ");
    scanf ("%d",&n);
    int ch;
    printf("1. ADDITION\n2. MULTIPLICATION\nEnter your choice: ");
    scanf("%d",&ch);
    if (ch==1)
        add(A,B,m,n);
    else
        multiply(A,B,m,n);
}
