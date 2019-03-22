# include <stdio.h>
# include <stdlib.h>
int front=-1;
int rear=-1;
struct node
{
int data;
struct node *next;
}*head=NULL;

void InsertionEnd()
{
    struct node *p=(struct node*) malloc(sizeof(struct node));
    printf("Enter the Value: ");
    scanf("%d",&(p->data));
    if(head==NULL)
    {
            p->next=NULL;
            head=p;
    }
    else
    {
        struct node *tmp=head;
        while (tmp->next!=NULL)
            tmp=tmp->next;
        p->next=NULL;
        tmp->next=p;
    }
}
void deletionBeg()
{
    if(head!=NULL)
    {
        struct node *tmp=head;
        head=head->next;
        free(tmp);
    }
    else
        printf("Empty List");
}

void enqueue(int n)
{
    if (rear==(n-1))
        printf("Queue is full.");
    else
		{
            if (front==-1 && rear==-1)
            {
                front=0;
                rear=0;
            }
            else rear++;
            InsertionEnd();
		}
}
void dequeue()
{
	if (rear==-1 && rear==-1)
		printf("Queue is Empty.");
    else
    {
        deletionBeg();
        if (front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
            front++;
    }
}
void display()
{
	if(head!=NULL)
	{
	struct node *tmp=head;
	printf("\nQUEUE : ");
	for (;tmp!=NULL;tmp=tmp->next)
		printf("%d ",tmp->data);
	}
	else
        printf("\nQueue is Empty..");
}

void main()
{
int n,ch;
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
