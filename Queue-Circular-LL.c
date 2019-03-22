# include <stdio.h>
# include <stdlib.h>

int front=-1;
int rear=-1;

struct node
{
int data;
struct node *next;
}*head=NULL,*start;

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
/*
void deletionPos(int pos)
{
    int i;
   	if(head!=NULL)
    {
        struct node *tmp=head;
		for(i=0; tmp!=NULL  ; tmp=tmp->next, i++ )
        {
            printf("\n%d  %d",pos,i);
            if (i==pos)
                {
                    if (tmp==NULL || tmp->next==NULL)
                        return;
                    //tmp->next=(tmp->next)->next;
                }
            else printf("Key not present.");
        }
    }
    else
        printf("Empty List");
}*/

void deletionBeg()
{
    if(start!=NULL)
    {
        struct node *tmp=start;
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

void enqueue(int size)
{
    int value;

    if ((front == 0 && rear == size-1)|| front==(rear+1))
        printf("\nQueue is Full");
    else
    {
    if (front == -1)
    {
        front =0;
        rear = 0;
        InsertionBeg();
    }
    else if (rear == (size-1) && front != 0)
        {rear = 0;
        InsertionBeg();
        }
    else
        {++rear;
         InsertionEnd();
        }
    }
}
void dequeue(int size)
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    if (front<=rear)
        deletionBeg();
    else
        deletionEnd();
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == size-1)
        front = 0;
    else
        front++;
}

void main()
{
int n,ch,flg=1;
printf("Enter the size of the Queue: ");
scanf("%d",&n);
L:
	printf("1.Enqueue\n2.Dequeue\nEnter your choice: ");
	scanf("%d",&ch);

	if (ch==1)
    {
        enqueue(n);
        if (flg==1)
        {   start=head;
            flg=0;
        }
    }

	else if(ch==2)
		dequeue(n);
    display();
	printf("\n\nEnter 1 for Re-entry");
	scanf("%d",&ch);
	if (ch==1)
		goto L;
}
