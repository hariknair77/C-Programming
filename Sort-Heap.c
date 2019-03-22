# include <stdio.h>
void heapify (int A[],int n,int i)
{
    int large,left,right,tmp;
    large=i,left=2*i+1,right=2*i+2;
    if (left<n && A[left]>A[large])
        large=left;
    if (right<n && A[right]>A[large])
        large=right;
    if (large!=i)
    {
        tmp=A[i];
        A[i]=A[large];
        A[large]=tmp;
        heapify (A,n,large);
    }
}
void heapsort (int A[], int n)
{
    int i,tmp;
    for (i=n/2-1;i>=0;i--)
        heapify(A,n,i);
    for (i=n-1;i>=0;i--)
    {
        tmp=A[0];
        A[0]=A[i];
        A[i]=tmp;
        heapify(A,i,0);
    }
}
/*
int B[20];
void createheap(int A[])
{
    for (int i=0;i<n;i++)
    {
        for (B[i]=A[i],j=i;j>0;j/=2)
        {
            if (B[j]>B[j/2])
            {
                int tmp=B[j];
                B[j]=B[j/2];
                B[j/2]=tmp;
            }
            else
                break;
        }
    }
}
void remove (int A[])
{

}
void rebuild(int i)
{

}*/
void main()
{
int n,A[15],i;
printf("Enter the Size of the Array : ");
scanf("%d",&n);
printf("Enter the Array Elements \n");
for(i=0;i<n;i++)
    scanf("%d",&A[i]);
heapsort (A,n);
printf("The Sorted Array Elements are \n");
for(i=0;i<n;i++)
    printf("%d\n",A[i]);
}
