# include <stdio.h>
# include <stdlib.h>

struct node
{
int data;
struct node *next;
}*last=NULL;

void InsertionBeg()
{
    struct node *p=(struct node*) malloc(sizeof(struct node));
    printf("Enter the node value to be entered: ");
    scanf("%d",&(p->data));
    if (last==NULL)
    {
        p->next=p;
        last=p;
    }
    else
    {
        p->next=last->next;
        last->next=p;
    }
}

void InsertionEnd()
{
    struct node *p=(struct node*) malloc(sizeof(struct node));
    printf("Enter the node value to be entered: ");
    scanf("%d",&(p->data));
    if (last==NULL)
    {
        p->next=p;
        last=p;
    }
    else
    {
        p->next=last->next;
        last->next=p;
        last=p;
    }
}

void InsertionKey()
{
    if (last!=NULL)
    {
        int key;
        printf("\nEnter the key :");
        scanf("%d",&key);
        struct node *tmp=(struct node*)malloc(sizeof(struct node));
        tmp=last;
        while(tmp->data!=key && tmp->next!=last)
            tmp=tmp->next;
        if(tmp->data ==key)
        {
                struct node *p=(struct node*) malloc(sizeof(struct node));
                printf("Enter the node value to be entered: ");
                scanf("%d",&(p->data));
                p->next=tmp->next;
                tmp->next=p;
        }
    }
}
void deletionBeg()
{
    if(last==NULL)
        printf("Empty..");
    else if (last->next==last)
    {
        free (last->next);
        last=NULL;
    }
    else
    {
        struct node *tmp;
        tmp=last->next;
        last->next=tmp->next;
    }
}
void deletionEnd()
{
    if(last==NULL)
        printf("Empty..");
    else if (last->next==last)
    {
        free (last->next);
        last=NULL;
    }
    else
    {
        struct node *ptr=last->next;
        while(ptr->next!=last)
            ptr=ptr->next;

        ptr->next=last->next;
        free(last);
        last=ptr;
    }
}
void deletionKey()
{
    if(last==NULL)
        printf("Empty..");
    else if (last->next==last)
    {
        free (last->next);
        last=NULL;
    }
    else
    {
        int key;
        printf("\nEnter the key :");
        scanf("%d",&key);
        struct node *tmp=last,*ptr;
        for(;tmp->next!=NULL && tmp->next->next!=last && tmp->next->data!=key;tmp=tmp->next);
        if (tmp->next!=last);
        {
        ptr=tmp->next;
        tmp->next=tmp->next->next;
        }
    }
}
void display()
{
	if(last==NULL)
		printf("Empty Linked List..");
	else
	{
	struct node *tmp=last->next;
	printf("\nLinked List : ");

    do {printf("%d ",tmp->data);
		tmp=tmp->next;
	}while (tmp!=(last->next));
}}
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

