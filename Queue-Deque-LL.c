# include <stdio.h>
# include <stdlib.h>

int front=-1;
int rear=-1;
struct node
{
int data;
struct node *next;
}*head=NULL;
void InsertionBeg()
{
    struct node *p=(struct node*) malloc(sizeof(struct node));
    printf("Enter the node value to be entered: ");
    scanf("%d",&(p->data));
    p->next=head;
    head=p;
}
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
void deletionEnd()
{
   	if(head!=NULL)
    {
        struct node *t1,*t2;
        t1=head;
   		t2=head->next;
		while(t2!=NULL && (t2->next)!=NULL)
		{	t2=t2->next;
			t1=t1->next;
		}
		t1->next=(t2->next);
        free(t2);
    }
    else
        printf("Empty List");
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

void enqueueEND(int n)
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

void dequeueBEG()
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

void enqueueBEG(int n)
{
    if (rear==0)
        printf("Queue is full.");
    else
		{
            if (front==-1 && rear==-1)
            {
                front=0;
                rear=0;
            }
            else front--;
            InsertionBeg();
		}
}
void dequeueEND()
{
	if (rear==-1 && rear==-1)
		printf("Queue is Empty.");
    else
    {
        deletionEnd();
        if (front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
            rear--;
    }
}
void main()
{
int n,ch;
front=-1;
rear=-1;
printf("Enter the size of the Queue: ");
scanf("%d",&n);
L:
	printf("1.Enqueue at END\n2.Dequeue at BEG\n3.Enqueue at BEG\n4.Dequeue at END\nEnter your choice: ");
	scanf("%d",&ch);
	if (ch==1)
        enqueueEND(n);
	else if(ch==2)
        dequeueBEG();
    else if (ch==3)
        enqueueBEG(n);
	else if(ch==4)
        dequeueEND();
	else
        printf("\nWrong Choice...\n");
    display();
	printf("\n\nEnter 1 for Re-entry");
	scanf("%d",&ch);
	if (ch==1)
		goto L;
}
