# include <stdio.h>

struct stack
{
int data[20];
int top[10];
};
void PUSH (struct stack *st,int k,int up)
{
    if (  (st->top[k]) < up      )
    {
        int val;
        printf ("Enter the value to be added: ");
        scanf("%d",&val);
        st->data[ ++(st->top[k]) ]=val;

    }
    else
        printf("\nSTACK %d OVERFLOW...",k);

}
void POP (struct stack *st,int k,int low)
{
	if (       (st->top[k])>=low       )
		printf("Popped Element is %d ",(st->data[(st->top[k])--]));
    else
        printf("\nSTACK %d UNDERFLOW..",k);
}
void main()
{
    int ch,limit,k,n;
    struct stack s;
    printf("Enter the limit of elements : ");
    scanf("%d",&limit);
    printf("Enter the No of Stacks : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        s.top[i]=i*(limit/n)-1;

    L:
        printf("Enter the Stack No.: ");
        scanf("%d",&k);
        if (k==1 ||k==2)
        {
            printf("1.PUSH\n2.POP\nEnter the Choice: ");
            scanf("%d",&ch);
            int up= k*(limit/n);
            if (n<up)   up=n;
            int low= (k-1)*(limit/n);
            if (ch==1)
                PUSH (&s,k,up);
            else if (ch==2)
                POP (&s,k,low);
            else
                printf("Wrong Choice...");
            for (int i=0;i<(int)(1+limit/n);i++)
            {
                printf("\nStack %d is :: ",i);
                for (int j=limit*i/k;j<(limit*(i+1)/n);j++)
                    printf("%d  ",s.data[j]);
            }
        }
        else
            printf("Wrong Choice of Stack");
        printf("\n\nEnter 1 to reprocess the stack");
        scanf("%d",&ch);
        if (ch==1)
            goto L;
    }
