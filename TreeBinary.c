# include <stdio.h>
int tree[100];
int n=0;
void insert(int i,int *tree)
{
	int ch;
	printf("Enter the Node value: ");
	scanf("%d",(tree+i));
    if (*(2*i+1+tree)==-1)
    {
        printf("\nEnter 1 if there is a LEFT child of node %d: ",*(tree+i));
        scanf("%d" ,&ch);
        if(ch==1)
            {insert(2*i+1,tree);
            n=2*i+1;}
    }
    if (*(2*i+2+tree)==-1)
    {
        printf("\nEnter 1 if there is a RIGHT child of node %d: ",*(tree+i));
        scanf("%d" ,&ch);
        if(ch==1)
            {insert(2*i+2,tree);
            n=2*i+2;}
    }
}
void preR(int i,int *tree)
{
	if(*(tree+i)!=-1)
	{	printf("%d  ",*(tree+i));
		preR(2*i+1,tree);
		preR(2*i+2,tree);
}}
void inR(int i,int *tree)
{
	if(*(tree+i)!=-1)
	{
		inR(2*i+1,tree);
		printf("%d  ",*(tree+i));
		inR(2*i+2,tree);
}}
void postR(int i,int *tree)
{
	if(*(tree+i)!=-1)
	{
		postR(2*i+1,tree);
		postR(2*i+2,tree);
		printf("%d  ",*(tree+i));
}}

void main()
{
int ch,p,tree[100],n=0,i=0,j=0,pos;

for( p=0;p<100;p++)
	tree[p]=-1;

insert(1,tree);
printf("\n1.Insertion \n2.In-Order Printing\n3.Post-Order Printing\nEnte r your Choice: ");
scanf("%d",&ch);
printf("\n\n");

    switch(ch)
    {
        case 1: {
                    printf("Enter the node num");
                    scanf("%d",&pos);
                    insert(pos,tree);
                    break;
                }
        case 2: {
                    for (int i=0;i<p;i++)
                    {
                        printf("Enter the node value");
                        scanf("%d",&pos);
                        if (tree[i]==pos)
                        {
                           tree[i]=tree[n-1];
                           tree[n-1]=-1;
                        }
                    }
                }
            break;
        default:printf("Wrong Choice:");
    }
    printf("\nPRE :   ");
    preR(1,tree);
    printf("\nIN  :   ");
    inR(1,tree);
    printf("\nPOST:   ");
    postR(1,tree);

    printf("\nTree is\n");
    for(int k=0;k<100;k++)
        if(tree[k]!=-1)
            printf("%d  ",tree[k]);
}
