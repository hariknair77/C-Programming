# include <stdio.h>
struct queue
{
int data[10];
int f;
int r;
}q;
void enqueue(int n)
{
    if (q.r==(n-1))
        printf("Queue is full.");
    else
		{
		    int val;
		    printf("Enter the Value: ");
            scanf("%d",&val);
            if (q.f==-1 && q.r==-1)
            {
                q.f=0;
                q.r=0;
            }
            else q.r++;
            q.data[q.r]=val;
		}
}
void dequeue()
{
	if (q.r==-1 && q.r==-1)
		printf("Queue is Empty.");
    else
    {
        printf("Dequeued Element is :%d\n",q.data[(q.f)]);
        if (q.f==q.r)
        {
            q.f=-1;
            q.r=-1;
        }
        else
            q.f++;
    }
}
void display()
{
    if (q.f==-1 && q.r==-1)
        printf("\nThe Queue is  Empty.\n");
    else
    {
        printf("\nThe Queue is  :");
        for(int j=0;j<=q.r;j++)
        {
        if(j<q.f)
            printf("_ ");
        else
            printf("%d ",q.data[j]);
        }
    }
}
void main()
{
int n,ch;
q.f=-1;
q.r=-1;
printf("Enter the size of the Queue: ");
scanf("%d",&n);
L:
	printf("1.Enqueue\n2.Dequeue\nEnter your choice: ");
	scanf("%d",&ch);
	if (ch==1)
        enqueue(n);
	else if(ch==2)
        dequeue();
	else
        printf("\nWrong Choice...\n");
    display();
	printf("\n\nEnter 1 for Re-entry");
	scanf("%d",&ch);
	if (ch==1)
		goto L;
}
