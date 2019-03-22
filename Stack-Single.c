# include <stdio.h>
# define MAX 20
struct Stack
{
	int top;
	int data[MAX];
}s;
void PUSH()
{
int val;
printf("Enter the Element: ");
scanf("%d",&val);
if((s.top)!=MAX-1)
	(s.data)[++(s.top)]=val;
else
	printf("\nStack Overflow..\n");
}

void POP()
{
int val;
if ((s.top)!=-1)
	printf("The Element is %d.",((s.data)[(s.top)--]));
else
	printf("\nStack Underflow..\n");
}
void display()
{
    if(s.top==-1)
        printf("\nEmpty Stack..");
    else
    {   printf("\nStack: ");
        for (int i=0;i<=s.top;i++)
            printf("%d  ",s.data[i]);
    }
    printf("\n");
}
void main()
{
s.top=-1;
int ch;
L:
    printf("1.Insertion \n2.Deletion\nEnter the Choice: ");
    scanf("%d",&ch);
    if (ch==1)
        PUSH ();
    else
        POP ();
    display();
    printf("Enter 1 for reprocess: ");
    scanf("%d",&ch);
    if(ch==1)
        goto L;
}

