
# include <stdio.h>
# include <stdlib.h>
struct node
{
int data;
struct node *next;
};
void main()
{
    int n;
    printf("Enter the No of Vertices: ");
    scanf("%d",&n);
    //struct node *vert=(struct node*) malloc (n*sizeof(struct node));
    struct node *vert[10];
    for (int i=0;i<n;i++) vert[i]=NULL;
    for (int i=0;i<n;i++)
    {
        for (int j=0,ch=0;j<n;j++)
        {
            int adj;
            printf("\nEnter the Vertex Connected to vertex %d:",i+1);
            scanf("%d",&adj);
            if(adj<=n)
            {
                struct node *p1=(struct node*) malloc (sizeof(struct node));
                p1->data=adj;
                p1->next= vert[i];
                vert[i]=p1;
                printf("Enter 1 if more nodes need to be be connected:");
                scanf("%d",&ch);
                if (ch!=0)
                    break;
            }
            else
                {
                    printf("Not a Possible Vertex...");
                    j--;
                }
        }
    }
    for (int i=0;i<n;i++)
    {
        printf("%d---",i+1);
        struct node *tmp=vert[i];
        for(  ; tmp!=NULL; tmp=tmp->next )
            printf("%d  \n",tmp->data);
    }
}
