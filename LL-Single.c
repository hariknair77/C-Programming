# include <stdio.h>
# include <stdlib.h>

struct node
{
int data;
struct node *next;
}*head;

void deletionKey()
{
   	if(head!=NULL)
    {
        int key;
        printf("\nEnter the key :");
	    scanf("%d",&key);
        struct node *t1,*t2;
        t1=head;
   		t2=(head->next);
		while((t2->next)!=NULL  && (t2->data)!=key)
		{	t2=t2->next;
			t1=t1->next;
		}
        if (t2->data==key)
        {
            t1->next=(t2->next);
            free(t2);
        }
        else printf("Key not present.");
        }
    else
        printf("Empty List");
}
void InsertionKey()
{
    struct node *p=(struct node*) malloc(sizeof(struct node));
    printf("Enter the node value to be entered: ");
    scanf("%d",&(p->data));
    struct node *tmp;
    int key=-1;
    printf("\nEnter the key :");
    scanf("%d",&key);
    tmp=head;
    while (tmp->next!=NULL && tmp->data!=key)
            tmp=tmp->next;
    if (tmp->data==key)
    {
        p->next=tmp->next;
        tmp->next=p;
    }
    else printf("Key not present.");
}


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
    printf("Enter the node value to be entered: ");
    scanf("%d",&(p->data));
    struct node *tmp=head;
    while (tmp->next!=NULL)
        tmp=tmp->next;
    p->next=NULL;
    tmp->next=p;

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
L:
printf("1. Insertion at beginning\n2. Insertion at End\n3. Insertion at key \n4. Deletion at beginning\n5. Deletion at End\n6.Deletion at key\n7.Display\n Enter the choice: ");
scanf("%d",&ch);
switch(ch)
{
	case 1:	InsertionBeg();
		break;
	case 2:	InsertionEnd();
		break;
	case 3:	InsertionKey();
		break;
	case 4: deletionBeg();
		break;
	case 5: deletionEnd();
		break;
	case 6: deletionKey();
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

