# include <stdio.h>

struct stact
{
    int data[50];
    int top[10];
}st;

void initialize (int n,int k)
{
    for (int i=0;i<k;i++)
        st.top[i]=i*((int)n/k);
}

void PUSH (int n,int k,int i)
{
    int top_limit= i*(int)n/k;
    if (n<top_limit)
        top_limit=n;
    if (st.top[--i] < top_limit)
      {
        int val;
        printf("Enter the value");
        scanf("%d",&val);
        st.data[st.top[i]]=val;
      }
    else
        printf("Stack OverFlow...");
}

int POP (int n,int k, int i)
{
    int top_limit= (--i)*(int)n/k;
    if (st.top[i] > top_limit)
        return st.data[st.top[i]++];
    else
    {   printf("Stack Underflow");
        return NULL;
    }
}
void main()
{
    int n, k,i,tmp=1;
    printf("Enter total size");
    scanf("%d",&n);
    printf("Enter NO of Stacks");
    scanf("%d",&k);

    while (tmp==1)
    {
        printf("Enter Stack No");
        scanf("%d",&i);
        if (i>k)
        {
            printf("Wrong STack number");
            continue;
        }
        printf("1.PUSH\n2.POP\n3.display\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: PUSH(n,k,i);
                    break;
            case 2: POP(n,k,i);
                    break;
            case 3: display(n,k);
                    break;
            default:printf("Wrongf Choice...")
        }
        printf("Enter 1 to repeat");
        scanf("%d",&tmp)
    }
}
