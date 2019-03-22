# include <stdlib.h>
# include <stdio.h>
struct node
{
	int data;
	struct node *lt;
	struct node *rt;
}*root=NULL;

void insert(struct node **ptr, int c)
{
        int ch;
        struct node *p= (struct node*)malloc(sizeof(struct node));
        printf("Enter the Node value: ");
        scanf("%d",&(p->data));
        p->rt=NULL;
        p->lt=NULL;
        if(c==0)
            *ptr=p;
        else if(c==1)
            (*ptr)->lt=p;
        else
            (*ptr)->rt=p;
        printf("\nEnter 1 if there is a LEFT child of node %d: ",(p->data));
        scanf("%d" ,&ch);
        if(ch==1)
         {
             insert(ptr,1);
             (*ptr)=(*ptr)->lt;
         }
        printf("\nEnter 1 if there is a RIGHT child of node %d: ",(p->data));
        scanf("%d" ,&ch);
        if(ch==1)
        {
            insert(ptr,2);
            (*ptr)=(*ptr)->rt;
        }
}
void preR(struct node *ptr)
{
	if(ptr!=NULL)
	{	printf("%d  ",(ptr->data));
		preR(ptr->lt);
		preR(ptr->rt);
}}
void inR(struct node *ptr)
{
	if(ptr!=NULL)
	{	inR(ptr->lt);
		printf("%d  ",(ptr->data));
		inR(ptr->rt);
}}
void postR(struct node *ptr)
{
	if(ptr!=NULL)
	{	postR(ptr->lt);
		postR(ptr->rt);
		printf("%d  ",(ptr->data));
}}
void main()
{
int ch,n;

/*printf("Enter the number of nodes ");
scanf("%d",&n);
for (int i=0;i<n;i++)
	insertion();*/
insert(&root,0);
printf("\n1.Pre-Order Printing\n2.In-Order Printing\n3.Post-Order Printing\nEnte r your Choice: ");
scanf("%d",&ch);
/*switch(ch)
{
	case 1: preR(root);
		break;
	case 2: inR(root);
		break;
	case 3: postR(root);
		break;
	default:printf("Wrong Choice:");
}*/
    printf("\nPRE :   ");
    preR(root);
    printf("\nIN  :   ");
    inR(root);
    printf("\nPOST:   ");
    postR(root);

}








/*
struct queue
{
struct node *data[10];
};
struct queue q;
int f=-1;
int r=-1;

void enqueue(struct node *val)
{
        if (f==-1 && r==-1)
         {
                f=0;
                r=0;
         }
        else r++;
        q.data[r]=val;
}
struct node* dequeue()
{
     if (r==-1 && r==-1)
		return NULL;
    else
    {
        return (q.data[(f)]);
        if (f==r)
        {
            f=-1;
            r=-1;
        }
        else
            f++;
    }
}

void insertion()
{
	enqueue(root);
	printf("%d %d",f,r);
	while(f==r)
	{
		struct node *ptr=dequeue();
		printf("%p\n",ptr);
		if(ptr->lt==NULL || ptr->rt==NULL)
		{	struct node *p;
			printf("Enter the Node Value: ");
			scanf("%d",&(p->data));
			p->lt=NULL;
			p->rt=NULL;
			if(ptr->lt==NULL)
				ptr->lt=p;
			else
				ptr->rt=p;
		}
	}
}
*/
