# include <stdio.h>
# include <stdlib.h>

struct node
{
int data;
struct node *next;
struct node *prev;
}*head;

void Insertion(int ch)
{
    printf("Enter the node value to be entered: ");
    struct node *p=(struct node*) malloc(sizeof(struct node));
    scanf("%d",&(p->data));
    struct node *tmp;
    int key=-1;
    if(ch==3)
	{
	    printf("\nEnter the key :");
	    scanf("%d",&key);
	}
    if (head==NULL || ch==1)
    {
        p->next=head;
        p->prev=NULL;
	if (head!=NULL)
		head->prev=p;
        head=p;
    }
    else
    {
        tmp=head;
        while (tmp->next!=NULL && tmp->data!=key)
            tmp=tmp->next;
        p->next=tmp->next;
	p->prev=tmp;
	if (tmp->next!=NULL)
		(tmp->next)->prev=p;
        tmp->next=p;
    }
}

void deletion(int ch)
{
    int key=-1;
    if(head!=NULL)
    {
        struct node *tmp,*t2;
	tmp=head;
	if(ch==6)
	{
	    printf("\nEnter the key :");
	    scanf("%d",&key);
	}
	if (tmp->next==NULL || ch==4)
	{	if (tmp->next!=NULL)
			tmp->next->prev=NULL;
		head=tmp->next;
		free(tmp);
	}
	else
        {
		t2=(tmp->next);
		while((t2->next)!=NULL && (t2->data)!=key)
		{	t2=t2->next;
			tmp=tmp->next;
		}
		if ((t2->next)!=NULL)
			tmp->prev=t2;
		tmp->next=(t2->next);
        	free(t2);
    	}
    }
}
void display()
{
	if(head==NULL)
		printf("Empty Linked List..");
	else
	{
	struct node *tmp=head;
	printf("\nLinked List : ");
	for (;tmp!=NULL;tmp=tmp->next)
		printf("%d ",tmp->data);
	}
}

void main()
{
int ch;
struct node *head=NULL;
L:
printf("1. Insertion at beginning\n2. Insertion at End\n3. Insertion at key \n4. Deletion at beginning\n5. Deletion at End\n6.Deletion at key\n7.Display\n Enter the choice: ");
scanf("%d",&ch);
switch(ch)
{
	case 1:
	case 2:
	case 3:	Insertion(ch);
		break;
	case 4:
	case 5:
	case 6: deletion(ch);
		break;
	case 7: break;
	default:printf("Wrong Choice");
}
display();

printf("\n\nEnter 1 for Re-Enter :");
scanf("%d",&ch);
if (ch==1)
	goto L;
}

