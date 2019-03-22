# include <stdio.h>
struct queue
{
int data[10];
int f;
int r;
};
void enqueue(struct queue *q,int size)
{
    int value;

    if ((q->f == 0 && q->r == size-1)|| q->f==(q->r+1))
        printf("\nQueue is Full");
    else
    {
    printf("Enter the value to be Added: ");
    scanf("%d",&value);
    if (q->f == -1)
    {
        q->f =0;
        q->r = 0;
    }
    else if (q->r == (size-1) && q->f != 0)
        q->r = 0;
    else
        ++q->r;
    (q->data)[q->r] = value;
    }
}
void dequeue(struct queue *q,int size)
{
    if (q->f == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("Dequeued Element: %d",(q->data)[q->f]);
    (q->data)[q->f]=-1;
    if (q->f == q->r)
    {
        q->f = -1;
        q->r = -1;
    }
    else if (q->f == size-1)
        q->f = 0;
    else
        q->f++;
}
void display(struct queue *q,int n)
{
    if (q->f == -1)
        printf("\nQueue is Empty");
    else
    {
    printf("\nThe Queue is : ");
    for(int i=0;i<n;i++)
    {
        if (q->data[i]==-1)
            printf("_ ");
        else
            printf("%d ",q->data[i]);
    }
}}
void main()
{
int n,ch;
struct queue q;
q.f=-1;
q.r=-1;
printf("Enter the size of the Queue: ");
scanf("%d",&n);
for (int i=0;i<n;i++)
    q.data[i]=-1;
L:
	printf("1.Enqueue\n2.Dequeue\nEnter your choice: ");
	scanf("%d",&ch);

	if (ch==1)
		enqueue(&q,n);
	else if(ch==2)
		dequeue(&q,n);
    display(&q,n);
	printf("\n\nEnter 1 for Re-entry");
	scanf("%d",&ch);
	if (ch==1)
		goto L;
}
