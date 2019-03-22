# include <stdio.h>
# include <ctype.h>
#include <math.h>
# include <string.h>

struct stack
{
long data [20];
int top;
};
long power(int a, int b)
{
long pow=1;
for (int i=0;i<b;i++)
    pow*=a;
return pow;
}
void PUSH(struct stack *st,int ch)
{
    (st->data)[++(st->top)]=ch;
}
long POP (struct stack *st)
{
    if (st->top!=-1)
        return (st->data)[(st->top)--];
    else return 0;
}
void perform (struct stack *s,char ch,int c)
{
    int p1,p2;
    if (c==0)
    {
        p2=POP(s);
        p1=POP(s);
    }
    else
    {
        p1=POP(s);
        p2=POP(s);
    }
    switch (ch)
        {
            case '+':PUSH(s,(p2+p1));break;
            case '-':PUSH(s,(p2-p1));break;
            case '*':PUSH(s,(p2*p1));break;
            case '/':PUSH(s,(p2/p1));break;
            case '^':PUSH(s,power(p2,p1));break;
        }
}
void evaluate(char ch, struct stack *s,int c)
{
    if (isdigit(ch)==0)
                perform(s,ch,c);
    else
                PUSH(s,((int)ch-48));
}
void main ()
{
        char exp[30];
        int ch=0;
        struct stack s;
        s.top=-1;
        printf("Enter the Expression :");
        fgets(exp,30,stdin);
        int i=0;
        if (isalnum(exp[0]))
            ch=1;
        for (;ch==1 && exp[i]!='\0';i++)
            evaluate(exp[i],&s,ch);
        for (i=strlen(exp);ch==0 && i>=0;i--)
            evaluate(exp[i],&s,ch);
        printf("\n Answer is %ld\n",s.data[0]);
}
